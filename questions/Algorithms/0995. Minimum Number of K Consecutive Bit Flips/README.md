### [Minimum Number of K Consecutive Bit Flips](https://leetcode.com/problems/minimum-number-of-k-consecutive-bit-flips)

<p>In an array <code>nums</code> containing only 0s and 1s, a <i><code>k</code>-bit flip&nbsp;</i>consists of choosing a (contiguous) subarray of length <code>k</code> and simultaneously changing every 0 in the subarray to 1, and every 1 in the subarray to 0.</p>

<p>Return the minimum number of <code>k</code>-bit flips required so that there is no 0 in the array.&nbsp; If it is not possible, return <code>-1</code>.</p>

<p>&nbsp;</p>

<p><strong>Example 1:</strong></p>

<pre>
<strong>Input: </strong>nums = <span id="example-input-1-1">[0,1,0]</span>, k = <span id="example-input-1-2">1</span>
<strong>Output: </strong><span id="example-output-1">2</span>
<strong>Explanation: </strong>Flip nums[0], then flip nums[2].
</pre>

<div>
<p><strong>Example 2:</strong></p>

<pre>
<strong>Input: </strong>nums = <span id="example-input-2-1">[1,1,0]</span>, k = <span id="example-input-2-2">2</span>
<strong>Output: </strong><span id="example-output-2">-1</span>
<strong>Explanation:</strong>&nbsp;No matter how we flip subarrays of size 2, we can&#39;t make the array become [1,1,1].
</pre>

<div>
<p><strong>Example 3:</strong></p>

<pre>
<strong>Input: </strong>nums = <span id="example-input-3-1">[0,0,0,1,0,1,1,0]</span>, k = <span id="example-input-3-2">3</span>
<strong>Output: </strong><span id="example-output-3">3</span>
<strong>Explanation:</strong>
Flip nums[0],nums[1],nums[2]: nums becomes [1,1,1,1,0,1,1,0]
Flip nums[4],nums[5],nums[6]: nums becomes [1,1,1,1,1,0,0,0]
Flip nums[5],nums[6],nums[7]: nums becomes [1,1,1,1,1,1,1,1]
</pre>

<p>&nbsp;</p>
</div>
</div>

<p><strong>Note:</strong></p>

<ol>
	<li><code>1 &lt;= nums.length &lt;=&nbsp;30000</code></li>
	<li><code>1 &lt;= k &lt;= nums.length</code></li>
</ol>
