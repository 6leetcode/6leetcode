package server

import (
	"fmt"
	"net/http"

	"github.com/gin-gonic/gin"
	"github.com/spf13/viper"
)

func Initialize() (err error) {
	if viper.GetBool("Debug") {
		gin.SetMode(gin.DebugMode)
	} else {
		gin.SetMode(gin.ReleaseMode)
	}

	var server = gin.Default()

	server.Use(gin.Recovery())
	server.Use(gin.Logger())

	questionsRouter(server)

	server.GET("/", func(c *gin.Context) {
		c.String(200, "Hello, leetcode")
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
