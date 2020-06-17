### [Minimum Falling Path Sum II](https://leetcode.com/problems/minimum-falling-path-sum-ii)

<p>Given a square grid&nbsp;of integers&nbsp;<code>arr</code>, a <em>falling path with non-zero shifts</em>&nbsp;is a choice of&nbsp;exactly one element from each row of <code>arr</code>, such that no two elements chosen in adjacent rows are in&nbsp;the same column.</p>

<p>Return the&nbsp;minimum&nbsp;sum of a falling path with non-zero shifts.</p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>

<pre>
<strong>Input:</strong> arr = [[1,2,3],[4,5,6],[7,8,9]]
<strong>Output:</strong> 13
<strong>Explanation: </strong>
The possible falling paths are:
[1,5,9], [1,5,7], [1,6,7], [1,6,8],
[2,4,8], [2,4,9], [2,6,7], [2,6,8],
[3,4,8], [3,4,9], [3,5,7], [3,5,9]
The falling path with the smallest sum is&nbsp;[1,5,7], so the answer is&nbsp;13.
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= arr.length == arr[i].length &lt;= 200</code></li>
	<li><code>-99 &lt;= arr[i][j] &lt;= 99</code></li>
</ul>
