import axios from "axios";
import Highlight from "react-highlight";
import { Empty, Layout, Card } from "antd";
import { useEffect, useState } from "react";
import { useParams } from "react-router-dom";
import { CardTabListType } from "antd/lib/card";

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
    setTabList(tabList);
  }, [solutions]);

  useEffect(() => {
    if (tabList.length >= 1) {
      setActive(tabList[0].key);
    }
  }, [tabList]);

  return (
    <Layout.Content className="content">
      <Card
        style={{ width: '100%' }}
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
              solution.language !== active ? "" :
                <Highlight key={solution.filename} className={solution.language.toLowerCase()}>
                  {atob(solution.data).trim()}
                </Highlight>
            );
          })
        }
      </Card>
    </Layout.Content >
  );
}
