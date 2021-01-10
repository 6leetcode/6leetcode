### [Gray Code](https://leetcode.com/problems/gray-code)

<p>The gray code is a binary numeral system where two successive values differ in <strong>only one bit</strong>.</p>

<p>Given an integer <code>n</code> representing the total number of bits in the code, return <em><strong>any</strong> sequence of gray code</em>.</p>

<p>A gray code sequence must begin with <code>0</code>.</p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>

<pre>
<strong>Input:</strong> n = 2
<strong>Output:</strong> [0,1,3,2]
<strong>Explanation:</strong>
00 - 0
0<u>1</u> - 1
<u>1</u>1 - 3
1<u>0</u> - 2
[0,2,3,1] is also a valid gray code sequence.
00 - 0
<u>1</u>0 - 2
1<u>1</u> - 3
<u>0</u>1 - 1
</pre>

<p><strong>Example 2:</strong></p>

<pre>
<strong>Input:</strong> n = 1
<strong>Output:</strong> [0,1]
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>0 &lt;= n &lt;= 15</code></li>
</ul>
