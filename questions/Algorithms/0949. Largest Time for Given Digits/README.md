### [Largest Time for Given Digits](https://leetcode.com/problems/largest-time-for-given-digits)

<p>Given an array of 4 digits, return the largest 24 hour time that can be made.</p>

<p>The smallest 24 hour time is 00:00, and the largest is 23:59.&nbsp; Starting from 00:00, a time is larger if more time has elapsed since midnight.</p>

<p>Return the answer as a string of length 5.&nbsp; If no valid time can be made, return an empty string.</p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>
<pre><strong>Input:</strong> A = [1,2,3,4]
<strong>Output:</strong> "23:41"
</pre><p><strong>Example 2:</strong></p>
<pre><strong>Input:</strong> A = [5,5,5,5]
<strong>Output:</strong> ""
</pre><p><strong>Example 3:</strong></p>
<pre><strong>Input:</strong> A = [0,0,0,0]
<strong>Output:</strong> "00:00"
</pre><p><strong>Example 4:</strong></p>
<pre><strong>Input:</strong> A = [0,0,1,0]
<strong>Output:</strong> "10:00"
</pre>
<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>arr.length == 4</code></li>
	<li><code>0 &lt;= arr[i] &lt;= 9</code></li>
</ul>
