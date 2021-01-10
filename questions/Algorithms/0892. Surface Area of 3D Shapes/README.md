### [Surface Area of 3D Shapes](https://leetcode.com/problems/surface-area-of-3d-shapes)

<p>You are given an <code>n&nbsp;x&nbsp;n</code>&nbsp;<code>grid</code>&nbsp;where we&nbsp;can place some&nbsp;<code>1 x 1 x&nbsp;1</code>&nbsp;cubes.</p>

<p>Each value&nbsp;<code>v = grid[i][j]</code>&nbsp;represents a tower of&nbsp;<code>v</code>&nbsp;cubes placed on top of the <code>grid</code> cell&nbsp;<code>(i, j)</code>.</p>

<p>Return <em>the total surface area of the resulting shapes</em>.</p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2021/01/08/tmp-grid1.jpg" style="width: 82px; height: 82px;" />
<pre>
<strong>Input:</strong> grid = [[2]]
<strong>Output:</strong> 10
</pre>

<p><strong>Example 2:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2021/01/08/tmp-grid2.jpg" style="width: 162px; height: 162px;" />
<pre>
<strong>Input:</strong> grid = [[1,2],[3,4]]
<strong>Output:</strong> 34
</pre>

<p><strong>Example 3:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2021/01/08/tmp-grid3.jpg" style="width: 162px; height: 162px;" />
<pre>
<strong>Input:</strong> grid = [[1,0],[0,2]]
<strong>Output:</strong> 16
</pre>

<p><strong>Example 4:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2021/01/08/tmp-grid4.jpg" style="width: 242px; height: 242px;" />
<pre>
<strong>Input:</strong> grid = [[1,1,1],[1,0,1],[1,1,1]]
<strong>Output:</strong> 32
</pre>

<p><strong>Example 5:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2021/01/08/tmp-grid5.jpg" style="width: 242px; height: 242px;" />
<pre>
<strong>Input:</strong> grid = [[2,2,2],[2,1,2],[2,2,2]]
<strong>Output:</strong> 46
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>n == grid.length</code></li>
	<li><code>n == grid[i].length</code></li>
	<li><code>1 &lt;= n &lt;= 50</code></li>
	<li><code>0 &lt;= grid[i][j] &lt;= 50</code></li>
</ul>
