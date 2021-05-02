import _ from 'lodash';
import axios from "axios";
import { useEffect, useState } from "react";
import { useParams } from "react-router-dom";
import { useTranslation } from "react-i18next";
import { CardTabListType } from "antd/lib/card";
import { Empty, Layout, Card, Col, Row } from "antd";

import CodeBox from '../CodeBox';
import { IQuestion, ISolution } from '../types';

const LanguagesDefinition = [
  { "language": "C", "suffix": ".c" },
  { "language": "C++", "suffix": ".cc" },
  { "language": "Go", "suffix": ".go" },
  { "language": "Java", "suffix": ".java" },
  { "language": "JavaScript", "suffix": ".js" },
  { "language": "PHP", "suffix": ".php" },
  { "language": "Python", "suffix": ".py" },
  { "language": "Rust", "suffix": ".rs" },
  { "language": "SQL", "suffix": ".sql" },
  { "language": "Bash", "suffix": ".sh" },
];

export default function Solutions({ localServer }: any) {
  let { id } = useParams();

  const [solutions, setSolutions] = useState<ISolution[]>([]);
  const [tabList, setTabList] = useState<CardTabListType[]>([]);
  const [active, setActive] = useState("");
  const { i18n } = useTranslation();

  const [question, setQuestion] = useState<IQuestion>({ content: "", translated_content: "" } as IQuestion);

  useEffect(() => {
    let item = window.localStorage.getItem(id);
    if (item !== null) {
      setQuestion(JSON.parse(item) as IQuestion);
    }
  }, [id])

  useEffect(() => {
    axios.get(localServer + "/solutions/" + id + ".json")
      .then(response => {
        if (response.status !== 200) {
          console.error("request questions list with error:", response.status);
        } else {
          setSolutions(response.data);
        }
      });
  }, [id, localServer]);

  useEffect(() => {
    let tabList: CardTabListType[] = [];
    for (let lang of LanguagesDefinition) {
      for (let solution of solutions) {
        if (lang.language === solution.language) {
          tabList.push({
            key: solution.language,
            tab: solution.language,
          });
        }
      }
    }
    setTabList(_.uniqBy(tabList, 'key'));
  }, [solutions]);

  useEffect(() => {
    if (tabList.length >= 1) {
      setActive(tabList[0].key);
    }
  }, [tabList]);

  return (
    <Layout.Content className="content">
      <Row>
        <Col span={9}>
          <Card title={
            i18n.language === "en-US" ?
              (question.question_frontend_id + ". " + question.title) :
              (question.question_frontend_id + ". " + question.translated_title)
          } style={{ marginRight: '10px' }}>
            {
              i18n.language === "en-US" ?
                <div dangerouslySetInnerHTML={{ __html: Buffer.from(question.content, "base64").toString("utf-8") }} /> :
                <div dangerouslySetInnerHTML={{ __html: Buffer.from(question.translated_content, "base64").toString("utf-8") }} />
            }
          </Card>
        </Col>
        <Col span={15}>
          <Card
            tabList={tabList}
            defaultActiveTabKey={active}
            activeTabKey={active}
            onTabChange={key => {
              setActive(key);
            }}
          >
            {
              solutions.length === 0 ? <Empty /> : solutions.map(solution => {
                return (
                  solution.language !== active ? "" : <CodeBox solution={solution} key={solution.filename} />
                );
              })
            }
          </Card>
        </Col>
      </Row>
    </Layout.Content >
  );
}
