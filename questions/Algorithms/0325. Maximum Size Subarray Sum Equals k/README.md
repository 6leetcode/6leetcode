### [Maximum Size Subarray Sum Equals k](https://leetcode.com/problems/maximum-size-subarray-sum-equals-k)

<p>Given an integer array <code>nums</code> and an integer <code>k</code>, return <em>the maximum length of a subarray that sums to</em> <code>k</code>. If there isn&#39;t one, return <code>0</code> instead.</p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>

<pre>
<strong>Input:</strong> nums = [1,-1,5,-2,3], k = 3
<strong>Output:</strong> 4
<strong>Explanation:</strong> The subarray [1, -1, 5, -2] sums to 3 and is the longest.
</pre>

<p><strong>Example 2:</strong></p>

<pre>
<strong>Input:</strong> nums = [-2,-1,2,1], k = 1
<strong>Output:</strong> 2
<strong>Explanation:</strong> The subarray [-1, 2] sums to 1 and is the longest.
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= nums.length &lt;= 2 * 10<sup>5</sup></code></li>
	<li><code>-10<sup>4</sup> &lt;= nums[i] &lt;= 10<sup>4</sup></code></li>
	<li><code>-10<sup>9</sup>&nbsp;&lt;= k &lt;= 10<sup>9</sup></code></li>
</ul>
