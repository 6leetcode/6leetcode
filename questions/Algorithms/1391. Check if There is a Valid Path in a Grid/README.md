### [Check if There is a Valid Path in a Grid](https://leetcode.com/problems/check-if-there-is-a-valid-path-in-a-grid)

Given a <em>m</em> x <em>n</em> <code>grid</code>. Each cell of the <code>grid</code> represents a street. The street of&nbsp;<code>grid[i][j]</code> can be:
<ul>
	<li><strong>1</strong> which means a street connecting the left cell and the right cell.</li>
	<li><strong>2</strong> which means a street connecting the upper cell and the lower cell.</li>
	<li><b>3</b>&nbsp;which means a street connecting the left cell and the lower cell.</li>
	<li><b>4</b> which means a street connecting the right cell and the lower cell.</li>
	<li><b>5</b> which means a street connecting the left cell and the upper cell.</li>
	<li><b>6</b> which means a street connecting the right cell and the upper cell.</li>
</ul>

<p><img alt="" src="https://assets.leetcode.com/uploads/2020/03/05/main.png" style="width: 450px; height: 708px;" /></p>

<p>You will initially start at the street of the&nbsp;upper-left cell <code>(0,0)</code>. A valid path in the grid is a path which starts from the upper left&nbsp;cell <code>(0,0)</code> and ends at the bottom-right&nbsp;cell <code>(m - 1, n - 1)</code>. <strong>The path should only follow the streets</strong>.</p>

<p><strong>Notice</strong> that you are <strong>not allowed</strong> to change any street.</p>

<p>Return <i>true</i>&nbsp;if there is a valid path in the grid or <em>false</em> otherwise.</p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2020/03/05/e1.png" style="width: 455px; height: 311px;" />
<pre>
<strong>Input:</strong> grid = [[2,4,3],[6,5,2]]
<strong>Output:</strong> true
<strong>Explanation:</strong> As shown you can start at cell (0, 0) and visit all the cells of the grid to reach (m - 1, n - 1).
</pre>

<p><strong>Example 2:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2020/03/05/e2.png" style="width: 455px; height: 293px;" />
<pre>
<strong>Input:</strong> grid = [[1,2,1],[1,2,1]]
<strong>Output:</strong> false
<strong>Explanation:</strong> As shown you the street at cell (0, 0) is not connected with any street of any other cell and you will get stuck at cell (0, 0)
</pre>

<p><strong>Example 3:</strong></p>

<pre>
<strong>Input:</strong> grid = [[1,1,2]]
<strong>Output:</strong> false
<strong>Explanation:</strong> You will get stuck at cell (0, 1) and you cannot reach cell (0, 2).
</pre>

<p><strong>Example 4:</strong></p>

<pre>
<strong>Input:</strong> grid = [[1,1,1,1,1,1,3]]
<strong>Output:</strong> true
</pre>

<p><strong>Example 5:</strong></p>

<pre>
<strong>Input:</strong> grid = [[2],[2],[2],[2],[2],[2],[6]]
<strong>Output:</strong> true
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>m == grid.length</code></li>
	<li><code>n == grid[i].length</code></li>
	<li><code>1 &lt;= m, n &lt;= 300</code></li>
	<li><code>1 &lt;= grid[i][j] &lt;= 6</code></li>
</ul>
