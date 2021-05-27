### [Triples with Bitwise AND Equal To Zero](https://leetcode.com/problems/triples-with-bitwise-and-equal-to-zero)

<p>Given an array of integers <code>nums</code>, find the number of&nbsp;triples of indices (i, j, k)&nbsp;such that:</p>

<ul>
	<li><code>0 &lt;= i &lt; nums.length</code></li>
	<li><code>0 &lt;= j &lt; nums.length</code></li>
	<li><code>0 &lt;= k &lt; nums.length</code></li>
	<li><code>nums[i]&nbsp;&amp; nums[j]&nbsp;&amp; nums[k] == 0</code>, where <code>&amp;</code>&nbsp;represents the bitwise-AND operator.</li>
</ul>

<p>&nbsp;</p>

<p><strong>Example 1:</strong></p>

<pre>
<strong>Input: </strong>nums = <span id="example-input-1-1">[2,1,3]</span>
<strong>Output: </strong><span id="example-output-1">12</span>
<strong>Explanation: </strong>We could choose the following i, j, k triples:
(i=0, j=0, k=1) : 2 &amp; 2 &amp; 1
(i=0, j=1, k=0) : 2 &amp; 1 &amp; 2
(i=0, j=1, k=1) : 2 &amp; 1 &amp; 1
(i=0, j=1, k=2) : 2 &amp; 1 &amp; 3
(i=0, j=2, k=1) : 2 &amp; 3 &amp; 1
(i=1, j=0, k=0) : 1 &amp; 2 &amp; 2
(i=1, j=0, k=1) : 1 &amp; 2 &amp; 1
(i=1, j=0, k=2) : 1 &amp; 2 &amp; 3
(i=1, j=1, k=0) : 1 &amp; 1 &amp; 2
(i=1, j=2, k=0) : 1 &amp; 3 &amp; 2
(i=2, j=0, k=1) : 3 &amp; 2 &amp; 1
(i=2, j=1, k=0) : 3 &amp; 1 &amp; 2
</pre>

<p>&nbsp;</p>

<p><strong>Note:</strong></p>

<ol>
	<li><code><font face="monospace">1 &lt;= nums.length &lt;= 1000</font></code></li>
	<li><code>0 &lt;= nums[i] &lt; 2<sup>16</sup></code></li>
</ol>
