import React from 'react';
import { Layout, Menu, List, Pagination } from 'antd';

import moment from 'moment/moment';
import axios from 'axios';
import _ from 'lodash';

import './App.scss';

const { Header, Content, Footer } = Layout;

const leetcodeServer = "http://localhost:4000";

class App extends React.Component {
  state = {
    menuKey: "1",
    questions: [{ "title": "" }],
    totalQuestions: [],
    totalQuestionLength: 0,
    pageSize: 50,
    currentPage: 1
  };

  menuClick = (e: { key: any; }) => {
    this.setState({ "menuKey": e.key });
  }

  componentDidMount() {
    axios.get(leetcodeServer + "/questions").then(response => {
      if (response.status !== 200) {
        console.error("request questions list with error:", response.status);
      } else {
        this.setState({
          questions: response.data.questions.slice(0, this.state.pageSize),
          totalQuestions: response.data.questions,
          totalQuestionLength: response.data.questions.length
        });
      }
    });
  }

  pageChange = (number: number) => {
    this.setState({
      currentPage: number,
      questions: this.state.totalQuestions.slice((number - 1) * this.state.pageSize, number * this.state.pageSize)
    });
  }

  render() {
    console.log(moment().format());
    console.log(_.now());

    return (
      <Layout>
        <Header className="header">
          <div className="layout">
            <div className="logo" />
            <Menu theme="light" mode="horizontal" defaultSelectedKeys={[this.state.menuKey]}>
              <Menu.Item onClick={this.menuClick} key="1">Algorithms</Menu.Item>
              <Menu.Item onClick={this.menuClick} key="2">Concurrency</Menu.Item>
              <Menu.Item onClick={this.menuClick} key="3">Database</Menu.Item>
              <Menu.Item onClick={this.menuClick} key="4">Shell</Menu.Item>
            </Menu>
          </div>
        </Header>
        <Content className="content">
          <div className="site-layout-content">
            <List
              size="small"
              header={<div>Header</div>}
              bordered
              dataSource={this.state.questions}
              renderItem={item => <List.Item>{item.title}</List.Item>}
            />
            <div className="pagination">
              <Pagination
                current={this.state.currentPage}
                total={this.state.totalQuestionLength}
                showSizeChanger={false}
                pageSize={this.state.pageSize}
                onChange={this.pageChange}
              />
            </div>
          </div>
        </Content>
        <Footer style={{ textAlign: 'center' }}>6leetcode ©2020 Created by <a rel="noopener noreferrer" target="_blank" href="https://github.com/tosone">Tosone</a></Footer>
      </Layout>
    );
  }
}

export default App;
