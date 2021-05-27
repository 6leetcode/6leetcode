### [Divide Array Into Increasing Sequences](https://leetcode.com/problems/divide-array-into-increasing-sequences)

<p>Given a <strong>non-decreasing</strong> array of positive integers&nbsp;<code>nums</code>&nbsp;and an integer <code>k</code>, find out if this array can be divided into one or more <strong>disjoint increasing subsequences of length at least</strong> <code>k</code>.</p>

<p>&nbsp;</p>

<p><strong>Example 1:</strong></p>

<pre>
<strong>Input: </strong>nums = <span id="example-input-1-1">[1,2,2,3,3,4,4]</span>, k = <span id="example-input-1-2">3</span>
<strong>Output: </strong><span id="example-output-1">true</span>
<strong>Explanation: </strong>
The array can be divided into the two subsequences [1,2,3,4] and [2,3,4] with lengths at least 3 each.
</pre>

<p><strong>Example 2:</strong></p>

<pre>
<strong>Input: </strong>nums = <span id="example-input-2-1">[5,6,6,7,8]</span>, k = <span id="example-input-2-2">3</span>
<strong>Output: </strong><span id="example-output-2">false</span>
<strong>Explanation: </strong>
There is no way to divide the array using the conditions required.
</pre>

<p>&nbsp;</p>

<p><strong>Note:</strong></p>

<ol>
	<li><code>1 &lt;= nums.length&nbsp;&lt;= 10<sup>5</sup></code></li>
	<li><code>1 &lt;= k &lt;= nums.length</code></li>
	<li><code>1 &lt;= nums[i] &lt;= 10<sup>5</sup></code></li>
</ol>
