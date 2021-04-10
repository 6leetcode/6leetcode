### [Find All The Lonely Nodes](https://leetcode.com/problems/find-all-the-lonely-nodes)

<p>In a binary tree, a <strong>lonely</strong> node is a node that is the only child of its parent node. The root of the tree is not lonely because it does not have a parent node.</p>

<p>Given the <code>root</code> of a binary tree, return <em>an array containing the values of all lonely nodes</em> in the tree. Return the list <strong>in any order</strong>.</p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2020/06/03/e1.png" style="width: 203px; height: 202px;" />
<pre>
<strong>Input:</strong> root = [1,2,3,null,4]
<strong>Output:</strong> [4]
<strong>Explanation:</strong> Light blue node is the only lonely node.
Node 1 is the root and is not lonely.
Nodes 2 and 3 have the same parent and are not lonely.
</pre>

<p><strong>Example 2:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2020/06/03/e2.png" style="width: 442px; height: 282px;" />
<pre>
<strong>Input:</strong> root = [7,1,4,6,null,5,3,null,null,null,null,null,2]
<strong>Output:</strong> [6,2]
<strong>Explanation:</strong> Light blue nodes are lonely nodes.
Please remember that order doesn&#39;t matter, [2,6] is also an acceptable answer.
</pre>

<p><strong>Example 3:</strong></p>
<strong><img alt="" src="https://assets.leetcode.com/uploads/2020/06/03/tree.png" style="width: 363px; height: 202px;" /> </strong>

<pre>
<strong>
Input:</strong> root = [11,99,88,77,null,null,66,55,null,null,44,33,null,null,22]
<strong>Output:</strong> [77,55,33,66,44,22]
<strong>Explanation:</strong> Nodes 99 and 88 share the same parent. Node 11 is the root.
All other nodes are lonely.
</pre>

<p><strong>Example 4:</strong></p>

<pre>
<strong>Input:</strong> root = [197]
<strong>Output:</strong> []
</pre>

<p><strong>Example 5:</strong></p>

<pre>
<strong>Input:</strong> root = [31,null,78,null,28]
<strong>Output:</strong> [78,28]
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li>The number of nodes in the&nbsp;<code>tree</code>&nbsp;is in the range&nbsp;<code>[1, 1000].</code></li>
	<li>Each node&#39;s value is between&nbsp;<code>[1, 10^6]</code>.</li>
</ul>
