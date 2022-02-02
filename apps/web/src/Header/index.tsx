import { Layout, Menu } from 'antd';
import { useEffect, useState } from 'react';
import { Link, useLocation } from 'react-router-dom';

export default function Header() {
  const [menuKey, setMenuKey] = useState("All");

  let location = useLocation();

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
        </div>
      </div>
    </Layout.Header>
  );
}
