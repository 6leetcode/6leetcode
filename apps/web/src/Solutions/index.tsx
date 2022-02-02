import _ from 'lodash';
import axios from "axios";
import { Base64 } from 'js-base64';
import { useEffect, useState } from "react";
import { useParams } from "react-router-dom";
import { CardTabListType } from "antd/lib/card";
import { Empty, Layout, Card } from "antd";

import CodeBox from '../CodeBox';
import { IQuestion, ISolution, LanguagesDefinition } from '../types';

export default function Solutions({ localServer }: any) {
  let { id } = useParams();

  const [solutions, setSolutions] = useState<ISolution[]>([]);
  const [tabList, setTabList] = useState<CardTabListType[]>([]);
  const [active, setActive] = useState("");

  const [question, setQuestion] = useState<IQuestion>({ content: "", translated_content: "" } as IQuestion);

  useEffect(() => {
    if (id !== null) {
      let item = window.localStorage.getItem("" + id);
      if (item !== null) {
        setQuestion(JSON.parse(item) as IQuestion);
      }
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
          if (lang.language === "CPP") {
            tabList.push({
              key: solution.language,
              tab: "C++",
            });
          } else {
            tabList.push({
              key: solution.language,
              tab: solution.language,
            });
          }
        }
      }
    }
    setTabList(_.uniqBy(tabList, 'key'));
  }, [solutions]);

  useEffect(() => {
    if (tabList.length >= 1) {
      let lang = window.localStorage.getItem("language_show");
      if (lang !== "" && lang !== null) {
        let find = false;
        for (let tab of tabList) {
          if (tab.key === lang) {
            find = true;
            break;
          }
        }
        if (find) {
          setActive(lang);
        } else {
          setActive(tabList[0].key);
        }
      } else {
        setActive(tabList[0].key);
      }
    }
  }, [tabList]);

  return (
    <Layout.Content className="content">
      <Card title={
        (question.question_frontend_id + ". " + question.title)
      } style={{ marginRight: '0px' }}>
        {
          <div dangerouslySetInnerHTML={{
            __html: Base64.decode(question.content)
          }} />
        }
      </Card>
      <Card
        tabList={tabList}
        defaultActiveTabKey={active || ""}
        activeTabKey={active || ""}
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
    </Layout.Content >
  );
}
