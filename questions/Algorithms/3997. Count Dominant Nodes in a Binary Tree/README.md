### [Count Dominant Nodes in a Binary Tree](https://leetcode.com/problems/count-dominant-nodes-in-a-binary-tree)

<p>You are given the <code>root</code> of a <span data-keyword="complete-binary-tree">complete binary tree</span>.</p>

<p>A node <code>x</code> is called <strong>dominant</strong> if its value is equal to the maximum value among all nodes in the <span data-keyword="subtree">subtree</span> rooted at <code>x</code>.</p>

<p>Return the number of dominant nodes in the tree.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<div class="example-block">
<p><img alt="" src="https://assets.leetcode.com/uploads/2026/06/13/tnew.png" style="width: 300px; height: 193px;" /></p>

<p><strong>Input:</strong> <span class="example-io">root = [5,3,8,2,4,7,1]</span></p>

<p><strong>Output:</strong> <span class="example-io">5</span></p>

<p><strong>Explanation:</strong></p>

<ul>
	<li>The leaf nodes with values 2, 4, 7, and 1 are dominant.</li>
	<li>The node with value 8 is dominant because its value is the maximum value in its subtree <code>[8, 7, 1]</code>.</li>
	<li>Thus, the answer is 5.</li>
</ul>
</div>

<p><strong class="example">Example 2:</strong></p>

<div class="example-block">
<p><img alt="" src="https://assets.leetcode.com/uploads/2026/06/15/t9.png" style="width: 250px; height: 183px;" /></p>

<p><strong>Input:</strong> <span class="example-io">root = [1,2,3,1,2]</span></p>

<p><strong>Output:</strong> <span class="example-io">4</span></p>

<p><strong>Explanation:</strong></p>

<ul>
	<li>The leaf nodes with values 1, 2, and 3 are dominant.</li>
	<li>The node with value 2 whose subtree is <code>[2, 1, 2]</code> is dominant because its value is the maximum value in its subtree.</li>
	<li>Thus, the answer is 4.</li>
</ul>
</div>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li>The number of nodes in the tree is in the range <code>[1, 10<sup>5</sup>]</code>.</li>
	<li><code>1 &lt;= Node.val &lt;= 10<sup>9</sup></code></li>
	<li>The tree is guaranteed to be a complete binary tree.</li>
</ul>
