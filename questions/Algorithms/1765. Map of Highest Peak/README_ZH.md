### [地图中的最高点](https://leetcode-cn.com/problems/map-of-highest-peak)

<p>给你一个大小为&nbsp;<code>m x n</code>&nbsp;的整数矩阵&nbsp;<code>isWater</code>&nbsp;，它代表了一个由 <strong>陆地</strong>&nbsp;和 <strong>水域</strong>&nbsp;单元格组成的地图。</p>

<ul>
	<li>如果&nbsp;<code>isWater[i][j] == 0</code>&nbsp;，格子&nbsp;<code>(i, j)</code>&nbsp;是一个 <strong>陆地</strong>&nbsp;格子。</li>
	<li>如果&nbsp;<code>isWater[i][j] == 1</code>&nbsp;，格子&nbsp;<code>(i, j)</code>&nbsp;是一个 <strong>水域</strong>&nbsp;格子。</li>
</ul>

<p>你需要按照如下规则给每个单元格安排高度：</p>

<ul>
	<li>每个格子的高度都必须是非负的。</li>
	<li>如果一个格子是 <strong>水域</strong>&nbsp;，那么它的高度必须为 <code>0</code>&nbsp;。</li>
	<li>任意相邻的格子高度差 <strong>至多</strong>&nbsp;为 <code>1</code>&nbsp;。当两个格子在正东、南、西、北方向上相互紧挨着，就称它们为相邻的格子。（也就是说它们有一条公共边）</li>
</ul>

<p>找到一种安排高度的方案，使得矩阵中的最高高度值&nbsp;<strong>最大</strong>&nbsp;。</p>

<p>请你返回一个大小为&nbsp;<code>m x n</code>&nbsp;的整数矩阵 <code>height</code>&nbsp;，其中 <code>height[i][j]</code>&nbsp;是格子 <code>(i, j)</code>&nbsp;的高度。如果有多种解法，请返回&nbsp;<strong>任意一个</strong>&nbsp;。</p>

<p>&nbsp;</p>

<p><strong>示例 1：</strong></p>

<p><strong><img alt="" src="https://assets.leetcode.com/uploads/2021/01/10/screenshot-2021-01-11-at-82045-am.png" style="width: 220px; height: 219px;" /></strong></p>

<pre>
<b>输入：</b>isWater = [[0,1],[0,0]]
<b>输出：</b>[[1,0],[2,1]]
<b>解释：</b>上图展示了给各个格子安排的高度。
蓝色格子是水域格，绿色格子是陆地格。
</pre>

<p><strong>示例 2：</strong></p>

<p><strong><img alt="" src="https://assets.leetcode.com/uploads/2021/01/10/screenshot-2021-01-11-at-82050-am.png" style="width: 300px; height: 296px;" /></strong></p>

<pre>
<b>输入：</b>isWater = [[0,0,1],[1,0,0],[0,0,0]]
<b>输出：</b>[[1,1,0],[0,1,1],[1,2,2]]
<b>解释：</b>所有安排方案中，最高可行高度为 2 。
任意安排方案中，只要最高高度为 2 且符合上述规则的，都为可行方案。
</pre>

<p>&nbsp;</p>

<p><strong>提示：</strong></p>

<ul>
	<li><code>m == isWater.length</code></li>
	<li><code>n == isWater[i].length</code></li>
	<li><code>1 &lt;= m, n &lt;= 1000</code></li>
	<li><code>isWater[i][j]</code>&nbsp;要么是&nbsp;<code>0</code>&nbsp;，要么是&nbsp;<code>1</code>&nbsp;。</li>
	<li>至少有 <strong>1</strong>&nbsp;个水域格子。</li>
</ul>
