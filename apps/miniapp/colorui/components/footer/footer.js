const app = getApp();
Component({
  options: {
    addGlobalClass: true
  },
  properties: {
    selectItem: {
      type: String,
      value: ''
    }
  },
  data: {
    route: ''
  },
  methods: {
    toMy() {
      wx.navigateTo({
        url: '/pages/my/index'
      });
    },
    toHome() {
      wx.navigateTo({
        url: '/pages/index/index'
      });
    },
    toNews() {
      wx.navigateTo({
        url: '/pages/news/index'
      });
    }
  },
  lifetimes: {
    attached() {
      let pages = getCurrentPages();
      let currentPage = pages[pages.length - 1];
      this.setData({
        route: currentPage.route
      });
    }
  }
});
