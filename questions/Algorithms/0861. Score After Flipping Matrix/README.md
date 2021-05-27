### [Score After Flipping Matrix](https://leetcode.com/problems/score-after-flipping-matrix)

<p>We have a two dimensional matrix&nbsp;<code>grid</code> where each value is <code>0</code> or <code>1</code>.</p>

<p>A move consists of choosing any row or column, and toggling each value in that row or column: changing all <code>0</code>s to <code>1</code>s, and all <code>1</code>s to <code>0</code>s.</p>

<p>After making any number of moves, every row of this matrix is interpreted as a binary number, and the score of the matrix is the sum of these numbers.</p>

<p>Return the highest possible&nbsp;score.</p>

<p>&nbsp;</p>

<ol>
</ol>

<div>
<p><strong>Example 1:</strong></p>

<pre>
<strong>Input: </strong>grid = <span id="example-input-1-1">[[0,0,1,1],[1,0,1,0],[1,1,0,0]]</span>
<strong>Output: </strong><span id="example-output-1">39</span>
<strong>Explanation:
</strong>Toggled to <span id="example-input-1-1">[[1,1,1,1],[1,0,0,1],[1,1,1,1]].
0b1111 + 0b1001 + 0b1111 = 15 + 9 + 15 = 39</span></pre>

<p>&nbsp;</p>

<p><strong>Note:</strong></p>

<ol>
	<li><code>1 &lt;= grid.length &lt;= 20</code></li>
	<li><code>1 &lt;= grid[0].length &lt;= 20</code></li>
	<li><code>grid[i][j]</code>&nbsp;is <code>0</code> or <code>1</code>.</li>
</ol>
</div>
