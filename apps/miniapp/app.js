const login = require('./utils/login');
const Towxml = require('./towxml/main');

App({
  globalData: {
    questions: null,
    userInfo: null,
    userInfoAuth: false,
    // URLPrefix: "https://6leetcode.tosone.cn"
    URLPrefix: "http://127.0.0.1:4000"
  },
  onLaunch: function() {
    wx.getSystemInfo({
      success: e => {
        this.globalData.StatusBar = e.statusBarHeight;
        let custom = wx.getMenuButtonBoundingClientRect();
        this.globalData.Custom = custom;
        this.globalData.CustomBar = custom.bottom + custom.top - e.statusBarHeight;
      }
    });
    // wx.getSetting({
    //   success: res => {
    //     this.globalData.userInfoAuth = res.authSetting['scope.userInfo'];
    //   },
    //   fail: e => {
    //     console.log(e);
    //   }
    // });
    wx.getSetting({
      success: res => {
        this.globalData.userInfoAuth = res.authSetting['scope.userInfo'];
      },
      fail: e => {
        console.log(e);
      }
    });

    let userInfo = wx.getStorageSync('userInfo');
    if (!(userInfo.openId && userInfo.openId != '')) {
      login.openId(this);
    } else {
      this.globalData.userInfo = userInfo;
      let that = this;
      if (userInfo.phone && userInfo.phone != '') {
        wx.request({
          url: that.globalData.URLPrefix + "/user/push/original",
          method: "POST",
          header: {
            AuthId: that.globalData.userInfo.openId
          },
          data: userInfo,
          success: res => {
            if (res.data.code == 200) {
              that.globalData.userInfo.userId = res.data.userId;
              wx.setStorageSync('userInfo', that.globalData.userInfo);
            }
          }
        });
      }
    }

    if (this.globalData.userInfoAuth && userInfo.nickName && userInfo.nickName != '') {
      wx.getUserInfo({
        success: res => {
          let userInfo = {};
          if (userInfo.openId && userInfo.openId != '') {
            userInfo = {
              openId: openId
            };
          }
          userInfo['nickName'] = res.userInfo.nickName;
          userInfo['gender'] = res.userInfo.gender;
          userInfo['language'] = res.userInfo.language;
          userInfo['city'] = res.userInfo.city;
          userInfo['province'] = res.userInfo.province;
          userInfo['country'] = res.userInfo.country;
          this.globalData.userInfo = userInfo;
          wx.setStorageSync('userInfo', userInfo);
        },
        fail: e => {
          console.log(e);
        }
      })
    }
  },
  towxml: new Towxml()
});