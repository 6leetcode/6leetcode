### [Escape a Large Maze](https://leetcode.com/problems/escape-a-large-maze)

<p>In a 1 million by 1 million grid, the coordinates of each grid square are <code>(x, y)</code>.</p>

<p>We start at the <code>source</code> square and want to reach the <code>target</code> square.&nbsp; Each move, we can walk to a 4-directionally adjacent square in the grid that isn&#39;t in the given list of <code>blocked</code> squares.</p>

<p>Return <code>true</code> if and only if it is possible to reach the target square through a sequence of moves.</p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>

<pre>
<strong>Input:</strong> blocked = [[0,1],[1,0]], source = [0,0], target = [0,2]
<strong>Output:</strong> false
<strong>Explanation:</strong> The target square is inaccessible starting from the source square, because we can&#39;t walk outside the grid.
</pre>

<p><strong>Example 2:</strong></p>

<pre>
<strong>Input:</strong> blocked = [], source = [0,0], target = [999999,999999]
<strong>Output:</strong> true
<strong>Explanation:</strong> Because there are no blocked cells, it&#39;s possible to reach the target square.
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>0 &lt;= blocked.length &lt;= 200</code></li>
	<li><code>blocked[i].length == 2</code></li>
	<li><code>0 &lt;= blocked[i][j] &lt; 10^6</code></li>
	<li><code>source.length == target.length == 2</code></li>
	<li><code>0 &lt;= source[i][j], target[i][j] &lt; 10^6</code></li>
	<li><code>source != target</code></li>
</ul>
