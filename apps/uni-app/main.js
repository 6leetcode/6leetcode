import Vue from 'vue';
import App from './App';

import cuHeader from 'colorui/components/cu-header.vue';
import cuFooter from 'colorui/components/cu-footer.vue';

Vue.component('cu-header', cuHeader);
Vue.component('cu-footer', cuFooter);

Vue.config.productionTip = false;

App.mpType = 'app';

import store from './store';

Vue.prototype.$store = store; 

const app = new Vue({
	...App
});

app.$mount();
