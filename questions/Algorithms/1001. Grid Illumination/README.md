### [Grid Illumination](https://leetcode.com/problems/grid-illumination)

<p>Given a <code>grid</code> of size <code>N x N</code>, each cell of this grid has a lamp which is intially <strong>turned off</strong>.</p>

<p>Given an array of lamp positions <code>lamps</code>, where <code>lamps[i] = [x<sub>i</sub>, y<sub>i</sub>]</code> indicates that the lamp at <code>grid[x<sub>i</sub>][y<sub>i</sub>]</code> will be turned on. When a lamp is turned on, it <strong>illiminates its cell</strong> and <strong>any cell</strong> in the same <strong>row, column or diagonal</strong> with this this cell.</p>

<p>Then you will be given a query array <code>queries</code>, where&nbsp;<code>queries[i] = [x<sub>i</sub>, y<sub>i</sub>]</code>. For the <code>i<sup>th</sup></code>&nbsp;query, you should answer whether <code>grid[x<sub>i</sub>][y<sub>i</sub>]</code> is illuminated or not. After answering the <code>i<sup>th</sup></code> query, you should <strong>turn off</strong> the lamp at&nbsp;<code>grid[x<sub>i</sub>][y<sub>i</sub>]</code> and all of its <strong>8 adjacent lamps</strong> if they exist&nbsp;(i,e, lamps at adjacent cell which share side or diagonal).</p>

<p>Return an array of integers <code>ans</code> where each&nbsp;value <code>ans[i]</code> should be equal to the answer of the <code>i<sup>th</sup></code> query <code>queries[i]</code>.</p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2020/08/19/illu_1.jpg" style="width: 750px; height: 209px;" />
<pre>
<strong>Input:</strong> N = 5, lamps = [[0,0],[4,4]], queries = [[1,1],[1,0]]
<strong>Output:</strong> [1,0]
<strong>Explanation:</strong> We have initial grid with all lamps turned off. In the above picture we see the grid after turning the lamp at grid[0][0] on then turning the lamp at grid[4][4] on.
The first query asks if the lamp at grid[1][1] is illuminated or not (the blue square) and as it is illuminated, we return 1. Then we turn off any lamp in the red square.
<img alt="" src="https://assets.leetcode.com/uploads/2020/08/19/illu_step1.jpg" style="width: 500px; height: 218px;" />
The second query asks if the lamp at grid[1][0] is illuminated or not (the blue square) and as it is not illustrated, we return 0. Then we turn off any lamp in the red rectangle.
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
	<li><code>1 &lt;= N &lt;= 10^9</code></li>
	<li><code>0 &lt;= lamps.length &lt;= 20000</code></li>
	<li><code>lamps[i].length == 2</code></li>
	<li><code>0 &lt;= lamps[i][j] &lt; N</code></li>
	<li><code>0 &lt;= queries.length &lt;= 20000</code></li>
	<li><code>queries[i].length == 2</code></li>
	<li><code>0 &lt;= queries[i][j] &lt; N</code></li>
</ul>
