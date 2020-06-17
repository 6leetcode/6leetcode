### [Sum of Digits in the Minimum Number](https://leetcode.com/problems/sum-of-digits-in-the-minimum-number)

<p>Given an array <code>A</code> of positive integers, let <code>S</code> be the sum of the digits of the minimal element of <code>A</code>.</p>

<p>Return 0 if <code>S</code> is odd, otherwise return 1.</p>

<p>&nbsp;</p>

<p><strong>Example 1:</strong></p>

<pre>
<strong>Input: </strong><span id="example-input-1-1">[34,23,1,24,75,33,54,8]</span>
<strong>Output: </strong><span id="example-output-1">0</span>
<strong>Explanation: </strong>
The minimal element is 1, and the sum of those digits is S = 1 which is odd, so the answer is 0.
</pre>

<p><strong>Example 2:</strong></p>

<pre>
<strong>Input: </strong><span id="example-input-2-1">[99,77,33,66,55]</span>
<strong>Output: </strong><span id="example-output-2">1</span>
<strong>Explanation: </strong>
The minimal element is 33, and the sum of those digits is S = 3 + 3 = 6 which is even, so the answer is 1.
</pre>

<p>&nbsp;</p>

<p><strong>Note:</strong></p>

<ol>
	<li><code>1 &lt;= A.length &lt;= 100</code></li>
	<li><code>1 &lt;= A[i].length &lt;= 100</code></li>
</ol>