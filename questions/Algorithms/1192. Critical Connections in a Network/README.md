### [Critical Connections in a Network](https://leetcode.com/problems/critical-connections-in-a-network)

<p>There are&nbsp;<code>n</code> servers numbered from&nbsp;<code>0</code>&nbsp;to&nbsp;<code>n-1</code> connected by&nbsp;undirected server-to-server <code>connections</code> forming a network where <code>connections[i] = [a, b]</code>&nbsp;represents a connection between servers <code>a</code>&nbsp;and <code>b</code>. Any server can reach any other server directly or indirectly through the network.</p>

<p>A <em>critical connection</em>&nbsp;is a connection that, if removed, will make some server unable to reach some other server.</p>

<p>Return all critical connections in the network in any order.</p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>

<p><strong><img alt="" src="https://assets.leetcode.com/uploads/2019/09/03/1537_ex1_2.png" style="width: 198px; height: 248px;" /></strong></p>

<pre>
<strong>Input:</strong> n = 4, connections = [[0,1],[1,2],[2,0],[1,3]]
<strong>Output:</strong> [[1,3]]
<strong>Explanation:</strong> [[3,1]] is also accepted.
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= n &lt;= 10^5</code></li>
	<li><code>n-1 &lt;= connections.length &lt;= 10^5</code></li>
	<li><code>connections[i][0] != connections[i][1]</code></li>
	<li>There are no repeated connections.</li>
</ul>
