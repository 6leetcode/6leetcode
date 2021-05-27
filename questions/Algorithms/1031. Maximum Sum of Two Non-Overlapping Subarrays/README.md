### [Maximum Sum of Two Non-Overlapping Subarrays](https://leetcode.com/problems/maximum-sum-of-two-non-overlapping-subarrays)

<p>Given an array <code>nums</code> of non-negative integers, return the maximum sum of elements in two non-overlapping (contiguous) subarrays, which have lengths&nbsp;<code>firstLen</code> and <code>secondLen</code>.&nbsp; (For clarification, the <code>firstLen</code>-length subarray could occur before or after the <code>secondLen</code>-length subarray.)</p>

<p>Formally,&nbsp;return the largest <code>V</code> for which&nbsp;<code>V = (nums[i] + nums[i+1] + ... + nums[i+firstLen-1]) + (nums[j] + nums[j+1] + ... + nums[j+secondLen-1])</code> and either:</p>

<ul>
	<li><code>0 &lt;= i &lt; i + firstLen - 1 &lt; j &lt; j + secondLen - 1 &lt; nums.length</code>, <strong>or</strong></li>
	<li><code>0 &lt;= j &lt; j + secondLen - 1 &lt; i &lt; i + firstLen - 1 &lt; nums.length</code>.</li>
</ul>

<p>&nbsp;</p>

<ol>
</ol>

<div>
<p><strong>Example 1:</strong></p>

<pre>
<strong>Input: </strong>nums = <span id="example-input-1-1">[0,6,5,2,2,5,1,9,4]</span>, firstLen = <span id="example-input-1-2">1</span>, secondLen = <span id="example-input-1-3">2</span>
<strong>Output: </strong><span id="example-output-1">20
<strong>Explanation:</strong> One choice of subarrays is [9] with length 1, and [6,5] with length 2.</span>
</pre>

<div>
<p><strong>Example 2:</strong></p>

<pre>
<strong>Input: </strong>nums = <span id="example-input-2-1">[3,8,1,3,2,1,8,9,0]</span>, firstLen = <span id="example-input-2-2">3</span>, secondLen = <span id="example-input-2-3">2</span>
<strong>Output: </strong><span id="example-output-2">29
</span><span id="example-output-1"><strong>Explanation:</strong> One choice of subarrays is</span><span> [3,8,1] with length 3, and [8,9] with length 2.</span>
</pre>

<div>
<p><strong>Example 3:</strong></p>

<pre>
<strong>Input: </strong>nums = <span id="example-input-3-1">[2,1,5,6,0,9,5,0,3,8]</span>, firstLen = <span id="example-input-3-2">4</span>, secondLen = <span id="example-input-3-3">3</span>
<strong>Output: </strong><span id="example-output-3">31
</span><span id="example-output-1"><strong>Explanation:</strong> One choice of subarrays is</span><span> [5,6,0,9] with length 4, and [3,8] with length 3.</span>
</pre>

<p>&nbsp;</p>

<p><strong>Note:</strong></p>

<ol>
	<li><code>firstLen &gt;= 1</code></li>
	<li><code>secondLen &gt;= 1</code></li>
	<li><code>firstLen + secondLen &lt;= nums.length &lt;= 1000</code></li>
	<li><code>0 &lt;= nums[i] &lt;= 1000</code></li>
</ol>
</div>
</div>
</div>
