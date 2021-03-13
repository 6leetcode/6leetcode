import { Layout } from 'antd';
import { Routes, Route, BrowserRouter as Router } from 'react-router-dom';

import './App.scss';

import Header from "./Header";
import Solutions from "./Solutions";
import Questions from "./Questions";

const localServer = process.env.NODE_ENV === "development" ? "http://127.0.0.1:4000/api" : "/api";

export default function App() {
  return (
    <Layout>
      <Router>
        <Header />
        <Routes>
          <Route path="/" element={<Questions localServer={localServer} />} />
          <Route path="/categories/:category" element={<Questions localServer={localServer} />} />
          <Route path="/solutions/:id" element={<Solutions localServer={localServer} />} />
        </Routes>
        <Layout.Footer style={{ textAlign: 'center' }}>
          6leetcode ©2020 Created by <a rel="noopener noreferrer" target="_blank" href="https://github.com/tosone">Tosone</a>
        </Layout.Footer>
      </Router>
    </Layout >
  );
}
