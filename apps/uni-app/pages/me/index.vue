<template>
  <view>
    <scroll-view scroll-y class="scrollPage" @scrolltolower="loadMore">
      <cu-header bgcolor="bg-gradual-green">
        <block slot="content">首页</block>
      </cu-header>
      <!--  #ifdef MP-WEIXIN -->
      <button
        v-if="!userInfo['nickName'] || userInfo.nickName == ''"
        open-type="getUserInfo"
        bindgetuserinfo="bindGetUserInfo"
        class="get-userinfo-btn"
      >授权登录</button>
      <view v-if="userInfo['nickName'] && userInfo.nickName != ''" class="userinfo">
        <view class="userinfo-avatar">
          <open-data type="userAvatarUrl"></open-data>
        </view>
        <open-data type="userNickName"></open-data>
      </view>
      <!--  #endif -->
      <view class="cu-list menu sm-border margin-top">
        <view class="cu-item arrow" bindtap="toMeInfo">
          <view class="content">
            <text class="icon-profile text-green"></text>
            <text class="text-grey">个人信息</text>
          </view>
        </view>
        <view class="cu-item">
          <view class="content">
            <text class="icon-post text-green"></text>
            <text class="text-grey">收藏</text>
          </view>
          <view class="action">
            <text class="text-grey text-sm">10 条</text>
          </view>
        </view>
        <view class="cu-item">
          <view class="content">
            <text class="icon-roundcheck text-green"></text>
            <text class="text-grey">已掌握</text>
          </view>
          <view class="action">
            <text class="text-grey text-sm">20 条</text>
          </view>
        </view>
      </view>
    </scroll-view>
    <cu-footer select-item="me" />
  </view>
</template>

<script>
export default {
  data() {
    return {
      userInfo: null
    };
  },
  methods: {
    loadUserInfo() {
      let userInfo = uni.getStorageSync("userInfo");
      if (userInfo) {
        this.userInfo = userInfo;
      }
    }
  },
  onLoad: () => {
    this.loadUserInfo();
  }
};
</script>

<style>
.userinfo {
  position: relative;
  width: 750rpx;
  height: 320rpx;
  color: rgb(88, 88, 88);
  display: flex;
  flex-direction: column;
  align-items: center;
}

.userinfo-avatar {
  overflow: hidden;
  display: block;
  width: 160rpx;
  height: 160rpx;
  margin: 20rpx;
  margin-top: 50rpx;
  border-radius: 50%;
  border: 2px solid #fff;
  box-shadow: 3px 3px 10px rgba(0, 0, 0, 0.2);
}

.get-userinfo-btn {
  color: white;
  border: none;
  margin-top: 118rpx;
  margin-bottom: 118rpx;
  width: 260rpx;
  padding: 10rpx;
  font-size: 38rpx;
  line-height: 1.8;
  background-color: #1aad19;
}
</style>
