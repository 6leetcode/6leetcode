package table

import "gorm.io/gorm"

// Solution ..
type Solution struct {
	gorm.Model `json:"-"`
	QuestionID int    `json:"questionId"`
	Language   string `json:"language"`
	Filename   string `json:"filename"`
	Data       []byte `json:"data"`
}

// Create create question
func (s *Solution) Create() (err error) {
	var filter = Solution{
		QuestionID: s.QuestionID,
		Language:   s.Language,
		Filename:   s.Filename,
	}

	var t Solution
	if err = engine.Model(new(Solution)).Where(filter).First(&t).Error; err == gorm.ErrRecordNotFound {
		return engine.Create(s).Error
	} else if err != nil {
		return
	}
	if err = engine.Model(new(Solution)).Where(filter).Updates(s).Error; err != nil {
		return
	}
	return
}

// FindAll find solution by id
func (s *Solution) FindAll() (solutions []Solution, err error) {
	err = engine.Find(&solutions).Error
	return
}

// Find find solution by id
func (s *Solution) Find(id int) (solutions []Solution, err error) {
	err = engine.Model(new(Solution)).Where(Solution{QuestionID: id}).Find(&solutions).Error
	return
}
