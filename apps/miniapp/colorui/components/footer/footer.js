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
    toMe() {
      if (this.data.route == "pages/me/index") {
        return;
      }
      wx.navigateTo({
        url: '/pages/me/index'
      });
    },
    toHome() {
      if (this.data.route == "pages/index/index") {
        return;
      }
      wx.navigateTo({
        url: '/pages/index/index'
      });
    },
    toNews() {
      if (this.data.route == "pages/news/index") {
        return;
      }
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
