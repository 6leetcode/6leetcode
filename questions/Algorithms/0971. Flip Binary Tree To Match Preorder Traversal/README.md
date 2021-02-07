### [Flip Binary Tree To Match Preorder Traversal](https://leetcode.com/problems/flip-binary-tree-to-match-preorder-traversal)

<p>You are given the <code>root</code> of a binary tree with <code>n</code> nodes, each node has a different value from <code>1</code> to <code>n</code>. You are also given a sequence of <code>n</code> values <code>voyage</code>, reported by a preorder traversal starting from the <code>root</code>.</p>

<p>A node in this binary tree can be <strong>flipped</strong> by swapping its left child and its right child.</p>

<p>Flip <strong>the least number of nodes</strong> in the tree so that the preorder traversal of the tree matches <code>voyage</code>.</p>

<p>Return <em>a list of the values of all nodes flipped</em>. You may return the answer in <strong>any order</strong>. If we cannot <strong>flip</strong> the nodes in the tree to obtain <code>voyage</code>, return the list <code>[-1]</code>.</p>

<p>The <strong>preorder traversal</strong> of a node means we report the current node&#39;s value, then preorder-traverse the left child, then preorder-traverse the right child.</p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2019/01/02/1219-01.png" style="width: 150px; height: 205px;" />
<pre>
<strong>Input:</strong> root = [1,2], voyage = [2,1]
<strong>Output:</strong> [-1]
</pre>

<p><strong>Example 2:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2019/01/02/1219-02.png" style="width: 150px; height: 142px;" />
<pre>
<strong>Input:</strong> root = [1,2,3], voyage = [1,3,2]
<strong>Output:</strong> [1]
</pre>

<p><strong>Example 3:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2019/01/02/1219-02.png" style="width: 150px; height: 142px;" />
<pre>
<strong>Input:</strong> root = [1,2,3], voyage = [1,2,3]
<strong>Output:</strong> []
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li>The number of nodes in the tree is <code>n</code>.</li>
	<li><code>n == voyage.length</code></li>
	<li><code>1 &lt;= n &lt;= 100</code></li>
	<li><code>1 &lt;= Node.val, voyage[i] &lt;= n</code></li>
	<li>All the values of the tree are <strong>unique</strong>.</li>
	<li>All the values of <code>voyage</code> are <strong>unique</strong>.</li>
</ul>
