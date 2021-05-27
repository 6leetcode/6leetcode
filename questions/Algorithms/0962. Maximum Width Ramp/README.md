### [Maximum Width Ramp](https://leetcode.com/problems/maximum-width-ramp)

<p>Given an array <code>nums</code> of integers, a <em>ramp</em>&nbsp;is a tuple <code>(i, j)</code> for which <code>i &lt; j</code>&nbsp;and&nbsp;<code>nums[i] &lt;= nums[j]</code>.&nbsp; The width of such a&nbsp;ramp is <code>j - i</code>.</p>

<p>Find the maximum width of a ramp in <code>nums</code>.&nbsp; If one doesn&#39;t exist, return 0.</p>

<p>&nbsp;</p>

<p><strong>Example 1:</strong></p>

<pre>
<strong>Input: </strong>nums = <span id="example-input-1-1">[6,0,8,2,1,5]</span>
<strong>Output: </strong><span id="example-output-1">4</span>
<strong>Explanation: </strong>
The maximum width ramp is achieved at (i, j) = (1, 5): nums[1] = 0 and nums[5] = 5.
</pre>

<div>
<p><strong>Example 2:</strong></p>

<pre>
<strong>Input: </strong>nums = <span id="example-input-2-1">[9,8,1,0,1,9,4,0,4,1]</span>
<strong>Output: </strong><span id="example-output-2">7</span>
<strong>Explanation: </strong>
The maximum width ramp is achieved at (i, j) = (2, 9): nums[2] = 1 and nums[9] = 1.
</pre>
</div>

<div>
<div>
<p>&nbsp;</p>

<p><strong>Note:</strong></p>

<ol>
	<li><code>2 &lt;= nums.length &lt;= 50000</code></li>
	<li><code>0 &lt;= nums[i] &lt;= 50000</code></li>
</ol>
</div>
</div>

<div>
<div>&nbsp;</div>
</div>
