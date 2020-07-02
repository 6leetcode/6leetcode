package table

import (
	"github.com/jinzhu/gorm"
)

type Question struct {
	gorm.Model         `json:"-"`
	QuestionID         int    `json:"question_id"`
	FrontendQuestionID int    `json:"frontend_question_id"`
	Difficulty         string `json:"difficulty"`
	PaidOnly           bool   `json:"paid_only"`
	Title              string `json:"title"`
	TitleSlug          string `json:"title_slug"`
	TranslatedTitle    string `json:"translated_title"`
	CategoryTitle      string `json:"category_title"`
	TotalAccepted      string `json:"totalAccepted"`
	TotalSubmission    string `json:"totalSubmission"`
	TotalAcceptedRaw   uint64 `json:"totalAcceptedRaw"`
	TotalSubmissionRaw uint64 `json:"totalSubmissionRaw"`
	ACRate             string `json:"acRate"`
}

// Create ..
func (q *Question) Create() (err error) {
	var t Question
	if err = engine.Model(new(Question)).Where(Question{
		QuestionID: q.QuestionID,
	}).First(&t).Error; err == gorm.ErrRecordNotFound {
		return engine.Create(q).Error
	} else if err != nil {
		return
	}
	return engine.Model(new(Question)).Where(Question{QuestionID: q.QuestionID}).Updates(q).Error
}

func (q *Question) Find() (questions []Question, err error) {
	questions = []Question{}
	err = engine.Find(&questions).Error
	return
}

func (q *Question) FindByID() (err error) {
	err = engine.Where(Question{QuestionID: q.QuestionID}).First(q).Error
	return
}

// QuestionInfo ..
type QuestionInfo struct {
	gorm.Model            `json:"-"`
	QuestionID            int      `json:"question_id"`
	Question              Question `json:"question"`
	FrontendQuestionID    int      `json:"frontend_question_id"`
	CodeSnippets          []byte   `json:"code_snippets"`
	Content               []byte   `json:"content"`
	TranslatedContent     []byte   `json:"translated_content"`
	LangToValidPlayground []byte   `json:"lang_to_valid_playground"`
	SimilarQuestions      []byte   `json:"similar_questions"`
	Stats                 []byte   `json:"stats"`
	TopicTags             []byte   `json:"topic_tags"`
}

// Create ..
func (q *QuestionInfo) Create() (err error) {
	var t QuestionInfo
	if err = engine.Model(new(QuestionInfo)).Where(QuestionInfo{
		QuestionID: q.QuestionID,
	}).First(&t).Error; err == gorm.ErrRecordNotFound {
		return engine.Create(q).Error
	} else if err != nil {
		return
	}
	return engine.Model(new(QuestionInfo)).Where(QuestionInfo{QuestionID: q.QuestionID}).Updates(q).Error
}

func (q *QuestionInfo) Find() (err error) {
	err = engine.Preload("Question").Where(QuestionInfo{QuestionID: q.QuestionID}).First(q).Error
	return
}
