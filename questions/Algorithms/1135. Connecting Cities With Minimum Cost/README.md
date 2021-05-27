### [Connecting Cities With Minimum Cost](https://leetcode.com/problems/connecting-cities-with-minimum-cost)

<p>There are <code>n</code> cities numbered from 1 to <code>n</code>.</p>

<p>You are given <code>connections</code>, where each <code>connections[i] = [city1, city2, cost]</code>&nbsp;represents the cost to connect <code>city1</code> and <code>city2</code> together.&nbsp; (A <em>connection</em> is bidirectional: connecting <code>city1</code> and <code>city2</code> is the same as connecting <code>city2</code> and <code>city1</code>.)</p>

<p>Return the minimum cost so that for every pair of cities, there exists a path&nbsp;of connections (possibly of length 1) that connects those two cities together.&nbsp; The cost is the sum of the connection costs used. If the task is impossible, return -1.</p>

<p>&nbsp;</p>

<p><strong>Example 1:</strong></p>

<p><img alt="" src="https://assets.leetcode.com/uploads/2019/04/20/1314_ex2.png" style="width: 161px; height: 141px;" /></p>

<pre>
<strong>Input: </strong>n = 3, connections = [[1,2,5],[1,3,6],[2,3,1]]
<strong>Output: </strong>6
<strong>Explanation: </strong>
Choosing any 2 edges will connect all cities so we choose the minimum 2.
</pre>

<p><strong>Example 2:</strong></p>

<p><img alt="" src="https://assets.leetcode.com/uploads/2019/04/20/1314_ex1.png" style="width: 136px; height: 91px;" /></p>

<pre>
<strong>Input: </strong>n = 4, connections = [[1,2,3],[3,4,4]]
<strong>Output: </strong>-1
<strong>Explanation: </strong>
There is no way to connect all cities even if all edges are used.
</pre>

<p>&nbsp;</p>

<p><strong>Note:</strong></p>

<ol>
	<li><code>1 &lt;= n &lt;= 10000</code></li>
	<li><code>1 &lt;= connections.length &lt;= 10000</code></li>
	<li><code>1 &lt;= connections[i][0], connections[i][1] &lt;= n</code></li>
	<li><code>0 &lt;= connections[i][2] &lt;= 10<sup>5</sup></code></li>
	<li><code>connections[i][0] != connections[i][1]</code></li>
</ol>
