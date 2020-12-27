### [Maximum Binary Tree](https://leetcode.com/problems/maximum-binary-tree)

<p>Given an integer array with no duplicates. A maximum tree building on this array is defined as follow:</p>

<ol>
	<li>The root is the maximum number in the array.</li>
	<li>The left subtree is the maximum tree constructed from left part subarray divided by the maximum number.</li>
	<li>The right subtree is the maximum tree constructed from right part subarray divided by the maximum number.</li>
</ol>

<p>Construct the maximum tree by the given array and output the root node of this tree.</p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2020/12/24/tree1.jpg" style="width: 302px; height: 421px;" />
<pre>
<strong>Input:</strong> nums = [3,2,1,6,0,5]
<strong>Output:</strong> [6,3,5,null,2,0,null,null,1]
</pre>

<p><strong>Example 2:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2020/12/24/tree2.jpg" style="width: 182px; height: 301px;" />
<pre>
<strong>Input:</strong> nums = [3,2,1]
<strong>Output:</strong> [3,null,2,null,1]
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= nums.length &lt;= 1000</code></li>
	<li><code>0 &lt;= nums[i] &lt;= 1000</code></li>
	<li>All integers in <code>nums</code> are <strong>unique</strong>.</li>
</ul>
