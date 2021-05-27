### [Sum of Subsequence Widths](https://leetcode.com/problems/sum-of-subsequence-widths)

<p>Given an array of integers <code>nums</code>, consider all non-empty subsequences of <code>nums</code>.</p>

<p>For any sequence <code>seq</code>, let the&nbsp;<em>width</em>&nbsp;of <code>seq</code> be the difference between the maximum and minimum element of <code>seq</code>.</p>

<p>Return the sum of the widths of all subsequences of <code>nums</code>.&nbsp;</p>

<p>As the answer may be very large, <strong>return the answer modulo </strong><code>10<sup>9</sup> + 7</code>.</p>

<div>
<p>&nbsp;</p>

<p><strong>Example 1:</strong></p>

<pre>
<strong>Input: </strong>nums = <span id="example-input-1-1">[2,1,3]</span>
<strong>Output: </strong><span id="example-output-1">6</span>
<strong>Explanation:
</strong>Subsequences are [1], [2], [3], [2,1], [2,3], [1,3], [2,1,3].
The corresponding widths are 0, 0, 0, 1, 1, 2, 2.
The sum of these widths is 6.
</pre>

<p>&nbsp;</p>

<p><strong>Note:</strong></p>

<ul>
	<li><code>1 &lt;= nums.length &lt;= 20000</code></li>
	<li><code>1 &lt;= nums[i] &lt;= 20000</code></li>
</ul>
</div>
