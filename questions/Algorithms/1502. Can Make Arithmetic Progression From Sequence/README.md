### [Can Make Arithmetic Progression From Sequence](https://leetcode.com/problems/can-make-arithmetic-progression-from-sequence)

<p>Given an array of numbers <code>arr</code>.&nbsp;A sequence of numbers is called an arithmetic progression&nbsp;if the difference between any two consecutive elements is the same.</p>

<p>Return <code>true</code>&nbsp;if the array can be rearranged to form an arithmetic progression, otherwise, return <code>false</code>.</p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>

<pre>
<strong>Input:</strong> arr = [3,5,1]
<strong>Output:</strong> true
<strong>Explanation: </strong>We can reorder the elements as [1,3,5] or [5,3,1] with differences 2 and -2 respectively, between each consecutive elements.
</pre>

<p><strong>Example 2:</strong></p>

<pre>
<strong>Input:</strong> arr = [1,2,4]
<strong>Output:</strong> false
<strong>Explanation: </strong>There is no way to reorder the elements to obtain an arithmetic progression.
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>2 &lt;= arr.length &lt;= 1000</code></li>
	<li><code>-10^6 &lt;= arr[i] &lt;= 10^6</code></li>
</ul>
