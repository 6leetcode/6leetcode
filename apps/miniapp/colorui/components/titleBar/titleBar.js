const app = getApp();

Component({
  options: {
    addGlobalClass: true,
    multipleSlots: true
  },
  properties: {
    backTo: {
      type: String,
      default: ''
    },
    bgColor: {
      type: String,
      default: ''
    },
    isCustom: {
      type: [Boolean, String],
      default: false
    },
    isBack: {
      type: [Boolean, String],
      default: false
    },
    bgImage: {
      type: String,
      default: ''
    },
    iconName: {
      type: String,
      default: ''
    }
  },
  data: {
    StatusBar: app.globalData.StatusBar,
    CustomBar: app.globalData.CustomBar,
    Custom: app.globalData.Custom
  },
  methods: {
    BackPage() {
      if (this.data.backTo != '') {
        wx.navigateTo({
          url: this.data.backTo,
        });
      } else {
        wx.navigateBack({
          delta: 1
        });
      }
    },
    toHome() {
      wx.reLaunch({
        url: '/pages/index/index',
      })
    }
  }
})
