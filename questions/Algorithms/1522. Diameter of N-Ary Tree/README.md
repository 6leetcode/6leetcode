### [Diameter of N-Ary Tree](https://leetcode.com/problems/diameter-of-n-ary-tree)

<p>Given a&nbsp;<code>root</code>&nbsp;of an <a href="https://leetcode.com/articles/introduction-to-n-ary-trees/">N-ary tree</a>,&nbsp;you need to compute the length of the diameter of the tree.</p>

<p>The diameter of an N-ary tree is the length of the&nbsp;<strong>longest</strong>&nbsp;path between any two nodes in the&nbsp;tree. This path may or may not pass through the root.</p>

<p>(<em>Nary-Tree input serialization&nbsp;is represented in their level order traversal, each group of children is separated by the null value.)</em></p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>

<p><img alt="" src="https://assets.leetcode.com/uploads/2020/07/19/sample_2_1897.png" style="width: 324px; height: 173px;" /></p>

<pre>
<strong>Input:</strong> root = [1,null,3,2,4,null,5,6]
<strong>Output:</strong> 3
<strong>Explanation: </strong>Diameter is shown in red color.</pre>

<p><strong>Example 2:</strong></p>

<p><strong><img alt="" src="https://assets.leetcode.com/uploads/2020/07/19/sample_1_1897.png" style="width: 253px; height: 246px;" /></strong></p>

<pre>
<strong>Input:</strong> root = [1,null,2,null,3,4,null,5,null,6]
<strong>Output:</strong> 4
</pre>

<p><strong>Example 3:</strong></p>

<p><img alt="" src="https://assets.leetcode.com/uploads/2020/07/19/sample_3_1897.png" style="width: 369px; height: 326px;" /></p>

<pre>
<strong>Input:</strong> root = [1,null,2,3,4,5,null,null,6,7,null,8,null,9,10,null,null,11,null,12,null,13,null,null,14]
<strong>Output:</strong> 7
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li>The depth of the n-ary tree is less than or equal to <code>1000</code>.</li>
	<li>The total number of nodes is between <code>[0,&nbsp;10^4]</code>.</li>
</ul>