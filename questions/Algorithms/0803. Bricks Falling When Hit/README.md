### [Bricks Falling When Hit](https://leetcode.com/problems/bricks-falling-when-hit)

<p>You are given an <code>m x n</code> binary <code>grid</code>, where each <code>1</code> represents a brick. A brick will not drop if:</p>

<ul>
	<li>It is directly connected to the top of the grid, or</li>
	<li>At least one of its four adjacent bricks will not drop.</li>
</ul>

<p>You are also given an array <code>hits</code>. We will do some erasures sequentially. Each time we want to do the erasure at the location <code>hits[i] = (x<sub>i</sub>, y<sub>i</sub>)</code>, the brick (if it exists) on that location will disappear, and then some other bricks may drop because of that erasure.</p>

<p>Return <em>an array representing the number of bricks that will drop after each erasure in sequence</em>.</p>

<p><strong>Note</strong> that an erasure may refer to a location with no brick and if it does, no bricks drop.</p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>

<pre>
<strong>Input:</strong> grid = [[1,0,0,0],[1,1,1,0]], hits = [[1,0]]
<strong>Output:</strong> [2]
<strong>Explanation: </strong>If we erase the brick at (1, 0), the brick at (1, 1) and (1, 2) will drop. So we should return 2.
</pre>

<p><strong>Example 2:</strong></p>

<pre>
<strong>Input:</strong> grid = [[1,0,0,0],[1,1,0,0]], hits = [[1,1],[1,0]]
<strong>Output:</strong> [0,0]
<strong>Explanation: </strong>When we erase the brick at (1, 0), the brick at (1, 1) has already disappeared due to the last move. So each erasure will cause no bricks dropping.
Note that the erased brick (1, 0) will not be counted as a dropped brick.
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>m == grid.length</code></li>
	<li><code>n == grid[i].length</code></li>
	<li><code>1 &lt;= m, n &lt;= 200</code></li>
	<li><code>grid[i][j]</code> is <code>0</code> or <code>1</code>.</li>
	<li><code>1 &lt;= hits.length &lt;= 4 * 10<sup>4</sup></code></li>
	<li><code>hits[i].length == 2</code></li>
	<li><code>0 &lt;= x<sub>i&nbsp;</sub>&lt;= m - 1</code></li>
	<li><code>0 &lt;=&nbsp;y<sub>i</sub> &lt;= n - 1</code></li>
	<li>All <code>(x<sub>i</sub>, y<sub>i</sub>)</code> are unique.</li>
</ul>
