package table

import (
	"gorm.io/gorm"
)

// Question question
type Question struct {
	gorm.Model            `json:"-"`
	QuestionID            int    `json:"question_id"`
	QuestionFrontendID    string `json:"question_frontend_id" gorm:"index:unique"`
	Difficulty            string `json:"difficulty"`
	PaidOnly              bool   `json:"paid_only"`
	Title                 string `json:"title"`
	TitleSlug             string `json:"title_slug"`
	TranslatedTitle       string `json:"translated_title"`
	CategoryTitle         string `json:"category_title"`
	TotalAccepted         string `json:"totalAccepted"`
	TotalSubmission       string `json:"totalSubmission"`
	TotalAcceptedRaw      uint64 `json:"totalAcceptedRaw"`
	TotalSubmissionRaw    uint64 `json:"totalSubmissionRaw"`
	ACRate                string `json:"acRate"`
	CodeSnippets          []byte `json:"code_snippets" gorm:"type:text"`
	Content               []byte `json:"content" gorm:"type:text"`
	TranslatedContent     []byte `json:"translated_content" gorm:"type:text"`
	LangToValidPlayground []byte `json:"lang_to_valid_playground" gorm:"type:text"`
	SimilarQuestions      []byte `json:"similar_questions" gorm:"type:text"`
	Stats                 []byte `json:"stats" gorm:"type:text"`
	TopicTags             []byte `json:"topic_tags" gorm:"type:text"`
}

// Create create question
func (q *Question) Create() (err error) {
	var t Question
	if err = engine.Model(new(Question)).Where(
		Question{QuestionID: q.QuestionID},
	).First(&t).Error; err == gorm.ErrRecordNotFound {
		return engine.Create(q).Error
	} else if err != nil {
		return
	}
	if err = engine.Model(new(Question)).Where(Question{QuestionID: q.QuestionID}).Updates(q).Error; err != nil {
		return
	}
	if err = engine.Model(new(Question)).Where(Question{QuestionID: q.QuestionID}).First(&q).Error; err != nil {
		return
	}
	return
}

func (q *Question) FindAll() (questions []Question, err error) {
	err = engine.Find(&questions).Error
	return
}
