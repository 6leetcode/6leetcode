### [Largest Integer With Given Digit Sum](https://leetcode.com/problems/largest-integer-with-given-digit-sum)

<p>You are given two non-negative integers <code>n</code> and <code>s</code>.</p>

<p>Return the <strong>largest</strong> integer that has <strong>at most</strong> <code>n</code> digits and whose sum of digits is <code>s</code>. If no such integer exists, return -1.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<div class="example-block">
<p><strong>Input:</strong> <span class="example-io">n = 2, s = 9</span></p>

<p><strong>Output:</strong> <span class="example-io">90</span></p>

<p><strong>Explanation:</strong></p>

<p>The largest integer with at most 2 digits that has a sum of digits of 9 is 90.</p>
</div>

<p><strong class="example">Example 2:</strong></p>

<div class="example-block">
<p><strong>Input:</strong> <span class="example-io">n = 2, s = 19</span></p>

<p><strong>Output:</strong> <span class="example-io">-1</span></p>

<p><strong>Explanation:</strong></p>

<p>There is no integer with at most 2 digits that has a sum of digits of 19, so the answer is -1.</p>
</div>

<p><strong class="example">Example 3:</strong></p>

<div class="example-block">
<p><strong>Input:</strong> <span class="example-io">n = 5, s = 0</span></p>

<p><strong>Output:</strong> <span class="example-io">0</span></p>

<p><strong>Explanation:</strong></p>

<p>The only non-negative integer whose digits sum to 0 is 0.</p>
</div>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= n &lt;= 5</code></li>
	<li><code>0 &lt;= s &lt;= 100</code></li>
</ul>
