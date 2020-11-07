### [Number of Connected Components in an Undirected Graph](https://leetcode.com/problems/number-of-connected-components-in-an-undirected-graph)

<p>Given <code>n</code> nodes labeled from <code>0</code> to <code>n - 1</code> and a list of undirected edges (each edge is a pair of nodes), write a function to find the number of connected components in an undirected graph.</p>

<p><b>Example 1:</b></p>

<pre>
<strong>Input: </strong><code>n = 5</code> and <code>edges = [[0, 1], [1, 2], [3, 4]]</code>

     0          3
     |          |
     1 --- 2    4 

<strong>Output: </strong>2
</pre>

<p><b>Example 2:</b></p>

<pre>
<strong>Input: </strong><code>n = 5</code> and <code>edges = [[0, 1], [1, 2], [2, 3], [3, 4]]</code>

     0           4
     |           |
     1 --- 2 --- 3

<strong>Output:&nbsp;&nbsp;</strong>1
</pre>

<p><b>Note:</b><br />
You can assume that no duplicate edges will appear in <code>edges</code>. Since all edges are undirected, <code>[0, 1]</code> is the same as <code>[1, 0]</code> and thus will not appear together in <code>edges</code>.</p>
