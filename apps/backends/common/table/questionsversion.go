package table

import "github.com/jinzhu/gorm"

type QuestionsVersion struct {
	gorm.Model `json:"-"`
	Version    string
}

// Create ..
func (q *QuestionsVersion) Create() (err error) {
	var t QuestionsVersion
	if err = engine.Model(new(QuestionsVersion)).First(&t).Error; err == gorm.ErrRecordNotFound {
		return engine.Create(q).Error
	} else if err != nil {
		return
	}
	return engine.Model(new(QuestionsVersion)).Where(t.ID).Updates(q).Error
}
