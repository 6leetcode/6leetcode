import { Layout } from 'antd';
import { Routes, Route, HashRouter } from 'react-router-dom';

import './App.scss';

import Header from "./Header";
import Solutions from "./Solutions";
import Questions from "./Questions";

const localServer = process.env.NODE_ENV === "development" ? "/db" : "/db";

export default function App() {
  return (
    <Layout>
      <HashRouter>
        <Header />
        <Routes>
          <Route path="/" element={<Questions localServer={localServer} />} />
          <Route path="/categories/:category" element={<Questions localServer={localServer} />} />
          <Route path="/solutions/:id" element={<Solutions localServer={localServer} />} />
        </Routes>
        <Layout.Footer style={{ textAlign: 'center' }}>
          6leetcode ©2020 Created by <a rel="noopener noreferrer" target="_blank" href="https://github.com/tosone">Tosone</a>
        </Layout.Footer>
      </HashRouter>
    </Layout>
  );
}
