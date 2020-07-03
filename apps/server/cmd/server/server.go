package server

import (
	"bytes"
	"fmt"
	"io"
	"net/http"
	"path/filepath"

	"github.com/gin-contrib/cors"
	"github.com/gin-gonic/gin"
	"github.com/robfig/cron"
	"github.com/spf13/viper"
	"github.com/tosone/logging"

	"6leetcode/common/leetcode"
)

func Initialize() (err error) {
	if viper.GetBool("Debug") {
		gin.SetMode(gin.DebugMode)
	} else {
		gin.SetMode(gin.ReleaseMode)
	}

	if err = cronTask(); err != nil {
		return
	}

	var server = gin.Default()

	server.Use(gin.Recovery())
	server.Use(gin.Logger())
	server.Use(cors.Default())

	server.GET("/static/*filepath", bindataStaticHandler)

	questionsRouter(server)

	server.GET("/", func(c *gin.Context) {
		c.Redirect(http.StatusMovedPermanently, "/static")
	})

	server.GET("/ping", func(c *gin.Context) {
		c.String(200, "pong")
	})

	server.NoRoute(func(context *gin.Context) {
		context.JSON(http.StatusOK, gin.H{"code": 200, "msg": "Sorry, nothing here."})
	})

	fmt.Printf("Listening and serving HTTP on %s\n", "0.0.0.0:"+viper.GetString("ServerPort"))
	err = server.Run(":" + viper.GetString("ServerPort"))

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
		var instance *leetcode.Instance
		if instance, err = leetcode.New(); err != nil {
			logging.Error(err)
			return
		}
		if err = instance.All(); err != nil {
			logging.Error(err)
			return
		}
	}); err != nil {
		return
	}
	c.Start()
	return
}
