const app = getApp();

const _ = require('../../utils/lodash');

Page({
  data: {
    questions: null
  },
  onLoad: function () {
    this.refresh();
    this.loadQuestions();
  },
  loadQuestions: function () {
    let userInfo = wx.getStorageSync('userInfo');
    if (userInfo.nickName && userInfo.nickName != "") {
      wx.request({
        url: app.globalData.URLPrefix + '/all',
        success: res => {
          if (res.data.code == 200) {
            res.data.questions = _.sortBy(res.data.questions, [function (o) { return o.frontend_question_id; }]);
            for (let i = 0; i < res.data.questions.length; i++) {
              if (res.data.questions[i].frontend_question_id < 10) {
                res.data.questions[i].frontend_question_id = "000" + res.data.questions[i].frontend_question_id;
              } else if (res.data.questions[i].frontend_question_id < 100) {
                res.data.questions[i].frontend_question_id = "00" + res.data.questions[i].frontend_question_id;
              } else if (res.data.questions[i].frontend_question_id < 1000) {
                res.data.questions[i].frontend_question_id = "0" + res.data.questions[i].frontend_question_id;
              }
            }
            this.setData({
              questions: res.data.questions
            });
          }
        },
        fail: e => {
          console.log(e)
        }
      });
    }
  },
  refresh: function () {
    let userInfo = wx.getStorageSync('userInfo');
    if (!(userInfo.nickName && userInfo.nickName != "")) {
      wx.showModal({
        title: '提示',
        content: '还未登陆，请登陆。',
        success(res) {
          if (res.confirm) {
            wx.navigateTo({
              url: '/pages/me/index',
            });
          } else if (res.cancel) {
            console.log('用户点击取消');
          }
        }
      });
    }
  }
})
