import React from 'react';
import logo from './logo.svg';
import './App.css';

import { Button } from 'antd';

import moment from 'moment/moment';
import _ from 'lodash';
import axios from 'axios';

function App() {
  axios.get("http://www.baidu.com").then(function (response) {
    console.log(response.data);
    console.log(response.status);
    console.log(response.statusText);
    console.log(response.headers);
    console.log(response.config);
  });
  console.log(moment().format());
  console.log(_.now());
  return (
    <div>
      <Button type="primary">Button</Button>
    </div>
  );
}

export default App;
