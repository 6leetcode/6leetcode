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

func (c *Controller) questions() {
	c.GET("/questions", questionsRoute)
	c.GET("/questions/:id", questionsGetRoute)
	c.GET("/sync", syncRoute)
}

func syncRoute(context *gin.Context) {
	var err error

	var code = 200

	defer func() {
		var msg string

		if code != 200 {
			logging.Error(err)
			msg = errCode[code].Error()
		}
		context.JSON(http.StatusOK, gin.H{"code": code, "msg": msg})
	}()

	go func() {
		var err error
		if err = syncLeetcode(); err != nil {
			logging.Error(err)
			return
		}
	}()
}

// Options ..
type Options struct {
	Limit  int `form:"limit"`
	Offset int `form:"offset"`
}

func questionsRoute(context *gin.Context) {
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

	var options Options
	if err = context.ShouldBind(&options); err != nil {
		code = 1002
		return
	}

	if questions, err = new(table.Question).Find(options.Offset, options.Limit); err != nil {
		code = 1001
		return
	}

	if hash, err = hashEverything(questions); err != nil {
		return
	}
}

func questionsGetRoute(context *gin.Context) {
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
