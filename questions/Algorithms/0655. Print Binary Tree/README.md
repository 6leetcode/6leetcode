### [Print Binary Tree](https://leetcode.com/problems/print-binary-tree)

<p>Print a binary tree in an <code>m x n</code> 2D string array following these rules:</p>

<ul>
	<li>The row numbers <code>m</code> should be equal to the height of the given binary tree.</li>
	<li>The column number <code>n</code> should always be an odd number.</li>
	<li>The root node&#39;s value (in string format) should be put in the exact middle of the first row it can be put. The column and the row where the root node belongs will separate the rest space into two parts (<strong>left-bottom part and right-bottom part</strong>). You should print the left subtree in the left-bottom part and print the right subtree in the right-bottom part. The left-bottom part and the right-bottom part should have the same size. Even if one subtree is none while the other is not, you don&#39;t need to print anything for the none subtree but still need to leave the space as large as that for the other subtree. However, if two subtrees are none, then you don&#39;t need to leave space for both of them.</li>
	<li>Each unused space should contain an empty string <code>&quot;&quot;</code>.</li>
	<li>Print the subtrees following the same rules.</li>
</ul>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2021/05/03/print1-tree.jpg" style="width: 141px; height: 181px;" />
<pre>
<strong>Input:</strong> root = [1,2]
<strong>Output:</strong> 
[[&quot;&quot;,&quot;1&quot;,&quot;&quot;],
&nbsp;[&quot;2&quot;,&quot;&quot;,&quot;&quot;]]
</pre>

<p><strong>Example 2:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2021/05/03/print2-tree.jpg" style="width: 207px; height: 302px;" />
<pre>
<strong>Input:</strong> root = [1,2,3,null,4]
<strong>Output:</strong> 
[[&quot;&quot;,&quot;&quot;,&quot;&quot;,&quot;1&quot;,&quot;&quot;,&quot;&quot;,&quot;&quot;],
&nbsp;[&quot;&quot;,&quot;2&quot;,&quot;&quot;,&quot;&quot;,&quot;&quot;,&quot;3&quot;,&quot;&quot;],
&nbsp;[&quot;&quot;,&quot;&quot;,&quot;4&quot;,&quot;&quot;,&quot;&quot;,&quot;&quot;,&quot;&quot;]]
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li>The number of nodes in the tree is in the range <code>[1, 2<sup>10</sup>]</code>.</li>
	<li><code>-99 &lt;= Node.val &lt;= 99</code></li>
	<li>The depth of the tree will be in the range <code>[1, 10]</code>.</li>
</ul>
