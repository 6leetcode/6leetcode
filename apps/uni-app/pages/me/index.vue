<template>
	<view>
		<scroll-view scroll-y class="scrollPage" @scrolltolower="loadMore">
			<cu-header bgColor="bg-gradual-green" :isHome="false">
				<block slot="content">首页</block>
			</cu-header>
			<view>我的</view>
		</scroll-view>
		<cu-footer select-item='me' />
	</view>
</template>

<script>
	export default {
		data() {
			return {

			}
		},
		methods: {
			list() {

			}
		}
	}
</script>

<style>

</style>
