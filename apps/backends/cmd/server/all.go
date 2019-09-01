package server

import (
	"crypto/sha256"
	"encoding/hex"
	"encoding/json"
	"net/http"

	"github.com/6leetcode/6leetcode/apps/backends/common/table"

	"github.com/gin-gonic/gin"
	"github.com/tosone/logging"
)

func allRouter(server *gin.Engine) {
	server.GET("/all", func(context *gin.Context) {
		var err error

		var questions []table.Questions
		var hash string

		var code = 200

		defer func() {
			var msg string

			if code != 200 {
				logging.Error(err)
				msg = errCode[code].Error()
			}
			context.JSON(http.StatusOK, gin.H{"code": code, "msg": msg, "questions": questions, "hash": hash})
		}()

		if questions, err = new(table.Questions).Find(); err != nil {
			code = 1001
		}

		var data []byte
		if data, err = json.Marshal(questions); err != nil {
			return
		}

		var h = sha256.New()
		h.Write(data)
		hash = hex.EncodeToString(h.Sum(nil))
	})

	server.GET("/all-hash", func(context *gin.Context) {
		var err error

		var hash string

		var code = 200

		defer func() {
			var msg string

			if code != 200 {
				logging.Error(err)
				msg = errCode[code].Error()
			}
			context.JSON(http.StatusOK, gin.H{"code": code, "msg": msg, "hash": hash})
		}()

		var questions []table.Questions

		if questions, err = new(table.Questions).Find(); err != nil {
			code = 1001
		}

		var data []byte
		if data, err = json.Marshal(questions); err != nil {
			return
		}

		var h = sha256.New()
		h.Write(data)
		hash = hex.EncodeToString(h.Sum(nil))
	})
}
