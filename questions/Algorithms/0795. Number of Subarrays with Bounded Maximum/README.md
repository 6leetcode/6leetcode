### [Number of Subarrays with Bounded Maximum](https://leetcode.com/problems/number-of-subarrays-with-bounded-maximum)

<p>We are given an array <code>nums</code> of positive integers, and two positive integers <code>left</code> and <code>right</code> (<code>left &lt;= right</code>).</p>

<p>Return the number of (contiguous, non-empty) subarrays such that the value of the maximum array element in that subarray is at least <code>left</code> and at most <code>right</code>.</p>

<pre>
<strong>Example:</strong>
<strong>Input:</strong> 
nums = [2, 1, 4, 3]
left = 2
right = 3
<strong>Output:</strong> 3
<strong>Explanation:</strong> There are three subarrays that meet the requirements: [2], [2, 1], [3].
</pre>

<p><strong>Note:</strong></p>

<ul>
	<li><code>left</code>, <code>right</code>, and <code>nums[i]</code> will be an integer in the range <code>[0, 10<sup>9</sup>]</code>.</li>
	<li>The length of <code>nums</code> will be in the range of <code>[1, 50000]</code>.</li>
</ul>
