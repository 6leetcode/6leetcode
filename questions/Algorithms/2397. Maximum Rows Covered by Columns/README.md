### [Maximum Rows Covered by Columns](https://leetcode.com/problems/maximum-rows-covered-by-columns)

<p>You are given a <strong>0-indexed</strong> <code>m x n</code> binary matrix <code>matrix</code> and an integer <code>numSelect</code>, which denotes the number of <strong>distinct</strong> columns you must select from <code>matrix</code>.</p>

<p>Let us consider <code>s = {c<sub>1</sub>, c<sub>2</sub>, ...., c<sub>numSelect</sub>}</code> as the set of columns selected by you. A row <code>row</code> is <strong>covered</strong> by <code>s</code> if:</p>

<ul>
	<li>For each cell <code>matrix[row][col]</code> (<code>0 &lt;= col &lt;= n - 1</code>) where <code>matrix[row][col] == 1</code>, <code>col</code> is present in <code>s</code> or,</li>
	<li><strong>No cell</strong> in <code>row</code> has a value of <code>1</code>.</li>
</ul>

<p>You need to choose <code>numSelect</code> columns such that the number of rows that are covered is <strong>maximized</strong>.</p>

<p>Return <em>the <strong>maximum</strong> number of rows that can be <strong>covered</strong> by a set of </em><code>numSelect</code><em> columns.</em></p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2022/07/14/rowscovered.png" style="width: 240px; height: 400px;" />
<pre>
<strong>Input:</strong> matrix = [[0,0,0],[1,0,1],[0,1,1],[0,0,1]], numSelect = 2
<strong>Output:</strong> 3
<strong>Explanation:</strong> One possible way to cover 3 rows is shown in the diagram above.
We choose s = {0, 2}.
- Row 0 is covered because it has no occurrences of 1.
- Row 1 is covered because the columns with value 1, i.e. 0 and 2 are present in s.
- Row 2 is not covered because matrix[2][1] == 1 but 1 is not present in s.
- Row 3 is covered because matrix[2][2] == 1 and 2 is present in s.
Thus, we can cover three rows.
Note that s = {1, 2} will also cover 3 rows, but it can be shown that no more than three rows can be covered.
</pre>

<p><strong class="example">Example 2:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2022/07/14/rowscovered2.png" style="height: 250px; width: 84px;" />
<pre>
<strong>Input:</strong> matrix = [[1],[0]], numSelect = 1
<strong>Output:</strong> 2
<strong>Explanation:</strong> Selecting the only column will result in both rows being covered since the entire matrix is selected.
Therefore, we return 2.
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>m == matrix.length</code></li>
	<li><code>n == matrix[i].length</code></li>
	<li><code>1 &lt;= m, n &lt;= 12</code></li>
	<li><code>matrix[i][j]</code> is either <code>0</code> or <code>1</code>.</li>
	<li><code>1 &lt;= numSelect&nbsp;&lt;= n</code></li>
</ul>
