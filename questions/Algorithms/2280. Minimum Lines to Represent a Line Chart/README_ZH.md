### [表示一个折线图的最少线段数](https://leetcode-cn.com/problems/minimum-lines-to-represent-a-line-chart)

<p>给你一个二维整数数组&nbsp;<code>stockPrices</code> ，其中&nbsp;<code>stockPrices[i] = [day<sub>i</sub>, price<sub>i</sub>]</code>&nbsp;表示股票在&nbsp;<code>day<sub>i</sub></code>&nbsp;的价格为&nbsp;<code>price<sub>i</sub></code>&nbsp;。<strong>折线图</strong>&nbsp;是一个二维平面上的若干个点组成的图，横坐标表示日期，纵坐标表示价格，折线图由相邻的点连接而成。比方说下图是一个例子：</p>
<img alt="" src="https://assets.leetcode.com/uploads/2022/03/30/1920px-pushkin_population_historysvg.png" style="width: 500px; height: 313px;">
<p>请你返回要表示一个折线图所需要的 <strong>最少线段数</strong>&nbsp;。</p>

<p>&nbsp;</p>

<p><strong>示例 1：</strong></p>

<p><img alt="" src="https://assets.leetcode.com/uploads/2022/03/30/ex0.png" style="width: 400px; height: 400px;"></p>

<pre><b>输入：</b>stockPrices = [[1,7],[2,6],[3,5],[4,4],[5,4],[6,3],[7,2],[8,1]]
<b>输出：</b>3
<strong>解释：</strong>
上图为输入对应的图，横坐标表示日期，纵坐标表示价格。
以下 3 个线段可以表示折线图：
- 线段 1 （红色）从 (1,7) 到 (4,4) ，经过 (1,7) ，(2,6) ，(3,5) 和 (4,4) 。
- 线段 2 （蓝色）从 (4,4) 到 (5,4) 。
- 线段 3 （绿色）从 (5,4) 到 (8,1) ，经过 (5,4) ，(6,3) ，(7,2) 和 (8,1) 。
可以证明，无法用少于 3 条线段表示这个折线图。
</pre>

<p><strong>示例 2：</strong></p>

<p><img alt="" src="https://assets.leetcode.com/uploads/2022/03/30/ex1.png" style="width: 325px; height: 325px;"></p>

<pre><b>输入：</b>stockPrices = [[3,4],[1,2],[7,8],[2,3]]
<b>输出：</b>1
<strong>解释：</strong>
如上图所示，折线图可以用一条线段表示。
</pre>

<p>&nbsp;</p>

<p><strong>提示：</strong></p>

<ul>
	<li><code>1 &lt;= stockPrices.length &lt;= 10<sup>5</sup></code></li>
	<li><code>stockPrices[i].length == 2</code></li>
	<li><code>1 &lt;= day<sub>i</sub>, price<sub>i</sub> &lt;= 10<sup>9</sup></code></li>
	<li>所有&nbsp;<code>day<sub>i</sub></code>&nbsp;<strong>互不相同</strong>&nbsp;。</li>
</ul>
