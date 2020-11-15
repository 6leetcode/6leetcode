### [Boundary of Binary Tree](https://leetcode.com/problems/boundary-of-binary-tree)

<p>A binary tree boundary is the set of nodes (<strong>no duplicates</strong>) denoting the union of the <strong>left boundary</strong>, <strong>leaves</strong>, and <strong>right boundary</strong>.</p>

<p>The <b>left boundary</b> is the set of nodes on the path from the root to the <b>left-most</b> node. The <b>right boundary</b> is the set of nodes on the path from the root to the <b>right-most</b> node.</p>

<p>The <b>left-most</b> node is the <b>leaf</b> node you reach when you always travel to the left subtree if it exists and the right subtree if it doesn&#39;t. The <b>right-most</b> node is defined in the same way except with left and right exchanged. Note that the root may be the <strong>left-most</strong> and/or <strong>right-most</strong> node.</p>

<p>Given the <code>root</code> of a binary tree, return <em>the values of its <strong>boundary</strong> in a <b>counter-clockwise</b> direction starting from the</em> <code>root</code>.</p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2020/11/11/boundary1.jpg" style="width: 299px; height: 290px;" />
<pre>
<strong>Input:</strong> root = [1,null,2,3,4]
<strong>Output:</strong> [1,3,4,2]
<b>Explanation:</b>
The left boundary is the nodes [1,2,3].
The right boundary is the nodes [1,2,4].
The leaves are nodes [3,4].
Unioning the sets together gives [1,2,3,4], which is [1,3,4,2] in counter-clockwise order.
</pre>

<p><strong>Example 2:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2020/11/11/boundary2.jpg" style="width: 599px; height: 411px;" />
<pre>
<strong>Input:</strong> root = [1,2,3,4,5,6,null,null,null,7,8,9,10]
<strong>Output:</strong> [1,2,4,7,8,9,10,6,3]
<b>Explanation:</b>
The left boundary are node 1,2,4. (4 is the left-most node according to definition)
The left boundary is nodes [1,2,4].
The right boundary is nodes [1,3,6,10].
The leaves are nodes [4,7,8,9,10].
Unioning the sets together gives [1,2,3,4,6,7,8,9,10], which is [1,2,4,7,8,9,10,6,3] in counter-clockwise order.
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li>The number of nodes in the tree is in the range <code>[0, 10<sup>4</sup>]</code>.</li>
	<li><code>-1000 &lt;= Node.val &lt;= 1000</code></li>
</ul>
