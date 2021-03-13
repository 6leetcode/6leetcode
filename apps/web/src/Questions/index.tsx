import axios from "axios";
import { useEffect, useState } from "react";
import { useTranslation } from "react-i18next";
import { Link, useParams } from 'react-router-dom';
import { Layout, List, Typography, Pagination } from "antd";
import { LockOutlined, UnlockOutlined } from '@ant-design/icons';

const pageSize = 100;

interface IQuestion {
  title: string;
  translated_title: string;
  question_id: number;
  question_frontend_id: string;
  difficulty: string;
  paid_only: boolean;
  title_slug: string;
  category_title: string;
  acRate: string;
}

export default function Questions({ localServer }: any) {
  const [currentPage, setCurrentPage] = useState(1);
  const [totalQuestions, setTotalQuestions] = useState(0);
  const [questions, setQuestions] = useState<IQuestion[]>([]);

  const { t, i18n } = useTranslation();

  let { category } = useParams();

  useEffect(() => {
    let offset = ((currentPage - 1) * pageSize).toString();
    axios.get(localServer + "/questions?limit=" + pageSize.toString() + "&offset=" + offset + "&category=" + category)
      .then(response => {
        if (response.status !== 200) {
          console.error("request questions list with error:", response.status);
        } else {
          setQuestions(response.data.questions);
          setTotalQuestions(response.data.total);
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
                <div className="paid_only"><Typography.Text strong>{t("title.Pay")}</Typography.Text></div>
                <div className="difficult"><Typography.Text strong>{t("title.Difficulty")}</Typography.Text></div>
                <div className="ace"><Typography.Text strong>{t("title.AcRate")}</Typography.Text></div>
              </div>
            </div>
          }
          dataSource={questions}
          renderItem={(item) => (
            <Link to={`/solutions/${item.question_frontend_id}`}>
              <List.Item>
                <div className="questionItem">
                  <div>
                    <span>
                      {item.question_frontend_id}.&nbsp;
                    </span>
                    {i18n.language === "en-US" ? item.title : item.translated_title === "" ? item.title : item.translated_title}
                  </div>
                  <div className="description">
                    <div className="paid_only">{item.paid_only ? <LockOutlined style={{ color: "#cca766" }} /> : <UnlockOutlined style={{ color: "#009975" }} />}</div>
                    <div className="difficult">
                      <span className={item.difficulty.toLowerCase()}>
                        {t(`difficulty.${item.difficulty}`)}
                      </span>
                    </div>
                    <div className="ace">{item.acRate}</div>
                  </div>
                </div>
              </List.Item>
            </Link>
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
