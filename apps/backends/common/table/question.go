package table

import (
	"github.com/jinzhu/gorm"
)

type Questions struct {
	gorm.Model         `json:"-"`
	QuestionInfo       QuestionInfo `gorm:"foreignkey:QuestionInfoRefer" json:"question_info"`
	QuestionInfoRefer  uint         `json:"question_info_refer"`
	QuestionID         int          `json:"question_id"`
	FrontendQuestionID int          `json:"frontend_question_id"`
	Difficulty         string       `json:"difficulty"`
	PaidOnly           bool         `json:"paid_only"`
	Title              string       `json:"title"`
	TitleSlug          string       `json:"title_slug"`
	TranslatedTitle    string       `json:"translated_title"`
	CategoryTitle      string       `json:"category_title"`
}

// Create ..
func (q *Questions) Create() (err error) {
	var t Questions
	if err = engine.Model(new(Questions)).Where(Questions{
		QuestionID: q.QuestionID,
	}).First(&t).Error; err == gorm.ErrRecordNotFound {
		return engine.Create(q).Error
	} else if err != nil {
		return
	}
	return engine.Model(new(Questions)).Where(Questions{QuestionID: q.QuestionID}).Updates(q).Error
}

func (q *Questions) Find() (questions []Questions, err error) {
	questions = []Questions{}
	err = engine.Find(&questions).Error
	return
}

// QuestionInfo ..
type QuestionInfo struct {
	gorm.Model            `json:"-"`
	QuestionID            int    `json:"question_id"`
	FrontendQuestionID    int    `json:"frontend_question_id"`
	CodeSnippets          []byte `json:"code_snippets"`
	Content               []byte `json:"content"`
	LangToValidPlayground []byte `json:"lang_to_valid_playground"`
	SimilarQuestions      []byte `json:"similar_questions"`
	Stats                 []byte `json:"stats"`
	TopicTags             []byte `json:"topic_tags"`
	TranslatedContent     []byte `json:"translated_content"`
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
	err = engine.Where(QuestionInfo{QuestionID: q.QuestionID}).First(q).Error
	return
}
