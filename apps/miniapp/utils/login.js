const util = require('./util');

const openId = app => {
  wx.login({
    success: res => {
      if (res.code) {
        wx.request({
          url: app.globalData.URLPrefix + '/jscode2session',
          data: {
            js_code: res.code
          },
          success: res => {
            let userInfo = {
              openId: "",
            };
            if (res.data.code == 200) {
              if (res.data.openId != '') {
                userInfo["openId"] = res.data.openId;
                app.globalData.userInfo = userInfo;
                wx.setStorageSync('userInfo', userInfo);
              }
            }
            app.globalData.userInfo = userInfo;
            wx.setStorageSync('userInfo', userInfo);
          },
          fail: e => {
            console.log(e)
          }
        });
      } else {
        console.log('登录失败！' + res.errMsg)
      }
    },
    fail: e => {
      console.log(e);
    }
  })
};

module.exports = {
  openId: openId,
}