package solutiongen

import (
	"fmt"

	"github.com/spf13/viper"

	"leet/common/leetcode"
	"leet/common/solutions"
	"leet/common/table"
)

func Initialize() (err error) {
	var questions []table.Question

	var q *table.Question
	if questions, err = q.FindAll(); err != nil {
		return
	}
	for _, question := range questions {
		var dir = fmt.Sprintf("%s/%s/%s. %s", viper.GetString("QuestionDir"), question.CategoryTitle, leetcode.QuestionID(question.QuestionFrontendID), question.Title)
		if err = solutions.QuestionItem(dir, question.QuestionID); err != nil {
			return
		}
	}

	return
}
