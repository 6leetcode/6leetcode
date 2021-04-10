### [Change the Root of a Binary Tree](https://leetcode.com/problems/flip-binary-tree)

<p>Given the <code>root</code> of a binary tree and a <code>leaf</code> node, reroot the tree so that the <code>leaf</code> is the new root.</p>

<p>You can reroot the tree with the following steps for each node <code>cur</code> on the path <strong>starting from the </strong><code>leaf</code> up to the <code>root</code>​​​ <strong>excluding the root</strong>:</p>

<ol>
	<li>If <code>cur</code> has a left child, then that child becomes <code>cur</code>&#39;s right child. Note that it is guaranteed that <code>cur</code> will have at most one child.</li>
	<li><code>cur</code>&#39;s original parent becomes <code>cur</code>&#39;s left child.</li>
</ol>

<p>Return <em>the new root </em><em>of the rerooted tree.</em></p>

<p><strong>Note:</strong> Ensure that your solution sets the <code>Node.parent</code> pointers correctly after rerooting or you will receive &quot;Wrong Answer&quot;.</p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2020/11/24/fliptree.png" style="width: 400px; height: 298px;" />
<pre>
<strong>Input:</strong> root = [3,5,1,6,2,0,8,null,null,7,4], leaf = 7
<strong>Output:</strong> [7,2,null,5,4,3,6,null,null,null,1,null,null,0,8]
</pre>

<p><strong>Example 2:</strong></p>

<pre>
<strong>Input:</strong> root = [3,5,1,6,2,0,8,null,null,7,4], leaf = 0
<strong>Output:</strong> [0,1,null,3,8,5,null,null,null,6,2,null,null,7,4]
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li>The number of nodes in the tree is in the range <code>[2, 100]</code>.</li>
	<li><code>-10<sup>9</sup> &lt;= Node.val &lt;= 10<sup>9</sup></code></li>
	<li>All <code>Node.val</code> are <strong>unique</strong>.</li>
	<li><code>leaf</code> exist in the tree.</li>
</ul>
