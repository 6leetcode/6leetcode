### [Continuous Subarray Sum](https://leetcode.com/problems/continuous-subarray-sum)

<p>Given an integer array <code>nums</code> and an integer <code>k</code>, return <code>true</code> <em>if the array has a continuous subarray of size <strong>at least two</strong>, that sums up to a multiple of</em> <code>k</code>. That is, it sums up to <code>n * k</code> where <code>n</code> is also an integer.</p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>

<pre>
<strong>Input:</strong> nums = [23,2,4,6,7], k = 6
<strong>Output:</strong> true
<strong>Explanation:</strong> Because [2, 4] is a continuous subarray of size 2 and sums up to 6.
</pre>

<p><strong>Example 2:</strong></p>

<pre>
<strong>Input:</strong> nums = [23,2,6,4,7], k = 6
<strong>Output:</strong> true
<strong>Explanation:</strong> Because [23, 2, 6, 4, 7] is an continuous subarray of size 5 and sums up to 42.
</pre>

<p><strong>Example 3:</strong></p>

<pre>
<strong>Input:</strong> nums = [23,2,6,4,7], k = 13
<strong>Output:</strong> false
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= nums.length &lt;= 10<sup>4</sup></code></li>
	<li><code>0 &lt;= nums[i] &lt;= 10<sup>9</sup></code></li>
	<li><code>0 &lt;= sum(nums[i]) &lt;= 2<sup>31</sup> - 1</code></li>
	<li><code>-2<sup>31</sup> &lt;= k &lt;= 2<sup>31</sup> - 1</code></li>
</ul>
