<template>
  <view class="cu-bar tabbar bg-white foot">
    <view class="action" @click="toHome">
      <view
        :class="['cuIcon-' + (selectItem == 'home' ? 'homefill' : 'home') + ' ' + (selectItem == 'home' ? 'text-green' : 'text-gray')]"
      ></view>
      <view :class="[selectItem == 'home' ? 'text-green' : 'text-gray']">首页</view>
    </view>
    <view class="action" @click="toNews">
      <view
        :class="['cuIcon-' + (selectItem == 'news' ? 'newsfill' : 'news') + ' ' + (selectItem == 'news' ? 'text-green' : 'text-gray')]"
      ></view>
      <view :class="[selectItem == 'news' ? 'text-green' : 'text-gray']">文章</view>
    </view>
    <view class="action" @click="toMe">
      <view
        :class="['cuIcon-' + (selectItem == 'me' ? 'myfill' : 'my') + ' ' + (selectItem == 'me' ? 'text-green' : 'text-gray')]"
      ></view>
      <view :class="[selectItem == 'me' ? 'text-green' : 'text-gray']">我</view>
    </view>
  </view>
</template>

<script>
export default {
  data() {
    return {
      Route: ""
    };
  },
  name: "cu-footer",
  props: {
    selectItem: {
      type: String,
      default: ""
    }
  },
  methods: {
    toMe() {
      let length = getCurrentPages().length;
      if (getCurrentPages()[length - 1].route == "pages/me/index") {
        return;
      }
      uni.navigateTo({
        url: "/pages/me/index"
      });
    },
    toHome() {
      let length = getCurrentPages().length;
      if (getCurrentPages()[length - 1].route == "pages/index/index") {
        return;
      }
      uni.navigateTo({
        url: "/pages/index/index"
      });
    },
    toNews() {
      let length = getCurrentPages().length;
      if (getCurrentPages()[length - 1].route == "pages/news/index") {
        return;
      }
      uni.navigateTo({
        url: "/pages/news/index"
      });
    }
  }
};
</script>
