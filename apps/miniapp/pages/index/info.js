const app = getApp();

const util = require('../../utils/util');

Page({
  data: {

  },
  onLoad: function (options) {
    wx.request({
      url: app.globalData.URLPrefix + '/question?id=' + options.id,
      success: function (res) {
        console.log(util.base64_decode(res.data.question.code_snippets))
      },
      fail: function () {

      }
    })
  },
  onReady: function () {

  },
  onShow: function () {

  },
  onHide: function () {

  },
  onUnload: function () {

  },
  onPullDownRefresh: function () {

  },
  onReachBottom: function () {

  },
  onShareAppMessage: function () {

  }
})
