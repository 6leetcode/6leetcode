import Taro, { Component, Config } from '@tarojs/taro';
import { View, Text } from '@tarojs/components';

import { AtTabBar, AtList, AtListItem } from "taro-ui";

import moment from 'moment/moment';
import _ from 'lodash';

import './index.scss';

const tabList = [
  { title: '题目' },
  { title: '设置' }
];

export default class Index extends Component<{}, { current: number, questions: Array<object> }> {
  constructor() {
    super(...arguments);
    this.state = {
      current: 0,
      questions: [],
    };
    console.log(moment().format());
    console.log(_.now());
  }

  componentWillMount() {
    let that = this;
    Taro.request({
      url: 'https://6leetcode-dev.tosone.cn/questions', //仅为示例，并非真实的接口地址
      success: function (res) {
        that.setState({ questions: res.data.questions })
        console.log(res.data)
      }
    })
  }

  handleClick(value: number) {
    this.setState({ current: value });
    Taro.setNavigationBarTitle({ title: tabList[value].title });
  }

  config: Config = {
    navigationBarTitleText: tabList[0].title
  }

  renderMenu() {
    const { current } = this.state;
    return (
      <AtTabBar
        fixed
        tabList={tabList}
        onClick={this.handleClick.bind(this)}
        current={current}
      />
    );
  }

  render() {
    const { questions } = this.state;
    const questionsContent = questions.map(question => {
      return (
        <AtList>
          <AtListItem
            title={question.title}
            extraText={question.difficulty}
          />
        </AtList>
      );
    });
    return (
      <View>
        <View style={{ display: this.state.current == 0 ? 'block' : 'none' }}>
          {questionsContent}
          {this.renderMenu()}
        </View>
        <View style={{ display: this.state.current == 1 ? 'block' : 'none' }}>
          <Text>hello</Text>
          {this.renderMenu()}
        </View>
        <View style={{ display: this.state.current == 2 ? 'block' : 'none' }}>
          <Text>我</Text>
          {this.renderMenu()}
        </View>
      </View>
    );
  }
}
