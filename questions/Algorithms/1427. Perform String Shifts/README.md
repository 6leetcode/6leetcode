### [Perform String Shifts](https://leetcode.com/problems/perform-string-shifts)

<p>You are given a string <code>s</code>&nbsp;containing lowercase English letters, and a matrix&nbsp;<code>shift</code>, where&nbsp;<code>shift[i] = [direction, amount]</code>:</p>

<ul>
	<li><code>direction</code>&nbsp;can be <code>0</code>&nbsp;(for left shift) or <code>1</code>&nbsp;(for right shift).&nbsp;</li>
	<li><code>amount</code>&nbsp;is the amount by which string&nbsp;<code>s</code>&nbsp;is to be shifted.</li>
	<li>A left shift by 1 means remove the first character of <code>s</code> and append it to the end.</li>
	<li>Similarly, a right shift by 1 means remove the last character of <code>s</code> and add it to the beginning.</li>
</ul>

<p>Return the final string after all operations.</p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>

<pre>
<strong>Input:</strong> s = &quot;abc&quot;, shift = [[0,1],[1,2]]
<strong>Output:</strong> &quot;cab&quot;
<strong>Explanation:</strong>&nbsp;
[0,1] means shift to left by 1. &quot;abc&quot; -&gt; &quot;bca&quot;
[1,2] means shift to right by 2. &quot;bca&quot; -&gt; &quot;cab&quot;</pre>

<p><strong>Example 2:</strong></p>

<pre>
<strong>Input:</strong> s = &quot;abcdefg&quot;, shift = [[1,1],[1,1],[0,2],[1,3]]
<strong>Output:</strong> &quot;efgabcd&quot;
<strong>Explanation:</strong>&nbsp; 
[1,1] means shift to right by 1. &quot;abcdefg&quot; -&gt; &quot;gabcdef&quot;
[1,1] means shift to right by 1. &quot;gabcdef&quot; -&gt; &quot;fgabcde&quot;
[0,2] means shift to left by 2. &quot;fgabcde&quot; -&gt; &quot;abcdefg&quot;
[1,3] means shift to right by 3. &quot;abcdefg&quot; -&gt; &quot;efgabcd&quot;</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= s.length &lt;= 100</code></li>
	<li><code>s</code> only contains lower case English letters.</li>
	<li><code>1 &lt;= shift.length &lt;= 100</code></li>
	<li><code>shift[i].length == 2</code></li>
	<li><code>0 &lt;= shift[i][0] &lt;= 1</code></li>
	<li><code>0 &lt;= shift[i][1] &lt;= 100</code></li>
</ul>