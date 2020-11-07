### [All Paths from Source Lead to Destination](https://leetcode.com/problems/all-paths-from-source-lead-to-destination)

<p>Given the <code>edges</code> of a directed graph where <code>edges[i] = [a<sub>i</sub>, b<sub>i</sub>]</code> indicates there is an edge between nodes <code>a<sub>i</sub></code> and <code>b<sub>i</sub></code>, and two nodes <code>source</code> and <code>destination</code> of this graph, determine whether or not all paths starting from <code>source</code> eventually, end at <code>destination</code>, that is:</p>

<ul>
	<li>At least one path exists from the <code>source</code> node to the <code>destination</code> node</li>
	<li>If a path exists from the <code>source</code> node to a node with no outgoing edges, then that node is equal to <code>destination</code>.</li>
	<li>The number of possible paths from <code>source</code> to <code>destination</code> is a finite number.</li>
</ul>

<p>Return <code>true</code> if and only if all roads from <code>source</code> lead to <code>destination</code>.</p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2019/03/16/485_example_1.png" style="width: 200px; height: 208px;" />
<pre>
<strong>Input:</strong> n = 3, edges = [[0,1],[0,2]], source = 0, destination = 2
<strong>Output:</strong> false
<strong>Explanation:</strong> It is possible to reach and get stuck on both node 1 and node 2.
</pre>

<p><strong>Example 2:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2019/03/16/485_example_2.png" style="width: 200px; height: 230px;" />
<pre>
<strong>Input:</strong> n = 4, edges = [[0,1],[0,3],[1,2],[2,1]], source = 0, destination = 3
<strong>Output:</strong> false
<strong>Explanation:</strong> We have two possibilities: to end at node 3, or to loop over node 1 and node 2 indefinitely.
</pre>

<p><strong>Example 3:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2019/03/16/485_example_3.png" style="width: 200px; height: 183px;" />
<pre>
<strong>Input:</strong> n = 4, edges = [[0,1],[0,2],[1,3],[2,3]], source = 0, destination = 3
<strong>Output:</strong> true
</pre>

<p><strong>Example 4:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2019/03/16/485_example_4.png" style="width: 200px; height: 183px;" />
<pre>
<strong>Input:</strong> n = 3, edges = [[0,1],[1,1],[1,2]], source = 0, destination = 2
<strong>Output:</strong> false
<strong>Explanation:</strong> All paths from the source node end at the destination node, but there are an infinite number of paths, such as 0-1-2, 0-1-1-2, 0-1-1-1-2, 0-1-1-1-1-2, and so on.
</pre>

<p><strong>Example 5:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2019/03/16/485_example_5.png" style="width: 150px; height: 131px;" />
<pre>
<strong>Input:</strong> n = 2, edges = [[0,1],[1,1]], source = 0, destination = 1
<strong>Output:</strong> false
<strong>Explanation:</strong> There is infinite self-loop at destination node.
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= n &lt;= 10<sup>4</sup></code></li>
	<li><code>0 &lt;= edges.length&nbsp;&lt;= 10<sup>4</sup></code></li>
	<li><code>edges.length == 2</code></li>
	<li><code>0 &lt;= a<sub>i</sub>, b<sub>i</sub> &lt;= n - 1</code></li>
	<li><code>0 &lt;= source &lt;= n - 1</code></li>
	<li><code>0 &lt;= destination &lt;= n - 1</code></li>
	<li>The given graph may have self-loops and parallel edges.</li>
</ul>
