import React from 'react';

import { Layout, Menu, List, Pagination, Dropdown, Button, Typography } from 'antd';
import { DownOutlined, UserOutlined, LockOutlined, UnlockOutlined } from '@ant-design/icons';
import { MenuInfo } from 'rc-menu/lib/interface';

import axios from 'axios';

import './App.scss';

interface IProps {
}

interface IState {
  menuKey: string;
  questions: {
    title: string,
    translated_title: string,
    question_id: number,
    frontend_question_id: number,
    difficulty: string,
    paid_only: boolean,
    title_slug: string,
    category_title: string,
    acRate: string
  }[];
  totalQuestionLength: number;
  currentPage: number;
  language: string;
}

const leetcodeServer = "https://6leetcode.tosone.cn";
const pageSize = 50;

export default class App extends React.Component<IProps, IState> {
  constructor(props: IProps) {
    super(props);

    this.state = {
      menuKey: "1",
      questions: [{
        title: "",
        translated_title: "",
        question_id: 0,
        frontend_question_id: 0,
        difficulty: "",
        paid_only: false,
        title_slug: "",
        category_title: "",
        acRate: ""
      }],
      totalQuestionLength: 0,
      currentPage: 1,
      language: "中文"
    };
  }

  menuClick = (info: MenuInfo) => {
    console.log(info);
    this.setState({ "menuKey": info.key.toString() });
  }

  componentDidMount() {
    axios.get(leetcodeServer + "/questions?limit=" + pageSize.toString())
      .then(response => {
        if (response.status !== 200) {
          console.error("request questions list with error:", response.status);
        } else {
          this.setState({
            questions: response.data.questions,
            totalQuestionLength: response.data.count
          });
        }
      });
  }

  pageChange = (number: number) => {
    let offset = ((number - 1) * pageSize).toString()
    axios.get(leetcodeServer + "/questions?limit=" + pageSize.toString() + "&offset=" + offset)
      .then(response => {
        if (response.status !== 200) {
          console.error("request questions list with error:", response.status);
        } else {
          this.setState({
            questions: response.data.questions,
            totalQuestionLength: response.data.count
          });
        }
      });
  }

  languageChange = (e: MenuInfo) => {
    if (e.key === "2") {
      this.setState({ language: "English" });
    } else if (e.key === "1") {
      this.setState({ language: "中文" });
    }
  }

  render() {
    return (
      <Layout>
        <Layout.Header className="header">
          <div className="layout">
            <div className="logo" />
            <div className="layoutMenu">
              <Menu theme="light" onClick={this.menuClick} mode="horizontal" defaultSelectedKeys={[this.state.menuKey]}>
                <Menu.Item key="1">All</Menu.Item>
                <Menu.Item key="2">Algorithms</Menu.Item>
                <Menu.Item key="3">Concurrency</Menu.Item>
                <Menu.Item key="4">Database</Menu.Item>
                <Menu.Item key="5">Shell</Menu.Item>
              </Menu>
              <div className="language">
                <Dropdown overlay={
                  <Menu onClick={this.languageChange}>
                    <Menu.Item key="1" icon={<UserOutlined />}>
                      中文
                    </Menu.Item>
                    <Menu.Item key="2" icon={<UserOutlined />}>
                      English
                    </Menu.Item>
                  </Menu>
                }>
                  <Button>
                    {this.state.language} <DownOutlined />
                  </Button>
                </Dropdown>
              </div>
            </div>
          </div>
        </Layout.Header>
        <Layout.Content className="content">
          <div className="site-layout-content">
            <List
              header={
                <div className="questionHeader">
                  <div><Typography.Text strong>题目</Typography.Text></div>
                  <div className="description">
                    <div className="difficult"><Typography.Text strong>付费</Typography.Text></div>
                    <div className="difficult"><Typography.Text strong>难度</Typography.Text></div>
                    <div className="ace"><Typography.Text strong>通过率</Typography.Text></div>
                  </div>
                </div>
              }
              dataSource={this.state.questions}
              renderItem={item => (
                <List.Item>
                  <div className="questionItem">
                    <div>
                      {item.frontend_question_id}. {this.state.language === "English" ? item.title : item.translated_title}
                    </div>
                    <div className="description">
                      <div className="paid_only">{item.paid_only ? <LockOutlined style={{ color: "#cca766" }} /> : <UnlockOutlined style={{ color: "#009975" }} />}</div>
                      <div className="difficult">
                        <span className={item.difficulty === 'Easy' ? 'easy' : item.difficulty === 'Hard' ? 'hard' : 'medium'}>
                          {item.difficulty === "Easy" ? "简单" : item.difficulty === "Hard" ? "困难" : "中等"}
                        </span>
                      </div>
                      <div className="ace">{item.acRate}</div>
                    </div>
                  </div>
                </List.Item>
              )}
            />
            <div className="pagination">
              <Pagination
                current={this.state.currentPage}
                total={this.state.totalQuestionLength}
                showSizeChanger={false}
                pageSize={pageSize}
                onChange={this.pageChange}
              />
            </div>
          </div>
        </Layout.Content>
        <Layout.Footer style={{ textAlign: 'center' }}>
          6leetcode ©2020 Created by <a rel="noopener noreferrer" target="_blank" href="https://github.com/tosone">Tosone</a>
        </Layout.Footer>
      </Layout>
    );
  }
}
