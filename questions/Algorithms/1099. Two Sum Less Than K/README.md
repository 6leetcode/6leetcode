### [Two Sum Less Than K](https://leetcode.com/problems/two-sum-less-than-k)

<p>Given an array <code>A</code> of integers and&nbsp;integer <code>K</code>, return the maximum <code>S</code> such that there exists <code>i &lt; j</code> with <code>A[i] + A[j] = S</code> and <code>S &lt; K</code>. If no <code>i, j</code> exist satisfying this equation, return -1.</p>

<p>&nbsp;</p>

<p><strong>Example 1:</strong></p>

<pre>
<strong>Input: </strong>A = <span id="example-input-1-1">[34,23,1,24,75,33,54,8]</span>, K = <span id="example-input-1-2">60</span>
<strong>Output: </strong><span id="example-output-1">58</span>
<strong>Explanation: </strong>
We can use 34 and 24 to sum 58 which is less than 60.
</pre>

<p><strong>Example 2:</strong></p>

<pre>
<strong>Input: </strong>A = <span id="example-input-2-1">[10,20,30]</span>, K = <span id="example-input-2-2">15</span>
<strong>Output: </strong><span id="example-output-2">-1</span>
<strong>Explanation: </strong>
In this case it&#39;s not possible to get a pair sum less that 15.
</pre>

<p>&nbsp;</p>

<p><strong>Note:</strong></p>

<ol>
	<li><code>1 &lt;= A.length &lt;= 100</code></li>
	<li><code>1 &lt;= A[i] &lt;= 1000</code></li>
	<li><code>1 &lt;= K &lt;= 2000</code></li>
</ol>
