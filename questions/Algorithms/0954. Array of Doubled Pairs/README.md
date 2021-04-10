### [Array of Doubled Pairs](https://leetcode.com/problems/array-of-doubled-pairs)

<p>Given an array of integers <code>A</code>&nbsp;with even length, return <code>true</code> if and only if it is possible to reorder it such that <code>A[2 * i + 1] = 2 * A[2 * i]</code> for every <code>0 &lt;=&nbsp;i &lt; len(A) / 2</code>.</p>

<div>
<div>
<div>
<ol>
</ol>
</div>
</div>
</div>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>

<pre>
<strong>Input:</strong> A = [3,1,3,6]
<strong>Output:</strong> false
</pre>

<p><strong>Example 2:</strong></p>

<pre>
<strong>Input:</strong> A = [2,1,2,6]
<strong>Output:</strong> false
</pre>

<p><strong>Example 3:</strong></p>

<pre>
<strong>Input:</strong> A = [4,-2,2,-4]
<strong>Output:</strong> true
<strong>Explanation:</strong> We can take two groups, [-2,-4] and [2,4] to form [-2,-4,2,4] or [2,4,-2,-4].
</pre>

<p><strong>Example 4:</strong></p>

<pre>
<strong>Input:</strong> A = [1,2,4,16,8,4]
<strong>Output:</strong> false
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>0 &lt;= A.length &lt;= 3 *&nbsp;10<sup>4</sup></code></li>
	<li><code>A.length</code> is even.</li>
	<li><code>-10<sup>5</sup> &lt;= A[i] &lt;= 10<sup>5</sup></code></li>
</ul>
