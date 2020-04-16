<template>
  <view>
    <scroll-view scroll-y class="scrollPage" @scrolltolower="loadMore">
      <cu-header bgcolor="bg-gradual-green" :isHome="false">
        <block slot="content">首页</block>
      </cu-header>
      <view>正在建设中。。。</view>
    </scroll-view>
    <cu-footer select-item="news" />
  </view>
</template>

<script>
export default {
  data() {
    return {};
  },
  methods: {}
};
</script>

<style>
</style>
