### [Search in Rotated Sorted Array](https://leetcode.com/problems/search-in-rotated-sorted-array)

<p>Given an integer array <code>nums</code> sorted in ascending order, and an integer <code>target</code>.</p>

<p>Suppose that <code>nums</code> is rotated at some pivot unknown to you beforehand (i.e., <code>[0,1,2,4,5,6,7]</code> might become <code>[4,5,6,7,0,1,2]</code>).</p>

<p>You should search for&nbsp;<code>target</code> in <code>nums</code> and if you found return its index, otherwise return <code>-1</code>.</p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>
<pre><strong>Input:</strong> nums = [4,5,6,7,0,1,2], target = 0
<strong>Output:</strong> 4
</pre><p><strong>Example 2:</strong></p>
<pre><strong>Input:</strong> nums = [4,5,6,7,0,1,2], target = 3
<strong>Output:</strong> -1
</pre><p><strong>Example 3:</strong></p>
<pre><strong>Input:</strong> nums = [1], target = 0
<strong>Output:</strong> -1
</pre>
<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= nums.length &lt;= 5000</code></li>
	<li><code>-10^4 &lt;= nums[i] &lt;= 10^4</code></li>
	<li>All values of <code>nums</code> are <strong>unique</strong>.</li>
	<li><code>nums</code> is guranteed to be rotated at some pivot.</li>
	<li><code>-10^4 &lt;= target &lt;= 10^4</code></li>
</ul>
