<template>
	<view class="content">
		<view class="text-area">
			<text class="title">{{title}}</text>
			<text class="title">{{time}}</text>
		</view>
	</view>
</template>

<script>
	import _ from "lodash"
	import moment from "moment"

	export default {
		data() {
			return {
				title: 'Hello',
				time: moment().format()
			}
		},
		onLoad() {
			console.log(_.VERSION)
			console.log(moment.V)
		},
		methods: {

		}
	}
</script>

<style>
	.content {
		display: flex;
		flex-direction: column;
		align-items: center;
		justify-content: center;
	}

	.logo {
		height: 200rpx;
		width: 200rpx;
		margin-top: 200rpx;
		margin-left: auto;
		margin-right: auto;
		margin-bottom: 50rpx;
	}

	.text-area {
		display: flex;
		justify-content: center;
	}

	.title {
		font-size: 36rpx;
		color: #8f8f94;
	}
</style>
