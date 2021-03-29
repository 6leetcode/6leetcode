### [Grid Illumination](https://leetcode.com/problems/grid-illumination)

<p>You are given a <code>grid</code> of size <code>N x N</code>, and each cell of this grid has a lamp that is initially <strong>turned off</strong>.</p>

<p>You are also given an array of lamp positions <code>lamps</code>, where <code>lamps[i] = [row<sub>i</sub>, col<sub>i</sub>]</code> indicates that the lamp at <code>grid[row<sub>i</sub>][col<sub>i</sub>]</code> is <strong>turned on</strong>. When a lamp is turned on, it <strong>illuminates its cell</strong> and <strong>all&nbsp;other cells</strong> in the same <strong>row, column, or diagonal</strong>.</p>

<p>Finally, you are given a query array <code>queries</code>, where&nbsp;<code>queries[i] = [row<sub>i</sub>, col<sub>i</sub>]</code>. For the <code>i<sup>th</sup></code>&nbsp;query, determine whether <code>grid[row<sub>i</sub>][col<sub>i</sub>]</code> is illuminated or not. After answering the <code>i<sup>th</sup></code> query,&nbsp;<strong>turn off</strong> the lamp at&nbsp;<code>grid[row<sub>i</sub>][col<sub>i</sub>]</code> and&nbsp;its <strong>8 adjacent lamps</strong> if they exist. A lamp is adjacent if its cell shares either&nbsp;a side or corner with&nbsp;<code>grid[row<sub>i</sub>][col<sub>i</sub>]</code>.</p>

<p>Return <em>an array of integers </em><code>ans</code><em>,</em><em>&nbsp;where </em><code>ans[i]</code><em> should be </em><code>1</code><em>&nbsp;if the lamp in the&nbsp;</em><code>i<sup>th</sup></code><em> query was illuminated, or&nbsp;</em><code>0</code><em>&nbsp;if the lamp was not.</em></p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2020/08/19/illu_1.jpg" style="width: 750px; height: 209px;" />
<pre>
<strong>Input:</strong> N = 5, lamps = [[0,0],[4,4]], queries = [[1,1],[1,0]]
<strong>Output:</strong> [1,0]
<strong>Explanation:</strong> We have the initial grid with all lamps turned off. In the above picture we see the grid after turning on the lamp at grid[0][0] then turning on the lamp at grid[4][4].
The 0<sup>th</sup>&nbsp;query asks if the lamp at grid[1][1] is illuminated or not (the blue square). It is illuminated, so set ans[0] = 1. Then, we turn off all lamps in the red square.
<img alt="" src="https://assets.leetcode.com/uploads/2020/08/19/illu_step1.jpg" style="width: 500px; height: 218px;" />
The 1<sup>st</sup>&nbsp;query asks if the lamp at grid[1][0] is illuminated or not (the blue square). It is not illuminated, so set ans[1] = 1. Then, we turn off all lamps in the red rectangle.
<img alt="" src="https://assets.leetcode.com/uploads/2020/08/19/illu_step2.jpg" style="width: 500px; height: 219px;" />
</pre>

<p><strong>Example 2:</strong></p>

<pre>
<strong>Input:</strong> N = 5, lamps = [[0,0],[4,4]], queries = [[1,1],[1,1]]
<strong>Output:</strong> [1,1]
</pre>

<p><strong>Example 3:</strong></p>

<pre>
<strong>Input:</strong> N = 5, lamps = [[0,0],[0,4]], queries = [[0,4],[0,1],[1,4]]
<strong>Output:</strong> [1,1,0]
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= N &lt;= 10<sup>9</sup></code></li>
	<li><code>0 &lt;= lamps.length &lt;= 20000</code></li>
	<li><code>lamps[i].length == 2</code></li>
	<li><code>0 &lt;= lamps[i][j] &lt; N</code></li>
	<li><code>0 &lt;= queries.length &lt;= 20000</code></li>
	<li><code>queries[i].length == 2</code></li>
	<li><code>0 &lt;= queries[i][j] &lt; N</code></li>
</ul>
