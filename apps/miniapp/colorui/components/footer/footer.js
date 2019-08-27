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
    addStory() {
      if (this.data.selectItem == 'add') {
        return;
      }
      wx.navigateTo({
        url: '/pages/add/add'
      });
    },
    toMe() {
      if (this.data.selectItem == 'me') {
        return;
      }
      wx.navigateTo({
        url: '/pages/me/me'
      });
    },
    toHome() {
      wx.navigateTo({
        url: '/pages/home/home'
      });
    },
    toExplor() {
      wx.navigateTo({
        url: '/pages/post/single'
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
