package server

import (
	"net/http"
	"strconv"

	"github.com/gin-gonic/gin"
	"github.com/tosone/logging"

	"6leetcode/common/table"
)

func (c *Controller) questions() {
	var api = c.Group("/api")
	{
		api.GET("/questions", questionsRoute)
		api.GET("/questions/:id", questionsGetRoute)
		api.GET("/sync", syncRoute)
		api.GET("/solutions/:id", solutionsGetRoute)
	}
}

// @Summary get question solution
// @Description get question solution
// @Success 200 {string} string	"ok"
// @Router /sync [get]
func solutionsGetRoute(context *gin.Context) {
	var err error

	var solutions = []table.Solution{}

	var code = 200

	defer func() {
		var msg string

		if code != 200 {
			logging.Error(err)
			msg = errCode[code].Error()
		}
		context.JSON(http.StatusOK, gin.H{"code": code, "msg": msg, "solutions": solutions})
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

	var solution = &table.Solution{}
	solution.QuestionID = id

	if solutions, err = solution.FindByID(); err != nil {
		code = 1001
		return
	}
}

// @Summary Sync question
// @Description Sync question from leetcode
// @Success 200 {string} string	"ok"
// @Router /sync [get]
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

// @Summary Get questions
// @Description Get all of questions
// @Param offset query int false "Offset"
// @Param limit query int false "Limit"
// @Param category query string false "Category"
// @Success 200 {array} table.QuestionDetail
// @Router /questions [get]
func questionsRoute(context *gin.Context) {
	var err error

	var questions []table.Question
	var total int64

	var code = 200

	defer func() {
		var msg string

		if code != 200 {
			logging.Error(err)
			msg = errCode[code].Error()
		}
		context.JSON(http.StatusOK, gin.H{"code": code, "msg": msg, "total": total, "questions": questions})
	}()

	var options table.Options
	if err = context.ShouldBind(&options); err != nil {
		code = 1002
		return
	}

	if questions, err = new(table.Question).Find(options); err != nil {
		code = 1001
		return
	}

	total = new(table.Question).Total(options)
}

// @Summary Get questions
// @Description Get question by id
// @Param id path int true "question id"
// @Success 200 {object} table.QuestionDetail
// @Router /questions/{id} [get]
func questionsGetRoute(context *gin.Context) {
	var err error

	var question = &table.Question{}

	var code = 200

	defer func() {
		var msg string

		if code != 200 {
			logging.Error(err)
			msg = errCode[code].Error()
		}
		context.JSON(http.StatusOK, gin.H{"code": code, "msg": msg, "questionInfo": question})
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

	question.QuestionID = id

	if err = question.FindByID(); err != nil {
		code = 1001
		return
	}
}
