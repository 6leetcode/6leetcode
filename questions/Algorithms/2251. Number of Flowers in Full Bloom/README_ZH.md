### [花期内花的数目](https://leetcode-cn.com/problems/number-of-flowers-in-full-bloom)

<p>给你一个下标从 <strong>0</strong>&nbsp;开始的二维整数数组&nbsp;<code>flowers</code>&nbsp;，其中&nbsp;<code>flowers[i] = [start<sub>i</sub>, end<sub>i</sub>]</code>&nbsp;表示第&nbsp;<code>i</code>&nbsp;朵花的 <strong>花期</strong>&nbsp;从&nbsp;<code>start<sub>i</sub></code>&nbsp;到&nbsp;<code>end<sub>i</sub></code>&nbsp;（都 <strong>包含</strong>）。同时给你一个下标从 <strong>0</strong>&nbsp;开始大小为 <code>n</code>&nbsp;的整数数组&nbsp;<code>persons</code>&nbsp;，<code>persons[i]</code>&nbsp;是第&nbsp;<code>i</code>&nbsp;个人来看花的时间。</p>

<p>请你返回一个大小为 <code>n</code>&nbsp;的整数数组<em>&nbsp;</em><code>answer</code>&nbsp;，其中&nbsp;<code>answer[i]</code>是第&nbsp;<code>i</code>&nbsp;个人到达时在花期内花的&nbsp;<strong>数目</strong>&nbsp;。</p>

<p>&nbsp;</p>

<p><strong>示例 1：</strong></p>

<p><img alt="" src="https://assets.leetcode.com/uploads/2022/03/02/ex1new.jpg" style="width: 550px; height: 216px;"></p>

<pre><b>输入：</b>flowers = [[1,6],[3,7],[9,12],[4,13]], persons = [2,3,7,11]
<b>输出：</b>[1,2,2,2]
<strong>解释：</strong>上图展示了每朵花的花期时间，和每个人的到达时间。
对每个人，我们返回他们到达时在花期内花的数目。
</pre>

<p><strong>示例 2：</strong></p>

<p><img alt="" src="https://assets.leetcode.com/uploads/2022/03/02/ex2new.jpg" style="width: 450px; height: 195px;"></p>

<pre><b>输入：</b>flowers = [[1,10],[3,3]], persons = [3,3,2]
<b>输出：</b>[2,2,1]
<b>解释：</b>上图展示了每朵花的花期时间，和每个人的到达时间。
对每个人，我们返回他们到达时在花期内花的数目。
</pre>

<p>&nbsp;</p>

<p><strong>提示：</strong></p>

<ul>
	<li><code>1 &lt;= flowers.length &lt;= 5 * 10<sup>4</sup></code></li>
	<li><code>flowers[i].length == 2</code></li>
	<li><code>1 &lt;= start<sub>i</sub> &lt;= end<sub>i</sub> &lt;= 10<sup>9</sup></code></li>
	<li><code>1 &lt;= persons.length &lt;= 5 * 10<sup>4</sup></code></li>
	<li><code>1 &lt;= persons[i] &lt;= 10<sup>9</sup></code></li>
</ul>
