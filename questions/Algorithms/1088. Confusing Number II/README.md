### [Confusing Number II](https://leetcode.com/problems/confusing-number-ii)

<p>We can rotate digits by 180 degrees to form new digits. When 0, 1, 6, 8, 9 are rotated 180 degrees, they become 0, 1, 9, 8, 6 respectively. When 2, 3, 4, 5 and 7 are rotated 180 degrees, they become invalid.</p>

<p>A <em>confusing number</em> is a number that when rotated 180 degrees becomes a <strong>different</strong> number with each digit valid.(Note that the rotated number can be greater than the original number.)</p>

<p>Given a positive integer <code>n</code>, return the number of confusing numbers between <code>1</code> and <code>n</code>&nbsp;inclusive.</p>

<p>&nbsp;</p>

<p><strong>Example 1:</strong></p>

<pre>
<strong>Input: </strong>n = <span id="example-input-1-1">20</span>
<strong>Output: </strong><span id="example-output-1">6</span>
<strong>Explanation: </strong>
The confusing numbers are [6,9,10,16,18,19].
6 converts to 9.
9 converts to 6.
10 converts to 01 which is just 1.
16 converts to 91.
18 converts to 81.
19 converts to 61.
</pre>

<p><strong>Example 2:</strong></p>

<pre>
<strong>Input: </strong>n = <span id="example-input-2-1">100</span>
<strong>Output: </strong><span id="example-output-2">19</span>
<strong>Explanation: </strong>
The confusing numbers are [6,9,10,16,18,19,60,61,66,68,80,81,86,89,90,91,98,99,100].
</pre>

<p>&nbsp;</p>

<p><strong>Note:</strong></p>

<ol>
	<li><code>1 &lt;= n &lt;= 10<sup>9</sup></code></li>
</ol>
