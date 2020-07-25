package server

import (
	"bytes"
	"context"
	"fmt"
	"io"
	"net/http"
	"os"
	"os/signal"
	"path/filepath"
	"sync"
	"syscall"
	"time"

	"github.com/gin-contrib/cors"
	"github.com/gin-contrib/gzip"
	"github.com/gin-gonic/gin"
	"github.com/robfig/cron"
	"github.com/spf13/viper"
	"github.com/tosone/logging"

	"6leetcode/common/leetcode"
)

// Controller controller
type Controller struct {
	*gin.Engine
}

// Initialize initialize
func Initialize() (err error) {
	if err = cronTask(); err != nil {
		return
	}
	if viper.GetBool("Debug") {
		gin.SetMode(gin.DebugMode)
	} else {
		gin.SetMode(gin.ReleaseMode)
	}
	var router = gin.Default()

	router.Use(gin.Recovery())
	router.Use(gin.Logger())
	router.Use(cors.Default())

	var rateLimitMiddleware gin.HandlerFunc
	if rateLimitMiddleware, err = rateLimit(); err != nil {
		logging.Fatalf("create gin rate limit middleware with error: %v", err)
	}

	router.Use(rateLimitMiddleware)
	router.Use(gzip.Gzip(gzip.DefaultCompression))

	var controller = &Controller{Engine: router}
	controller.questions()

	router.GET("/static/*filepath", bindataStaticHandler)

	router.GET("/", func(c *gin.Context) {
		c.Redirect(http.StatusMovedPermanently, "/static")
	})

	router.GET("/ping", func(c *gin.Context) {
		c.String(200, "pong")
	})

	router.NoRoute(func(context *gin.Context) {
		context.JSON(http.StatusOK, gin.H{"code": 200, "msg": "Sorry, nothing here."})
	})

	fmt.Printf("Listening and serving HTTP on 0.0.0.0:%s\n", viper.GetString("ServerPort"))

	var srv = &http.Server{
		Addr:    fmt.Sprintf(":%s", viper.GetString("ServerPort")),
		Handler: router,
	}

	go func() {
		if err = srv.ListenAndServe(); err != nil && err != http.ErrServerClosed {
			logging.Fatalf("listen on %s with error: %v", viper.GetString("ServerPort"), err)
		}
	}()

	var quit = make(chan os.Signal, 1)
	signal.Notify(quit, syscall.SIGINT, syscall.SIGTERM)
	<-quit
	logging.Info("server is shutting down")

	var ctx, cancel = context.WithTimeout(context.Background(), 5*time.Second)
	defer cancel()

	var serverShutdown = make(chan bool)
	go func() {
		if err = srv.Shutdown(ctx); err != nil {
			logging.Fatalf("server shutdown with error: %v", err)
		}
		serverShutdown <- true
	}()

	select {
	case <-ctx.Done():
		logging.Info("server cannot shutdown in 5 seconds")
	case <-serverShutdown:
		logging.Info("server shutdown graceful")
	}

	return
}

func bindataStaticHandler(c *gin.Context) {
	var err error

	var file = c.Param("filepath")
	if file == "/" {
		file = "build/index.html"
	} else {
		file = "build" + file
	}

	defer func() {
		if err != nil {
			logging.Error(err)
		}
	}()

	var data []byte
	data, err = Asset(file)
	if err != nil {
		return
	}
	c.Header("Content-Type", mime[filepath.Ext(file)])

	if _, err = io.Copy(c.Writer, bytes.NewReader(data)); err != nil {
		return
	}
}

var mime = map[string]string{
	".html": "text/html",
	".css":  "text/css",
	".js":   "text/javascript",
	".png":  "image/png",
	".map":  "application/json",
	".txt":  "text/plain",
	".json": "application/json",
}

func cronTask() (err error) {
	var c = cron.New()
	if err = c.AddFunc("@daily", func() {
		var err error
		if err = syncLeetcode(); err != nil {
			logging.Error(err)
		}
	}); err != nil {
		return
	}
	c.Start()
	return
}

var syncLocker sync.Locker

func syncLeetcode() (err error) {
	syncLocker.Lock()
	defer syncLocker.Unlock()
	var instance *leetcode.Instance
	if instance, err = leetcode.New(); err != nil {
		return
	}
	if err = instance.All(); err != nil {
		return
	}
	return
}
