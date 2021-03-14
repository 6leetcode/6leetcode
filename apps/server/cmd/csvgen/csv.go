package csvgen

import (
	"crypto/sha1"
	"encoding/csv"
	"encoding/hex"
	"encoding/json"
	"fmt"
	"io"
	"io/ioutil"
	"os"

	"6leetcode/common/table"
)

type Checksum struct {
	QuestionsHash string `json:"questionsHash"`
	SolutionsHash string `json:"solutionsHash"`
}

func Initialize() (err error) {
	var questionsHash, solutionsHash string
	if questionsHash, err = questions(); err != nil {
		return
	}
	if solutionsHash, err = solutions(); err != nil {
		return
	}

	var checksum = Checksum{questionsHash, solutionsHash}

	var checksumData []byte
	if checksumData, err = json.Marshal(checksum); err != nil {
		return
	}

	if err = ioutil.WriteFile("checksum.json", checksumData, 0644); err != nil {
		return
	}

	return
}

func hash(filename string) (res string, err error) {
	var file *os.File
	if file, err = os.Open(filename); err != nil {
		return
	}

	var h = sha1.New()

	if _, err = io.Copy(h, file); err != nil {
		return
	}

	res = hex.EncodeToString(h.Sum(nil))
	return
}

func solutions() (res string, err error) {
	var csvFile *os.File

	if csvFile, err = os.OpenFile("solutions.csv", os.O_CREATE|os.O_RDWR, 0644); err != nil {
		return
	}

	var csvWriter = csv.NewWriter(csvFile)

	var solutions []table.Solution

	var q *table.Solution
	if solutions, err = q.FindAll(); err != nil {
		return
	}

	csvWriter.Write([]string{"questionId", "language", "filename", "data"})

	for _, solution := range solutions {
		csvWriter.Write([]string{
			fmt.Sprintf("%d", solution.QuestionID),
			solution.Language, solution.Filename, solution.Filename, string(solution.Data)})
	}

	csvWriter.Flush()

	if err = csvFile.Close(); err != nil {
		return
	}

	if res, err = hash("solutions.csv"); err != nil {
		return
	}

	return
}

func questions() (res string, err error) {
	var csvFile *os.File

	if csvFile, err = os.OpenFile("questions.csv", os.O_CREATE|os.O_RDWR, 0644); err != nil {
		return
	}

	var csvWriter = csv.NewWriter(csvFile)

	var questions []table.Question

	var q *table.Question
	if questions, err = q.FindAll(); err != nil {
		return
	}

	csvWriter.Write([]string{
		"id", "question_frontend_id", "difficulty", "paid_only", "title", "title_slug",
		"translated_title", "category_title", "totalAccepted", "totalSubmission", "totalAcceptedRaw", "totalSubmissionRaw",
		"acRate", "code_snippets", "content", "translated_content", "lang_to_valid_playground", "similar_questions", "stats", "topic_tags",
	})

	for _, question := range questions {
		csvWriter.Write([]string{
			fmt.Sprintf("%d", question.QuestionID),
			question.QuestionFrontendID, question.Difficulty,
			fmt.Sprintf("%t", question.PaidOnly),
			question.Title, question.TitleSlug, question.TranslatedTitle, question.CategoryTitle,
			question.TotalAccepted, question.TotalSubmission,
			fmt.Sprintf("%d", question.TotalAcceptedRaw),
			fmt.Sprintf("%d", question.TotalSubmissionRaw),
			question.ACRate, string(question.CodeSnippets),
			string(question.Content), string(question.TranslatedContent),
			string(question.LangToValidPlayground), string(question.SimilarQuestions), string(question.Stats),
		})
	}

	csvWriter.Flush()

	if err = csvFile.Close(); err != nil {
		return
	}

	if res, err = hash("questions.csv"); err != nil {
		return
	}

	return
}
