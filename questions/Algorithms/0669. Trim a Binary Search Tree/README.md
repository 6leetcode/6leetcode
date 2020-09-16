### [Trim a Binary Search Tree](https://leetcode.com/problems/trim-a-binary-search-tree)

<p>Given the <code>root</code> of a binary search tree and the lowest and highest boundaries as <code>low</code> and <code>high</code>, trim the tree so that all its elements lies in <code>[low, high]</code>. You might need to change the root of the tree, so the result should return the new root of the trimmed binary search tree.</p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2020/09/09/trim1.jpg" style="width: 450px; height: 126px;" />
<pre>
<strong>Input:</strong> root = [1,0,2], low = 1, high = 2
<strong>Output:</strong> [1,null,2]
</pre>

<p><strong>Example 2:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2020/09/09/trim2.jpg" style="width: 450px; height: 277px;" />
<pre>
<strong>Input:</strong> root = [3,0,4,null,2,null,null,1], low = 1, high = 3
<strong>Output:</strong> [3,2,null,1]
</pre>

<p><strong>Example 3:</strong></p>

<pre>
<strong>Input:</strong> root = [1], low = 1, high = 2
<strong>Output:</strong> [1]
</pre>

<p><strong>Example 4:</strong></p>

<pre>
<strong>Input:</strong> root = [1,null,2], low = 1, high = 3
<strong>Output:</strong> [1,null,2]
</pre>

<p><strong>Example 5:</strong></p>

<pre>
<strong>Input:</strong> root = [1,null,2], low = 2, high = 4
<strong>Output:</strong> [2]
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li>The number of nodes in the tree in the range <code>[1, 10<sup>4</sup>]</code>.</li>
	<li><code>0 &lt;= Node.val &lt;= 10<sup>4</sup></code></li>
	<li>The value of each node in the tree is <strong>unique</strong>.</li>
	<li><code>root</code> is guaranteed to be a valid binary search tree.</li>
	<li><code>0 &lt;= l &lt;= r &lt;= 10<sup>4</sup></code></li>
</ul>
