package jsongen

import (
	"encoding/json"
	"fmt"
	"os"

	"github.com/spf13/viper"
	"github.com/unknwon/com"

	"leet/common/table"
)

func Initialize() (err error) {
	var categories []string
	var q *table.Question
	if categories, err = q.Categories(); err != nil {
		return
	}
	categories = append(categories, "All")
	for _, typ := range categories {
		if err = questions(typ); err != nil {
			return
		}
	}

	if err = solutions(); err != nil {
		return
	}

	if err = index(); err != nil {
		return
	}

	return
}

func index() (err error) {
	var q *table.Question

	var results []table.Result
	if results, err = q.Raw(); err != nil {
		return
	}
	var dir = viper.GetString("Public")
	if !com.IsDir(dir) {
		if err = os.MkdirAll(dir, 0755); err != nil {
			return
		}
	}
	if err = writeFile(fmt.Sprintf("%s/index.json", dir), results); err != nil {
		return
	}
	return
}

func solutions() (err error) {
	var q *table.Question
	var questions []table.Question
	if questions, err = q.FindAll(); err != nil {
		return
	}
	var dir = fmt.Sprintf("%s/solutions", viper.GetString("Public"))
	if !com.IsDir(dir) {
		if err = os.MkdirAll(dir, 0755); err != nil {
			return
		}
	}
	var s *table.Solution
	for _, question := range questions {
		var solutions []table.Solution
		if solutions, err = s.Find(question.QuestionID); err != nil {
			return
		}
		if err = writeFile(fmt.Sprintf("%s/%d.json", dir, question.QuestionID), solutions); err != nil {
			return
		}
	}
	return
}

const paging = 50

type Question struct {
	table.Question
	Solutions map[string]int `json:"solutions"`
}

func questions(typ string) (err error) {
	var questions []table.Question

	var q *table.Question
	if typ == "All" {
		if questions, err = q.FindAll(); err != nil {
			return
		}
	} else {
		if questions, err = q.Find(typ); err != nil {
			return
		}
	}

	var dir = fmt.Sprintf("%s/questions/%s", viper.GetString("Public"), typ)
	if !com.IsDir(dir) {
		if err = os.MkdirAll(dir, 0755); err != nil {
			return
		}
	}

	var gotQuestions = []Question{}
	var s *table.Solution

	for index, question := range questions {
		var q = Question{Solutions: make(map[string]int)}
		q.Question = question
		var results []table.SolutionResult
		if results, err = s.Count(q.QuestionID); err != nil {
			return
		}
		for _, r := range results {
			q.Solutions[r.Language] = r.Num
		}
		gotQuestions = append(gotQuestions, q)

		if index != 0 && (index+1)%paging == 0 {
			if err = writeFile(fmt.Sprintf("%s/%d.json", dir, (index+1)/paging), gotQuestions); err != nil {
				return
			}
			gotQuestions = []Question{}
		}
	}

	if len(gotQuestions) != 0 {
		if err = writeFile(fmt.Sprintf("%s/%d.json", dir, len(questions)/paging+1), gotQuestions); err != nil {
			return
		}
	}

	return
}

func writeFile(filename string, content interface{}) (err error) {
	var data []byte
	if data, err = json.Marshal(content); err != nil {
		return
	}
	if err = os.WriteFile(filename, data, 0644); err != nil {
		return
	}
	return
}
