### [Is Graph Bipartite?](https://leetcode.com/problems/is-graph-bipartite)

<p>Given an undirected <code>graph</code>, return <code>true</code> if and only if it is bipartite.</p>

<p>Recall that a graph is <em>bipartite</em> if we can split its set of nodes into two independent subsets A and B, such that every edge in the graph has one node in A and another node in B.</p>

<p>The graph is given in the following form: <code>graph[i]</code> is a list of indexes <code>j</code> for which the edge between nodes <code>i</code> and <code>j</code> exists.&nbsp; Each node is an integer between <code>0</code> and <code>graph.length - 1</code>.&nbsp; There are no self edges or parallel edges: <code>graph[i]</code> does not contain <code>i</code>, and it doesn&#39;t contain any element twice.</p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2020/10/21/bi1.jpg" style="width: 222px; height: 222px;" />
<pre>
<strong>Input:</strong> graph = [[1,3],[0,2],[1,3],[0,2]]
<strong>Output:</strong> true
<strong>Explanation:</strong> We can divide the vertices into two groups: {0, 2} and {1, 3}.

</pre>

<p><strong>Example 2:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2020/10/21/bi2.jpg" style="width: 222px; height: 222px;" />
<pre>
<strong>Input:</strong> graph = [[1,2,3],[0,2],[0,1,3],[0,2]]
<strong>Output:</strong> false
<strong>Explanation:</strong> We cannot find a way to divide the set of nodes into two independent subsets.

</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= graph.length &lt;= 100</code></li>
	<li><code>0 &lt;= graphp[i].length &lt; 100</code></li>
	<li><code>0 &lt;= graph[i][j] &lt;= graph.length - 1</code></li>
	<li><code>graph[i][j] != i</code></li>
	<li>All the values of <code>graph[i]</code> are <strong>unique</strong>.</li>
	<li>The graph is <strong>guaranteed</strong> to be <strong>undirected</strong>.&nbsp;</li>
</ul>
