<template>
	<view class="content">
		<scroll-view scroll-y class="scrollPage" @scrolltolower="loadMore">
			<cu-header bgColor="bg-gradual-green" :isHome="false">
				<block slot="content">首页</block>
			</cu-header>
			<view class="cu-list menu">
				<view class="cu-item" bindtap="toMeInfo" v-for="question in questions" :key="question.question_id">
					<view class="content">
						<text class="text-grey">{{ question.frontend_question_id }}. {{ question.translated_title }}</text>
						<text v-if="question.paid_only" class="cuIcon-lock text-red"></text>
					</view>
					<view class="action">
						<view class="cu-tag round bg-red" v-if="question.difficulty == 'Hard'">困难</view>
						<view class="cu-tag round bg-yellow" v-if="question.difficulty == 'Medium'">中等</view>
						<view class="cu-tag round bg-green" v-if="question.difficulty == 'Easy'">简单</view>
					</view>
				</view>
			</view>
		</scroll-view>
		<cu-footer select-item='home' />
	</view>
</template>

<script>
	import _ from "lodash";
	import moment from "moment";

	export default {
		components: {

		},
		data() {
			return {
				title: 'Hello',
				time: moment().format(),
				questions: null
			};
		},
		onLoad() {
			uni.request({
				url: 'https://6leetcode.tosone.cn/questions',
				complete: content => {
					content.data.questions = _.sortBy(content.data.questions, [function(o) {
						return o.frontend_question_id;
					}]);
					for (let i = 0; i < content.data.questions.length; i++) {
						if (content.data.questions[i].translated_title.length > 14) {
							content.data.questions[i].translated_title = content.data.questions[i].translated_title.substr(0, 14) + "...";
						}
						if (content.data.questions[i].frontend_question_id < 10) {
							content.data.questions[i].frontend_question_id = "000" + content.data.questions[i].frontend_question_id;
						} else if (content.data.questions[i].frontend_question_id < 100) {
							content.data.questions[i].frontend_question_id = "00" + content.data.questions[i].frontend_question_id;
						} else if (content.data.questions[i].frontend_question_id < 1000) {
							content.data.questions[i].frontend_question_id = "0" + content.data.questions[i].frontend_question_id;
						}
					}
					this.questions = content.data.questions;
				}
			});
		},
		methods: {
			loadMore: () => {

			}
		}
	}
</script>

<style>
	.content {}
</style>
