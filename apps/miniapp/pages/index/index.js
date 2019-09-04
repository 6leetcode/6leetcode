const app = getApp();
const fs = wx.getFileSystemManager();

const _ = require('../../utils/lodash');

Page({
  data: {
    questions: null,
    isLoading: true,
    num: 30
  },
  onLoad: function () {
    let that = this;
    let questionsHash = wx.getStorageSync('questionsHash');
    if (questionsHash == "") {
      this.loadQuestions();
    } else {
      if (app.globalData.questions != null) {
        that.setData({
          questions: app.globalData.questions.slice(0, that.data.num),
          isLoading: false
        });
      } else {
        fs.readFile({
          filePath: `${wx.env.USER_DATA_PATH}/questions.txt`,
          encoding: 'utf8',
          success: function (res) {
            app.globalData.questions = JSON.parse(res.data);
            fs.getFileInfo({
              filePath: `${wx.env.USER_DATA_PATH}/questions.txt`,
              success: function (res) {
                console.log("questions.txt " + (res.size / 1024).toFixed(1) + "KB");
              }
            });
            that.setData({
              questions: app.globalData.questions.slice(0, that.data.num),
              isLoading: false
            });
            that.loadQuestions();
          },
          fail: function () {
            that.loadQuestions();
          }
        });
      }
    }
    this.refresh();
  },
  loadQuestions: function () {
    let userInfo = wx.getStorageSync('userInfo');
    if (userInfo.nickName && userInfo.nickName != "") {
      wx.request({
        url: app.globalData.URLPrefix + '/questions',
        success: res => {
          if (res.data.code == 200) {
            if (wx.getStorageSync('questionsHash') == res.data.hash) {
              return;
            }
            res.data.questions = _.sortBy(res.data.questions, [function (o) {
              return o.frontend_question_id;
            }]);
            for (let i = 0; i < res.data.questions.length; i++) {
              if (res.data.questions[i].translated_title.length > 14) {
                res.data.questions[i].translated_title = res.data.questions[i].translated_title.substr(0, 14) + "...";
              }
              if (res.data.questions[i].frontend_question_id < 10) {
                res.data.questions[i].frontend_question_id = "000" + res.data.questions[i].frontend_question_id;
              } else if (res.data.questions[i].frontend_question_id < 100) {
                res.data.questions[i].frontend_question_id = "00" + res.data.questions[i].frontend_question_id;
              } else if (res.data.questions[i].frontend_question_id < 1000) {
                res.data.questions[i].frontend_question_id = "0" + res.data.questions[i].frontend_question_id;
              }
            }
            this.setData({
              questions: res.data.questions.slice(0, this.data.num),
              isLoading: false
            });
            app.globalData.questions = res.data.questions;
            fs.writeFileSync(`${wx.env.USER_DATA_PATH}/questions.txt`, JSON.stringify(res.data.questions), 'utf8');
            wx.setStorageSync('questionsHash', res.data.hash);
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
  },
  itemTap: function (e) {
    wx.navigateTo({
      url: "/pages/index/info?id=" + e.currentTarget.dataset.id
    });
  },
  loadMore: function () {
    console.log("bottom");
    this.setData({
      questions: app.globalData.questions.slice(0, this.data.num + 30),
      num: this.data.num + 30
    });
  },
})
