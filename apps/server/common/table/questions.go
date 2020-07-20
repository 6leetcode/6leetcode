package table

import (
	"gorm.io/gorm"
)

// Question question
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

// Create create question
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

// Find find all the questions
func (q *Question) Find() (questions []Question, err error) {
	questions = []Question{}
	err = engine.Order("id").Find(&questions).Error
	return
}

// FindByID find question by id
func (q *Question) FindByID() (err error) {
	err = engine.Where(Question{QuestionID: q.QuestionID}).First(q).Error
	return
}

// QuestionInfo question info
type QuestionInfo struct {
	gorm.Model            `json:"-"`
	QuestionID            int      `json:"question_id"`
	Question              Question `json:"question"`
	FrontendQuestionID    int      `json:"frontend_question_id"`
	CodeSnippets          []byte   `json:"code_snippets" gorm:"type:text"`
	Content               []byte   `json:"content" gorm:"type:text"`
	TranslatedContent     []byte   `json:"translated_content" gorm:"type:text"`
	LangToValidPlayground []byte   `json:"lang_to_valid_playground" gorm:"type:text"`
	SimilarQuestions      []byte   `json:"similar_questions" gorm:"type:text"`
	Stats                 []byte   `json:"stats" gorm:"type:text"`
	TopicTags             []byte   `json:"topic_tags" gorm:"type:text"`
}

// Create create question info
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

// Find find the specific question
func (q *QuestionInfo) Find() (err error) {
	err = engine.Preload("Question").Where(QuestionInfo{QuestionID: q.QuestionID}).First(q).Error
	return
}
