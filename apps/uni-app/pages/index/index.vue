<template>
	<view class="content">
		<view class="text-area">
			<text class="title">{{ title }}</text>
			<text class="title">{{ time }}</text>
		</view>
		<uni-card title="标题文字" extra="额外信息" note="Tips">
			内容主体，可自定义内容及样式
		</uni-card>
	</view>
	
</template>

<script>
	import _ from "lodash"
	import moment from "moment"
	import {uniCard} from "@dcloudio/uni-ui"

	export default { 
		components: {
			uniCard
		},
		data() {
			return {
				title: 'Hello',
				time: moment().format()
			}
		},
		onLoad() {
			console.log(_.VERSION)
		},
		methods: {

		}
	}
</script>

<style>
	.content {

	}

	.text-area {
		
	}

	.title {
		font-size: 36rpx;
		color: #8f8f94;
	}
</style>
