package server

import (
	"context"
	"fmt"
	"net/http"
	"os"
	"os/signal"
	"sync"
	"syscall"
	"time"

	"github.com/gin-contrib/cors"
	"github.com/gin-contrib/gzip"
	"github.com/gin-gonic/gin"
	"github.com/robfig/cron"
	"github.com/spf13/viper"
	swaggerFiles "github.com/swaggo/files"
	ginSwagger "github.com/swaggo/gin-swagger"
	"github.com/tosone/logging"

	"6leetcode/common/leetcode"
	_ "6leetcode/docs"
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

	router.GET("/swagger/*any", ginSwagger.WrapHandler(
		swaggerFiles.Handler, ginSwagger.URL("/swagger/doc.json")))

	var rateLimitMiddleware gin.HandlerFunc
	if rateLimitMiddleware, err = rateLimit(); err != nil {
		logging.Fatalf("create gin rate limit middleware with error: %v", err)
	}

	router.Use(rateLimitMiddleware)
	router.Use(gzip.Gzip(gzip.DefaultCompression))

	var controller = &Controller{Engine: router}
	controller.questions()

	router.NoRoute(func(context *gin.Context) {
		context.JSON(http.StatusOK, gin.H{"code": 200, "msg": "Sorry, nothing here."})
	})

	fmt.Printf("Listening and serving HTTP on http://127.0.0.1:%s\n", viper.GetString("ServerPort"))

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
	fmt.Println()
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

var syncLocker = sync.Mutex{}

func syncLeetcode() (err error) {
	syncLocker.Lock()
	defer syncLocker.Unlock()
	var instance *leetcode.Instance
	if instance, err = leetcode.New(); err != nil {
		return
	}
	if _, err = instance.All(false); err != nil {
		return
	}
	return
}
