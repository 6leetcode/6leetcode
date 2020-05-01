### [Check If a Number Is Majority Element in a Sorted Array](https://leetcode.com/problems/check-if-a-number-is-majority-element-in-a-sorted-array)

<p>Given an array <code>nums</code> sorted in <strong>non-decreasing</strong> order, and a number <code>target</code>, return <code>True</code> if and only if <code>target</code> is a majority element.</p>

<p>A <em>majority element</em> is an element that appears <strong>more than <code>N/2</code></strong> times in an array of length <code>N</code>.</p>

<p>&nbsp;</p>

<p><strong>Example 1:</strong></p>

<pre>
<strong>Input: </strong>nums = <span id="example-input-1-1">[2,4,5,5,5,5,5,6,6]</span>, target = <span id="example-input-1-2">5</span>
<strong>Output: </strong><span id="example-output-1">true</span>
<strong>Explanation: </strong>
The value 5 appears 5 times and the length of the array is 9.
Thus, 5 is a majority element because 5 &gt; 9/2 is true.
</pre>

<p><strong>Example 2:</strong></p>

<pre>
<strong>Input: </strong>nums = <span id="example-input-2-1">[10,100,101,101]</span>, target = <span id="example-input-2-2">101</span>
<strong>Output: </strong><span id="example-output-2">false</span>
<strong>Explanation: </strong>
The value 101 appears 2 times and the length of the array is 4.
Thus, 101 is not a majority element because 2 &gt; 4/2 is false.
</pre>

<p>&nbsp;</p>

<p><span><strong>Note:</strong></span></p>

<ol>
	<li><code>1 &lt;= nums.length &lt;= 1000</code></li>
	<li><code>1 &lt;= nums[i] &lt;= 10^9</code></li>
	<li><code>1 &lt;= target &lt;= 10^9</code></li>
</ol>
