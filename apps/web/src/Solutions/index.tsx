import _ from 'lodash';
import axios from "axios";
import { Empty, Layout, Card } from "antd";
import { useEffect, useState } from "react";
import { useParams } from "react-router-dom";
import { CardTabListType } from "antd/lib/card";

import CodeBox from '../CodeBox';

interface ISolution {
  questionId: number;
  data: string;
  language: string;
  filename: string;
}

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
    </Layout.Content >
  );
}
