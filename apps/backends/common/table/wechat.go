package table

import "github.com/jinzhu/gorm"

type OpenID struct {
	gorm.Model `json:"-"`
	OpenID     string `json:"openid"`
	SessionKey string `json:"session_key"`
	UnionID    string `json:"unionid"`
	ErrCode    int    `json:"errcode" gorm:"-"`
	ErrMsg     string `json:"errmsg" gorm:"-"`
}

// Find ..
func (o *OpenID) Find() (err error) {
	err = engine.Model(new(OpenID)).Where(OpenID{OpenID: o.OpenID}).First(o).Error
	return
}

// WeChatInfo ..
type WeChatInfo struct {
	gorm.Model `json:"-"`
	OpenID     string `json:"openId"`
	NickName   string `json:"nickName"`
	Country    string `json:"country"`
	Province   string `json:"province"`
	City       string `json:"city"`
	Gender     int    `json:"gender"`
	AvatarUrl  string `json:"avatarUrl"`
	Language   string `json:"language"`
}

// Create ..
func (o *WeChatInfo) Create() (err error) {
	var t WeChatInfo
	if err = engine.Model(new(WeChatInfo)).Where(WeChatInfo{
		OpenID: o.OpenID,
	}).First(&t).Error; err == gorm.ErrRecordNotFound {
		return engine.Create(o).Error
	} else if err != nil {
		return
	}
	return engine.Model(new(WeChatInfo)).Where(WeChatInfo{OpenID: o.OpenID}).Updates(o).Error
}

// Find ..
func (o *WeChatInfo) Find() (err error) {
	err = engine.Model(new(WeChatInfo)).Where(WeChatInfo{OpenID: o.OpenID}).First(o).Error
	return
}
