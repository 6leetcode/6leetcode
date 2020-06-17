### [Graph Valid Tree](https://leetcode.com/problems/graph-valid-tree)

<p>Given <code>n</code> nodes labeled from <code>0</code> to <code>n-1</code> and a list of undirected edges (each edge is a pair of nodes), write a function to check whether these edges make up a valid tree.</p>

<p><strong>Example 1:</strong></p>

<pre>
<strong>Input:</strong> <code>n = 5</code>, and <code>edges = [[0,1], [0,2], [0,3], [1,4]]</code>
<strong>Output:</strong> true</pre>

<p><strong>Example 2:</strong></p>

<pre>
<strong>Input:</strong> <code>n = 5, </code>and <code>edges = [[0,1], [1,2], [2,3], [1,3], [1,4]]</code>
<strong>Output:</strong> false</pre>

<p><b>Note</b>: you can assume that no duplicate edges will appear in <code>edges</code>. Since all edges are undirected, <code>[0,1]</code> is the same as <code>[1,0]</code> and thus will not appear together in <code>edges</code>.</p>
