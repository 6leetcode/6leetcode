import axios from "axios";
import { useEffect, useState } from "react";
import { Link, useParams } from 'react-router-dom';
import { Layout, List, Typography, Pagination } from "antd";

import { IQuestion } from '../types';

const pageSize = 50;

export default function Questions({ localServer }: any) {
  const [currentPage, setCurrentPage] = useState(1);
  const [totalQuestions, setTotalQuestions] = useState(0);
  const [questions, setQuestions] = useState<IQuestion[]>([]);

  let { category } = useParams();

  useEffect(() => {
    axios.get(localServer + "/index.json")
      .then((response: any) => {
        let findNum = function (str: String): number {
          for (let item of response.data) {
            if (item["category_title"] === str) {
              return item["num"];
            }
          }
          return 0;
        }
        let allNum = function (): number {
          let res: number = 0;
          for (let item of response.data) {
            res += item["num"];
          }
          return res;
        }
        if (response.status !== 200) {
          console.error("request questions list with error:", response.status);
        } else {
          if (category === "All" || category === "" || category === undefined) {
            setTotalQuestions(allNum());
          } else {
            setTotalQuestions(findNum(category));
          }
        }
      });
  }, [localServer, category]);

  useEffect(() => {
    let param = category;
    if (param === "" || param === undefined) {
      param = "All";
    }
    axios.get(localServer + "/questions/" + param + "/" + currentPage + ".json")
      .then((response: any) => {
        if (response.status !== 200) {
          console.error("request questions list with error:", response.status);
        } else {
          let questions = response.data as IQuestion[];
          for (let item in questions) {
            questions[item]["solutions_list"] = [];
            for (let i in questions[item].solutions) {
              questions[item]["solutions_list"].push(i);
            }
          }
          setQuestions(response.data as IQuestion[]);
          for (let question of response.data) {
            window.localStorage.setItem(question.question_id, JSON.stringify(question));
          }
        }
      });
  }, [category, currentPage, localServer]);

  return (
    <Layout.Content className="content">
      <div className="site-layout-content">
        <List
          header={
            <div className="questionHeader">
              <div><Typography.Text strong>Question</Typography.Text></div>
              <div className="description">
                <div className="paid_only" >
                  <Typography.Text strong>Solutions</Typography.Text>
                </div>
                <div className="difficult"><Typography.Text strong>Difficulty</Typography.Text></div>
                <div className="ace"><Typography.Text strong>Ac Rate</Typography.Text></div>
              </div>
            </div>
          }
          dataSource={questions}
          renderItem={item => (
            <List.Item key={item.question_frontend_id}>
              <div className="questionItem" key={item.question_frontend_id}>
                <Link to={`/solutions/${item.question_frontend_id}`} onClick={() => { }}>
                  <span>
                    {item.question_frontend_id}.&nbsp;
                  </span>
                  {item.title}
                </Link>
                <div className="description" >
                  {
                    item.solutions_list.map(solution => {
                      let suffix;
                      if (item.solutions_list[item.solutions_list.length - 1] !== solution) {
                        suffix = (
                          <span>
                            / &nbsp;
                          </span>
                        );
                      }
                      return (
                        <span key={item.question_frontend_id + "-" + solution}>
                          <Link key={item.question_frontend_id + "-" + solution}
                            to={`/solutions/${item.question_frontend_id}`} onClick={() => {
                              window.localStorage.setItem("language_show", solution);
                            }}>
                            <span >
                              {solution === "CPP" ? "C++" : solution}
                            </span>
                          </Link> {suffix}
                        </span>
                      );
                    })
                  }
                  <div className="difficult">
                    <span className={item.difficulty.toLowerCase()}>
                      {item.difficulty}
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
            current={currentPage}
            total={totalQuestions}
            showSizeChanger={false}
            pageSize={pageSize}
            onChange={(page) => {
              setCurrentPage(page);
            }}
          />
        </div>
      </div>
    </Layout.Content>
  );
}
