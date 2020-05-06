package server

import (
	"crypto/sha256"
	"encoding/hex"
	"encoding/json"
	"net/http"
	"strconv"

	"github.com/gin-gonic/gin"
	"github.com/tosone/logging"

	"6leetcode/common/table"
)

func questionsRouter(server *gin.Engine) {
	server.GET("/hash/questions", func(context *gin.Context) {
		var err error

		var questions []table.Question
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

		if questions, err = new(table.Question).Find(); err != nil {
			code = 1001
		}

		if hash, err = hashEverything(questions); err != nil {
			return
		}
	})

	server.GET("/questions", func(context *gin.Context) {
		var err error

		var questions []table.Question
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

		if questions, err = new(table.Question).Find(); err != nil {
			code = 1001
			return
		}

		if hash, err = hashEverything(questions); err != nil {
			return
		}
	})

	server.GET("/questions/:id", func(context *gin.Context) {
		var err error

		var questionInfo = &table.QuestionInfo{}
		var hash string

		var code = 200

		defer func() {
			var msg string

			if code != 200 {
				logging.Error(err)
				msg = errCode[code].Error()
			}
			context.JSON(http.StatusOK, gin.H{"code": code, "msg": msg, "questionInfo": questionInfo, "hash": hash})
		}()

		var sid = context.Param("id")
		if sid == "" {
			code = 1003
			return
		}

		var id int
		if id, err = strconv.Atoi(sid); err != nil {
			code = 1003
			return
		}

		questionInfo.QuestionID = id

		if err = questionInfo.Find(); err != nil {
			code = 1001
			return
		}

		if hash, err = hashEverything(questionInfo); err != nil {
			return
		}
	})

	server.GET("/hash/questions/:id", func(context *gin.Context) {
		var err error

		var questionInfo = &table.QuestionInfo{}
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

		var sid = context.Param("id")
		if sid == "" {
			code = 1003
			return
		}

		var id int
		if id, err = strconv.Atoi(sid); err != nil {
			code = 1003
			return
		}

		questionInfo.QuestionID = id

		if err = questionInfo.Find(); err != nil {
			code = 1001
			return
		}

		if hash, err = hashEverything(questionInfo); err != nil {
			return
		}
	})
}

func hashEverything(content interface{}) (hash string, err error) {
	var data []byte
	if data, err = json.Marshal(content); err != nil {
		return
	}

	var h = sha256.New()
	if _, err = h.Write(data); err != nil {
		return
	}
	hash = hex.EncodeToString(h.Sum(nil))
	return
}
