### [Sum of Digits in the Minimum Number](https://leetcode.com/problems/sum-of-digits-in-the-minimum-number)

<p>Given an array <code>nums</code> of positive integers, let <code>minDigitSum</code> be the sum of the digits of the minimal element of <code>nums</code>.</p>

<p>Return 0 if <code>minDigitSum</code> is odd, otherwise return 1.</p>

<p>&nbsp;</p>

<p><strong>Example 1:</strong></p>

<pre>
<strong>Input: </strong>nums = <span id="example-input-1-1">[34,23,1,24,75,33,54,8]</span>
<strong>Output: </strong><span id="example-output-1">0</span>
<strong>Explanation: </strong>
The minimal element is 1, and the sum of those digits is minDigitSum = 1 which is odd, so the answer is 0.
</pre>

<p><strong>Example 2:</strong></p>

<pre>
<strong>Input: </strong>nums = <span id="example-input-2-1">[99,77,33,66,55]</span>
<strong>Output: </strong><span id="example-output-2">1</span>
<strong>Explanation: </strong>
The minimal element is 33, and the sum of those digits is minDigitSum = 3 + 3 = 6 which is even, so the answer is 1.
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= nums.length &lt;= 100</code></li>
	<li><code>1 &lt;= nums[i] &lt;= 100</code></li>
</ul>
