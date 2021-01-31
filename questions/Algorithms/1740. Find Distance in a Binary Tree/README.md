### [Find Distance in a Binary Tree](https://leetcode.com/problems/find-distance-in-a-binary-tree)

<p>Given the root of a binary tree and two integers <code>p</code> and <code>q</code>, return <em>the <strong>distance</strong> between the nodes of value </em><code>p</code><em> and value </em><code>q</code><em> in the tree</em>.</p>

<p>The <strong>distance</strong> between two nodes is the number of edges on the path from one to the other.</p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2018/12/14/binarytree.png" />
<pre>
<strong>Input:</strong> root = [3,5,1,6,2,0,8,null,null,7,4], p = 5, q = 0
<strong>Output:</strong> 3
<strong>Explanation:</strong> There are 3 edges between 5 and 0: 5-3-1-0.</pre>

<p><strong>Example 2:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2018/12/14/binarytree.png" />
<pre>
<strong>Input:</strong> root = [3,5,1,6,2,0,8,null,null,7,4], p = 5, q = 7
<strong>Output:</strong> 2
<strong>Explanation:</strong> There are 2 edges between 5 and 7: 5-2-7.</pre>

<p><strong>Example 3:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2018/12/14/binarytree.png" />
<pre>
<strong>Input:</strong> root = [3,5,1,6,2,0,8,null,null,7,4], p = 5, q = 5
<strong>Output:</strong> 0
<strong>Explanation:</strong> The distance between a node and itself is 0.</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li>The number of nodes in the tree is in the range <code>[1, 10<sup>4</sup>]</code>.</li>
	<li><code>0 &lt;= Node.val &lt;= 10<sup>9</sup></code></li>
	<li>All <code>Node.val</code> are <strong>unique</strong>.</li>
	<li><code>p</code> and <code>q</code> are values in the tree.</li>
</ul>
