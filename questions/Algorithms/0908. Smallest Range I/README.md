### [Smallest Range I](https://leetcode.com/problems/smallest-range-i)

<p>Given an array <code>nums</code> of integers, for each integer <code>nums[i]</code> we may choose any <code>x</code> with <code>-k &lt;= x &lt;= k</code>, and add <code>x</code> to <code>nums[i]</code>.</p>

<p>After this process, we have some array <code>result</code>.</p>

<p>Return the smallest possible difference between the maximum value of <code>result</code>&nbsp;and the minimum value of <code>result</code>.</p>

<p>&nbsp;</p>

<ol>
</ol>

<div>
<p><strong>Example 1:</strong></p>

<pre>
<strong>Input: </strong>nums = <span id="example-input-1-1">[1]</span>, k = <span id="example-input-1-2">0</span>
<strong>Output: </strong><span id="example-output-1">0
<strong>Explanation</strong>: result = [1]</span>
</pre>

<div>
<p><strong>Example 2:</strong></p>

<pre>
<strong>Input: </strong>nums = <span id="example-input-2-1">[0,10]</span>, k = <span id="example-input-2-2">2</span>
<strong>Output: </strong><span id="example-output-2">6
</span><span id="example-output-1"><strong>Explanation</strong>: result = [2,8]</span>
</pre>

<div>
<p><strong>Example 3:</strong></p>

<pre>
<strong>Input: </strong>nums = <span id="example-input-3-1">[1,3,6]</span>, k = <span id="example-input-3-2">3</span>
<strong>Output: </strong><span id="example-output-3">0
</span><span id="example-output-1"><strong>Explanation</strong>: result = [3,3,3] or result = [4,4,4]</span>
</pre>

<p>&nbsp;</p>

<p><strong>Note:</strong></p>

<ol>
	<li><code>1 &lt;= nums.length &lt;= 10000</code></li>
	<li><code>0 &lt;= nums[i] &lt;= 10000</code></li>
	<li><code>0 &lt;= k &lt;= 10000</code></li>
</ol>
</div>
</div>
</div>
