### [Delete Columns to Make Sorted](https://leetcode.com/problems/delete-columns-to-make-sorted)

<p>You are given an array of <code>n</code> strings <code>strs</code>, all of the same length.</p>

<p>We may choose any deletion indices, and we delete all the characters in those indices for each string.</p>

<p>For example, if we have <code>strs = [&quot;abcdef&quot;,&quot;uvwxyz&quot;]</code> and deletion indices <code>{0, 2, 3}</code>, then the final array after deletions is <code>[&quot;bef&quot;, &quot;vyz&quot;]</code>, and the remaining columns of <code>strs</code> are <code>[&quot;b&quot;,&quot;v&quot;]</code>, <code>[&quot;e&quot;,&quot;y&quot;]</code>, and <code>[&quot;f&quot;,&quot;z&quot;]</code>. (Formally, the <code>c<sup>th</sup></code> column is <code>[strs[0][c], strs[1][c], ..., strs[n - 1][c]]</code>).</p>

<p>Suppose we chose a set of deletion indices <code>answer</code> such that after deletions, each remaining column in <code>strs</code> is in <strong>non-decreasing sorted order</strong>. Return <em>the minimum possible value of</em> <code>answer.length</code>.</p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>

<pre>
<strong>Input:</strong> strs = [&quot;cba&quot;,&quot;daf&quot;,&quot;ghi&quot;]
<strong>Output:</strong> 1
<strong>Explanation:</strong>
After choosing answer = {1}, each column [&quot;c&quot;,&quot;d&quot;,&quot;g&quot;] and [&quot;a&quot;,&quot;f&quot;,&quot;i&quot;] are in non-decreasing sorted order.
If we chose answer = {}, then a column [&quot;b&quot;,&quot;a&quot;,&quot;h&quot;] would not be in non-decreasing sorted order.
</pre>

<p><strong>Example 2:</strong></p>

<pre>
<strong>Input:</strong> strs = [&quot;a&quot;,&quot;b&quot;]
<strong>Output:</strong> 0
<strong>Explanation:</strong> answer = {}
</pre>

<p><strong>Example 3:</strong></p>

<pre>
<strong>Input:</strong> strs = [&quot;zyx&quot;,&quot;wvu&quot;,&quot;tsr&quot;]
<strong>Output:</strong> 3
<strong>Explanation:</strong> answer = {0, 1, 2}
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>n == strs.length</code></li>
	<li><code>1 &lt;= n &lt;= 100</code></li>
	<li><code>1 &lt;= strs[i].length &lt;= 1000</code></li>
	<li><code>strs[i]</code> consists of lowercase English letters.</li>
</ul>
