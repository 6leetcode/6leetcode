### [Remove Interval](https://leetcode.com/problems/remove-interval)

<p>Given a <strong>sorted</strong> list of disjoint <code>intervals</code>, each interval <code>intervals[i] = [a, b]</code> represents the set of real numbers&nbsp;<code>x</code> such that&nbsp;<code>a &lt;= x &lt; b</code>.</p>

<p>We remove the intersections between any interval in <code>intervals</code> and the interval <code>toBeRemoved</code>.</p>

<p>Return a <strong>sorted</strong>&nbsp;list of <code>intervals</code> after all such removals.</p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>

<pre>
<strong>Input:</strong> intervals = [[0,2],[3,4],[5,7]], toBeRemoved = [1,6]
<strong>Output:</strong> [[0,1],[6,7]]
</pre>

<p><strong>Example 2:</strong></p>

<pre>
<strong>Input:</strong> intervals = [[0,5]], toBeRemoved = [2,3]
<strong>Output:</strong> [[0,2],[3,5]]
</pre>

<p><strong>Example 3:</strong></p>

<pre>
<strong>Input:</strong> intervals = [[-5,-4],[-3,-2],[1,2],[3,5],[8,9]], toBeRemoved = [-1,4]
<strong>Output:</strong> [[-5,-4],[-3,-2],[4,5],[8,9]]
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= intervals.length &lt;= 10^4</code></li>
	<li><code>-10^9 &lt;= intervals[i][0] &lt; intervals[i][1] &lt;= 10^9</code></li>
</ul>
