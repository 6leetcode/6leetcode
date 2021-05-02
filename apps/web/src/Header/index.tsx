import { useEffect, useState } from 'react';
import { useTranslation } from 'react-i18next';
import { DownOutlined } from '@ant-design/icons';
import { Link, useLocation } from 'react-router-dom';
import { Layout, Menu, Dropdown, Button } from 'antd';

import { languages } from "../i18n";

export default function Header() {
  const [language, setLanguage] = useState("中文");
  const [menuKey, setMenuKey] = useState("All");

  const { i18n } = useTranslation();

  let location = useLocation();

  useEffect(() => {
    let langText = "";
    for (let i in languages) {
      if (languages[i].name === i18n.language) {
        langText = languages[i].text;
      }
    }
    setLanguage(langText);
  }, [i18n.language])

  useEffect(() => {
    let pathname = location.pathname;
    if (pathname === "/") {
      setMenuKey("All");
    } else {
      let list = pathname.split("/");
      if (list.length === 3 || list[1] === "Categories") {
        setMenuKey(pathname.split("/")[2]);
      }
    }
  }, [location])

  return (
    <Layout.Header className="header">
      <div className="layout">
        <Link to="/">
          <div className="logo" />
        </Link>
        <div className="layoutMenu">
          <Menu theme="light" onClick={(info) => {
            setMenuKey(info.key.toString());
          }} mode="horizontal" selectedKeys={[menuKey]} defaultSelectedKeys={[menuKey]}>
            <Menu.Item key="All" className="menuItem"><Link to="/categories/All">All</Link></Menu.Item>
            <Menu.Item key="Algorithms" className="menuItem"><Link to="/categories/Algorithms">Algorithms</Link></Menu.Item>
            <Menu.Item key="Concurrency" className="menuItem"><Link to="/categories/Concurrency">Concurrency</Link></Menu.Item>
            <Menu.Item key="Database" className="menuItem"><Link to="/categories/Database">Database</Link></Menu.Item>
            <Menu.Item key="Shell" className="menuItem"><Link to="/categories/Shell">Shell</Link></Menu.Item>
          </Menu>
          <div className="language">
            <Dropdown overlay={
              <Menu onClick={(info) => {
                let key = info.key.toString();
                i18n.changeLanguage(key);
                localStorage.setItem("i18n__language", key);
              }}>
                {
                  languages.map(lang => {
                    return (
                      <Menu.Item key={lang.name}>
                        {lang.text}
                      </Menu.Item>
                    );
                  })
                }
              </Menu>
            }>
              <Button>
                {language} <DownOutlined />
              </Button>
            </Dropdown>
          </div>
        </div>
      </div>
    </Layout.Header>
  );
}
