package table

import (
	"github.com/jinzhu/gorm"
)

type Questions struct {
	gorm.Model         `json:"-"`
	QuestionID         int
	FrontendQuestionID int
	Difficulty         int
	PaidOnly           bool
	Title              string
	TitleSlug          string
	TotalAcs           int
	TotalSubmitted     int
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
