const app = getApp();

const login = require('../../utils/login');
const util = require('../../utils/util');

Page({
  data: {
    appId: '',
    canIUse: wx.canIUse('button.open-type.getUserInfo'),
    userInfo: {},
    followings: 0,
    followers: 0,
    num: {
      story: 0
    },
    view: 0
  },
  onLoad: function (options) {
    var that = this;
    let userInfo = wx.getStorageSync('userInfo');
    if (userInfo.openId && userInfo.openId != '' && userInfo.nickName && userInfo.nickName != '') {
      this.setData({
        userInfo: userInfo,
      });
    }
  },
  bindGetUserInfo: function (e) {
    let openId = '';
    if (app.globalData.userInfo && app.globalData.userInfo.openId && app.globalData.userInfo.openId != '') {
      openId = app.globalData.userInfo.openId;
    } else {
      login.openId(app);
      openId = app.globalData.userInfo.openId;
    }
    if (openId == "") {
      util.tipModal("登录失败，请重试。");
      return;
    }
    let userInfo = {
      openId: openId,
      nickName: e.detail.userInfo.nickName,
      city: e.detail.userInfo.city,
      country: e.detail.userInfo.country,
      language: e.detail.userInfo.language,
      avatarUrl: e.detail.userInfo.avatarUrl,
      province: e.detail.userInfo.province,
      gender: e.detail.userInfo.gender,
    };
    wx.setStorageSync('userInfo', userInfo);
    this.setData({
      userInfo: userInfo
    });
    app.globalData.userInfo = userInfo;
    wx.request({
      url: app.globalData.URLPrefix + '/wechatinfo',
      data: userInfo,
      success: res => {
        userInfo["userId"] = res.data.userId;
        userInfo["name"] = res.data.name;
        userInfo["phone"] = res.data.phone;
        userInfo["email"] = res.data.email;
        userInfo["region"] = res.data.region;
        wx.setStorageSync('userInfo', userInfo);
        this.setData({
          userInfo: userInfo
        });
        app.globalData.userInfo = userInfo;
        if (userInfo["userId"] == '') {
          wx.navigateTo({
            url: "/pages/me/edit"
          });
        }
      },
      fail: e => {
        console.log(e);
      }
    });
  },
})