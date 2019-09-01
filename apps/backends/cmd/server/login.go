package server

import (
	"encoding/json"
	"net/http"
	"time"

	"github.com/6leetcode/6leetcode/apps/backends/common/table"

	"github.com/gin-gonic/gin"
	"github.com/parnurzeal/gorequest"
	"github.com/spf13/viper"
	"github.com/tosone/logging"
)

func loginRouter(server *gin.Engine) {
	server.GET("/jscode2session", func(context *gin.Context) {
		var err error

		var openID string

		var code = 200

		defer func() {
			var msg string

			if code != 200 {
				logging.Error(err)
				msg = errCode[code].Error()
			}
			context.JSON(http.StatusOK, gin.H{"code": code, "msg": msg, "openId": openID})
		}()

		var jsCode = context.DefaultQuery("js_code", "")
		if jsCode == "" {
			code = 1003
			return
		}

		resp, body, errs := gorequest.New().
			Retry(3, 5*time.Second, http.StatusBadRequest, http.StatusInternalServerError).
			Timeout(time.Second * 3).Get("https://api.weixin.qq.com/sns/jscode2session").
			Query("appid=" + viper.GetString("WeChat.AppID")).
			Query("secret=" + viper.GetString("WeChat.Secret")).
			Query("js_code=" + jsCode).
			Query("grant_type=authorization_code").
			EndBytes()
		if len(errs) != 0 {
			err = errs[len(errs)-1]
			code = 1001
			return
		}
		if resp.StatusCode != 200 {
			code = 1001
			return
		}
		var data table.OpenID
		if err = json.Unmarshal(body, &data); err != nil {
			code = 1002
			return
		}
		openID = data.OpenID

		var weChatInfo = &table.WeChatInfo{OpenID: openID}

		if err = weChatInfo.Create(); err != nil {
			code = 1002
			return
		}
	})
}
