### [Maximum Value at a Given Index in a Bounded Array](https://leetcode.com/problems/maximum-value-at-a-given-index-in-a-bounded-array)

<p>You are given three positive integers <code>n</code>, <code>index</code> and <code>maxSum</code>. You want to construct an array <code>nums</code> <strong>(0-indexed) </strong>that satisfies the following conditions:</p>

<ul>
	<li><code>nums.length == n</code></li>
	<li><code>nums[i]</code> is a <strong>positive</strong> integer where <code>0 &lt;= i &lt; n</code>.</li>
	<li><code>abs(nums[i] - nums[i+1]) &lt;= 1</code> where <code>0 &lt;= i &lt; n-1</code>.</li>
	<li>The sum of all the elements of <code>nums</code> does not exceed <code>maxSum</code>.</li>
	<li><code>nums[index]</code> is <strong>maximized</strong>.</li>
</ul>

<p>Return <code>nums[index]</code> of the constructed array.</p>

<p>Note that <code>abs(x)</code> equals <code>x</code> if <code>x &gt;= 0</code>, and <code>-x</code> otherwise.</p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>

<pre>
<strong>Input:</strong> n = 4, index = 2,  maxSum = 6
<strong>Output:</strong> 2
<strong>Explanation:</strong> The arrays [1,1,<strong>2</strong>,1] and [1,2,<strong>2</strong>,1] satisfy all the conditions. There are no other valid arrays with a larger value at the given index.
</pre>

<p><strong>Example 2:</strong></p>

<pre>
<strong>Input:</strong> n = 6, index = 1,  maxSum = 10
<strong>Output:</strong> 3
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= n &lt;= maxSum &lt;= 10<sup>9</sup></code></li>
	<li><code>0 &lt;= index &lt; n</code></li>
</ul>