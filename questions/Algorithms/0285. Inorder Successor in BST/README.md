### [Inorder Successor in BST](https://leetcode.com/problems/inorder-successor-in-bst)

<p>Given a binary search tree and a node in it, find the in-order successor of that node in the BST.</p>

<p>The successor of a node&nbsp;<code>p</code>&nbsp;is the node with the smallest key greater than&nbsp;<code>p.val</code>.</p>

<p>&nbsp;</p>

<p><strong>Example 1:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2019/01/23/285_example_1.PNG" style="width: 122px; height: 117px;" />
<pre>
<strong>Input: </strong>root = <span id="example-input-1-1">[2,1,3]</span>, p = <span id="example-input-1-2">1</span>
<strong>Output: </strong><span id="example-output-1">2</span>
<strong>Explanation: </strong>1&#39;s in-order successor node is 2. Note that both p and the return value is of TreeNode type.
</pre>

<p><strong>Example 2:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2019/01/23/285_example_2.PNG" style="width: 246px; height: 229px;" />
<pre>
<strong>Input: </strong>root = <span id="example-input-2-1">[5,3,6,2,4,null,null,1]</span>, p = <span id="example-input-2-2">6</span>
<strong>Output: </strong><span id="example-output-2">null</span>
<strong>Explanation: </strong>There is no in-order successor of the current node, so the answer is <code>null</code>.
</pre>

<p>&nbsp;</p>

<p><strong>Note:</strong></p>

<ol>
	<li>If the given node has no in-order successor in the tree, return <code>null</code>.</li>
	<li>It&#39;s guaranteed that the values of the tree are unique.</li>
</ol>
