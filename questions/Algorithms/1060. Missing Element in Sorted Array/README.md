### [Missing Element in Sorted Array](https://leetcode.com/problems/missing-element-in-sorted-array)

<p>Given a sorted array <code>A</code> of <strong>unique</strong> numbers, find the <code><em>K</em>-th</code> missing number starting from the leftmost number of the array.</p>

<p>&nbsp;</p>

<p><strong>Example 1:</strong></p>

<pre>
<strong>Input: </strong>A = <span id="example-input-1-1">[4,7,9,10]</span>, K = 1
<strong>Output: </strong><span id="example-output-1">5</span>
<strong>Explanation: </strong>
The first missing number is 5.
</pre>

<p><strong>Example 2:</strong></p>

<pre>
<strong>Input: </strong>A = <span id="example-input-2-1">[4,7,9,10]</span>, K = 3
<strong>Output: </strong><span id="example-output-2">8</span>
<strong>Explanation: </strong>
The missing numbers are [5,6,8,...], hence the third missing number is 8.
</pre>

<p><strong>Example 3:</strong></p>

<pre>
<strong>Input: </strong>A = <span id="example-input-3-1">[1,2,4]</span>, K = 3
<strong>Output: </strong><span id="example-output-3">6</span>
<strong>Explanation: </strong>
The missing numbers are [3,5,6,7,...], hence the third missing number is 6.
</pre>

<p>&nbsp;</p>

<p><strong>Note:</strong></p>

<ol>
	<li><code>1 &lt;= A.length &lt;= 50000</code></li>
	<li><code>1 &lt;= A[i] &lt;= 1e7</code></li>
	<li><code>1 &lt;= K &lt;= 1e8</code></li>
</ol>