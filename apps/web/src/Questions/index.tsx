import axios from "axios";
import { useEffect, useState } from "react";
import { useTranslation } from "react-i18next";
import { Link, useParams } from 'react-router-dom';
import { Layout, List, Typography, Pagination } from "antd";
import { CheckOutlined, MinusOutlined } from '@ant-design/icons';

import { IQuestion, LanguagesDefinition } from '../types';

const pageSize = 50;

export default function Questions({ localServer }: any) {
  const [currentPage, setCurrentPage] = useState(1);
  const [totalQuestions, setTotalQuestions] = useState(0);
  const [questions, setQuestions] = useState<IQuestion[]>([]);

  const { t, i18n } = useTranslation();

  let { category } = useParams();

  useEffect(() => {
    axios.get(localServer + "/index.json")
      .then(response => {
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
      .then(response => {
        if (response.status !== 200) {
          console.error("request questions list with error:", response.status);
        } else {
          setQuestions(response.data);
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
              <div><Typography.Text strong>{t("title.Question")}</Typography.Text></div>
              <div className="description">
                {
                  LanguagesDefinition.map((lang) => {
                    return (
                      <div className="paid_only">
                        {lang.language === "CPP" ? "C++" : lang.language}
                      </div>
                    );
                  })
                }
                <div className="difficult"><Typography.Text strong>{t("title.Difficulty")}</Typography.Text></div>
                <div className="ace"><Typography.Text strong>{t("title.AcRate")}</Typography.Text></div>
              </div>
            </div>
          }
          dataSource={questions}
          renderItem={(item) => (
            <List.Item>
              <div className="questionItem">
                <Link to={`/solutions/${item.question_frontend_id}`} onClick={() => { }}>
                  <span>
                    {item.question_frontend_id}.&nbsp;
                  </span>
                  {i18n.language === "en-US" ? item.title : item.translated_title === "" ? item.title : item.translated_title}
                </Link>
                <div className="description">
                  {
                    LanguagesDefinition.map((lang) => {
                      for (let i in item.solutions) {
                        if ((item.category_title === "Algorithms" ||
                          item.category_title === "Concurrency" ||
                          item.category_title === "LCCI" ||
                          item.category_title === "LCOF")
                          && (lang.language === "SQL" || lang.language === "Bash")) {
                          return (
                            <div className="solution_icon" key={i}>
                              <MinusOutlined style={{ color: 'grey' }} />
                            </div>
                          );
                        } else if ((item.category_title === "Bash") && (lang.language === "C" ||
                          lang.language === "CPP" ||
                          lang.language === "Go" ||
                          lang.language === "Java" ||
                          lang.language === "TypeScript" ||
                          lang.language === "PHP" ||
                          lang.language === "Python" ||
                          lang.language === "Rust"
                        )) {
                          return (
                            <div className="solution_icon" key={i}>
                              <MinusOutlined style={{ color: 'grey' }} />
                            </div>
                          )
                        } else
                          if (i === lang.language) {
                            return (
                              <div className="solution_icon" key={i}>
                                <Link to={`/solutions/${item.question_frontend_id}`} onClick={() => {
                                  window.localStorage.setItem("language_show", i);
                                }}>
                                  <CheckOutlined style={{ color: 'green' }} />
                                </Link>
                              </div>
                            );
                          }
                      }
                      return (
                        <div className="solution_icon"></div>
                      );
                    })
                  }
                  <div className="difficult">
                    <span className={item.difficulty.toLowerCase()}>
                      {t(`difficulty.${item.difficulty}`)}
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
