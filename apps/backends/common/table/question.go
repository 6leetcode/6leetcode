package table

import (
	"github.com/jinzhu/gorm"
)

type Questions struct {
	gorm.Model         `json:"-"`
	QuestionInfo       QuestionInfo `gorm:"foreignkey:QuestionInfoRefer"`
	QuestionInfoRefer  uint
	QuestionID         int
	FrontendQuestionID int
	Difficulty         string
	PaidOnly           bool
	Title              string
	TitleSlug          string
	TranslatedTitle    string
	CategoryTitle      string
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

// QuestionInfo ..
type QuestionInfo struct {
	gorm.Model            `json:"-"`
	QuestionID            int
	FrontendQuestionID    int
	CodeSnippets          []byte
	Content               []byte
	LangToValidPlayground []byte
	SimilarQuestions      []byte
	Stats                 []byte
	TopicTags             []byte
	TranslatedContent     []byte
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
