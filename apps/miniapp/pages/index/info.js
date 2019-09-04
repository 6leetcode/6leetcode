const app = getApp();

const util = require('../../utils/util');

Page({
  data: {
    article: {},
    question: null,
    num: "",
    isLoading: true
  },
  onLoad: function (options) {
    let that = this;
    wx.request({
      url: app.globalData.URLPrefix + '/question?id=' + options.id,
      success: function (res) {
        let num = res.data.question.frontend_question_id;
        if (res.data.question.frontend_question_id < 10) {
          num = "000" + res.data.question.frontend_question_id;
        } else if (res.data.question.frontend_question_id < 100) {
          num = "00" + res.data.question.frontend_question_id;
        } else if (res.data.question.frontend_question_id < 1000) {
          num = "0" + res.data.question.frontend_question_id;
        }

        let data = app.towxml.toJson(
          util.base64_decode(res.data.question.question_info.translated_content),
          'html'
        );

        that.setData({
          question: res.data.question,
          num: num,
          isLoading: false,
          article: data
        });
        // data.theme = 'dark';
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
