### [最低成本联通所有城市](https://leetcode-cn.com/problems/connecting-cities-with-minimum-cost)

<p>想象一下你是个城市基建规划者，地图上有&nbsp;<code>N</code>&nbsp;座城市，它们按以&nbsp;<code>1</code> 到&nbsp;<code>N</code>&nbsp;的次序编号。</p>

<p>给你一些可连接的选项&nbsp;<code>conections</code>，其中每个选项&nbsp;<code>conections[i] = [city1, city2, cost]</code>&nbsp;表示将城市&nbsp;<code>city1</code> 和城市&nbsp;<code>city2</code>&nbsp;连接所要的成本。（<strong>连接是双向的</strong>，也就是说城市 <code>city1</code>&nbsp;和城市&nbsp;<code>city2</code>&nbsp;相连也同样意味着城市&nbsp;<code>city2</code> 和城市&nbsp;<code>city1</code>&nbsp;相连）。</p>

<p>返回使得每对城市间都存在将它们连接在一起的连通路径（可能长度为 1 的）最小成本。该最小成本应该是所用全部连接代价的综合。如果根据已知条件无法完成该项任务，则请你返回&nbsp;-1。</p>

<p>&nbsp;</p>

<p><strong>示例 1：</strong></p>

<p><img alt="" src="https://assets.leetcode-cn.com/aliyun-lc-upload/uploads/2019/07/27/1314_ex2.png" style="height: 141px; width: 161px;"></p>

<pre><strong>输入：</strong>N = 3, conections = [[1,2,5],[1,3,6],[2,3,1]]
<strong>输出：</strong>6
<strong>解释：</strong>
选出任意 2 条边都可以连接所有城市，我们从中选取成本最小的 2 条。
</pre>

<p><strong>示例 2：</strong></p>

<p><img alt="" src="https://assets.leetcode-cn.com/aliyun-lc-upload/uploads/2019/07/27/1314_ex1.png" style="height: 91px; width: 136px;"></p>

<pre><strong>输入：</strong>N = 4, conections = [[1,2,3],[3,4,4]]
<strong>输出：</strong>-1
<strong>解释： </strong>
即使连通所有的边，也无法连接所有城市。
</pre>

<p>&nbsp;</p>

<p><strong>提示：</strong></p>

<ol>
	<li><code>1 &lt;= N &lt;= 10000</code></li>
	<li><code>1 &lt;= conections.length &lt;= 10000</code></li>
	<li><code>1 &lt;= conections[i][0], conections[i][1] &lt;= N</code></li>
	<li><code>0 &lt;= conections[i][2] &lt;= 10^5</code></li>
	<li><code>conections[i][0] != conections[i][1]</code></li>
</ol>
