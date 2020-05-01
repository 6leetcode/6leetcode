package server

import (
	"crypto/sha256"
	"encoding/hex"
	"encoding/json"
	"net/http"
	"strconv"

	"github.com/6leetcode/6leetcode/apps/backends/common/table"

	"github.com/gin-gonic/gin"
	"github.com/tosone/logging"
)

func questionsRouter(server *gin.Engine) {
	server.GET("/questions", func(context *gin.Context) {
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
		if _, err = h.Write(data); err != nil {
			return
		}
		hash = hex.EncodeToString(h.Sum(nil))
	})

	server.GET("/question", func(context *gin.Context) {
		var err error

		var question table.Questions

		var code = 200

		defer func() {
			var msg string

			if code != 200 {
				logging.Error(err)
				msg = errCode[code].Error()
			}
			context.JSON(http.StatusOK, gin.H{"code": code, "msg": msg, "question": question})
		}()

		var sid = context.DefaultQuery("id", "")
		if sid == "" {
			code = 1003
			return
		}

		var id int
		if id, err = strconv.Atoi(sid); err != nil {
			code = 1003
		}

		question.QuestionID = id

		if err = (&question).FindByID(); err != nil {
			code = 1001
		}
	})
}
