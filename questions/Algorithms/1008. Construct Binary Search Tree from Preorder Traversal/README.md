### [Construct Binary Search Tree from Preorder Traversal](https://leetcode.com/problems/construct-binary-search-tree-from-preorder-traversal)

<p>Return the root node of a binary <strong>search</strong> tree that matches the given <code>preorder</code> traversal.</p>

<p><em>(Recall that a binary search tree&nbsp;is a binary tree where for every <font face="monospace">node</font>, any descendant of <code>node.left</code> has a value <code>&lt;</code>&nbsp;<code>node.val</code>, and any descendant of <code>node.right</code> has a value <code>&gt;</code>&nbsp;<code>node.val</code>.&nbsp; Also recall that a preorder traversal&nbsp;displays the value of the&nbsp;<code>node</code> first, then traverses <code>node.left</code>, then traverses <code>node.right</code>.)</em></p>

<p>It&#39;s guaranteed that for the given test cases there is always possible to find a binary search tree with the given requirements.</p>

<p><strong>Example 1:</strong></p>

<pre>
<strong>Input: </strong><span id="example-input-1-1">[8,5,1,7,10,12]</span>
<strong>Output: </strong><span id="example-output-1">[8,5,10,1,7,null,12]
<img alt="" src="https://assets.leetcode.com/uploads/2019/03/06/1266.png" style="height: 200px; width: 306px;" /></span>
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= preorder.length &lt;= 100</code></li>
	<li><code>1 &lt;= preorder[i]&nbsp;&lt;= 10^8</code></li>
	<li>The values of <code>preorder</code> are distinct.</li>
</ul>
