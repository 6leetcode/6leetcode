package server

import (
	"fmt"
	"net/http"

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

	questionsRouter(server)

	server.GET("/", func(c *gin.Context) {
		c.String(200, "Hello, 6leetcode")
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
