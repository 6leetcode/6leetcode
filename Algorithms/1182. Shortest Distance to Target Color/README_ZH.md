### [与目标颜色间的最短距离](https://leetcode-cn.com/problems/shortest-distance-to-target-color)

<p>给你一个数组&nbsp;<code>colors</code>，里面有&nbsp;&nbsp;<code>1</code>、<code>2</code>、&nbsp;<code>3</code> 三种颜色。</p>

<p>我们需要在&nbsp;<code>colors</code> 上进行一些查询操作 <code>queries</code>，其中每个待查项都由两个整数 <code>i</code> 和 <code>c</code> 组成。</p>

<p>现在请你帮忙设计一个算法，查找从索引&nbsp;<code>i</code>&nbsp;到具有目标颜色&nbsp;<code>c</code>&nbsp;的元素之间的最短距离。</p>

<p>如果不存在解决方案，请返回&nbsp;<code>-1</code>。</p>

<p>&nbsp;</p>

<p><strong>示例 1：</strong></p>

<pre><strong>输入：</strong>colors = [1,1,2,1,3,2,2,3,3], queries = [[1,3],[2,2],[6,1]]
<strong>输出：</strong>[3,0,3]
<strong>解释： </strong>
距离索引 1 最近的颜色 3 位于索引 4（距离为 3）。
距离索引 2 最近的颜色 2 就是它自己（距离为 0）。
距离索引 6 最近的颜色 1 位于索引 3（距离为 3）。
</pre>

<p><strong>示例 2：</strong></p>

<pre><strong>输入：</strong>colors = [1,2], queries = [[0,3]]
<strong>输出：</strong>[-1]
<strong>解释：</strong>colors 中没有颜色 3。
</pre>

<p>&nbsp;</p>

<p><strong>提示：</strong></p>

<ul>
	<li><code>1 &lt;= colors.length &lt;= 5*10^4</code></li>
	<li><code>1 &lt;= colors[i] &lt;= 3</code></li>
	<li><code>1&nbsp;&lt;= queries.length &lt;= 5*10^4</code></li>
	<li><code>queries[i].length == 2</code></li>
	<li><code>0 &lt;= queries[i][0] &lt;&nbsp;colors.length</code></li>
	<li><code>1 &lt;= queries[i][1] &lt;= 3</code></li>
</ul>
