### [Minimum Cost to Connect Two Groups of Points](https://leetcode.com/problems/minimum-cost-to-connect-two-groups-of-points)

<p>You are given two groups of points&nbsp;where the first group&nbsp;has <code><font face="monospace">size<sub>1</sub></font></code>&nbsp;points,&nbsp;the second group&nbsp;has <code><font face="monospace">size<sub>2</sub></font></code>&nbsp;points,&nbsp;and&nbsp;<code><font face="monospace">size<sub>1</sub></font> &gt;= <font face="monospace">size<sub>2</sub></font></code>.</p>

<p>The <code>cost</code> of the connection between any two points&nbsp;are given in an&nbsp;<code><font face="monospace">size<sub>1</sub></font> x <font face="monospace">size<sub>2</sub></font></code>&nbsp;matrix where <code>cost[i][j]</code> is the cost of connecting point <code>i</code> of the first group and point&nbsp;<code>j</code> of the second group. The groups are connected if <strong>each point in both&nbsp;groups is&nbsp;connected to one or more points in the opposite&nbsp;group</strong>. In other words, each&nbsp;point in the first group must be connected to at least one point in the second group, and each&nbsp;point in the second group must be connected to at least one point in the first group.</p>

<p>Return&nbsp;<em>the minimum cost it takes to connect the two groups</em>.</p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2020/09/03/ex1.jpg" style="width: 322px; height: 243px;" />
<pre>
<strong>Input:</strong> cost = [[15, 96], [36, 2]]
<strong>Output:</strong> 17
<strong>Explanation</strong>: The optimal way of connecting the groups is:
1--A
2--B
This results in a total cost of 17.
</pre>

<p><strong>Example 2:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2020/09/03/ex2.jpg" style="width: 322px; height: 403px;" />
<pre>
<strong>Input:</strong> cost = [[1, 3, 5], [4, 1, 1], [1, 5, 3]]
<strong>Output:</strong> 4
<strong>Explanation</strong>: The optimal way of connecting the groups is:
1--A
2--B
2--C
3--A
This results in a total cost of 4.
Note that there are multiple points connected to point 2 in the first group and point A in the second group. This does not matter as there is no limit to the number of points that can be connected. We only care about the minimum total cost.
</pre>

<p><strong>Example 3:</strong></p>

<pre>
<strong>Input:</strong> cost = [[2, 5, 1], [3, 4, 7], [8, 1, 2], [6, 2, 4], [3, 8, 8]]
<strong>Output:</strong> 10
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code><font face="monospace">size<sub>1</sub></font> == cost.length</code></li>
	<li><code><font face="monospace">size<sub>2</sub></font> == cost[i].length</code></li>
	<li><code>1 &lt;= <font face="monospace">size<sub>1</sub></font>, <font face="monospace">size<sub>2</sub></font> &lt;= 12</code></li>
	<li><code><font face="monospace">size<sub>1</sub></font> &gt;=&nbsp;<font face="monospace">size<sub>2</sub></font></code></li>
	<li><code>0 &lt;= cost[i][j] &lt;= 100</code></li>
</ul>
