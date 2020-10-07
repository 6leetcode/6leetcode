### [Count and Say](https://leetcode.com/problems/count-and-say)

<p>The count-and-say sequence is the sequence of integers with the first five terms as following:</p>

<pre>
1.     1
2.     11
3.     21
4.     1211
5.     111221
</pre>

<p><code>1</code> is read off as <code>&quot;one 1&quot;</code> or <code>11</code>.<br />
<code>11</code> is read off as <code>&quot;two 1s&quot;</code> or <code>21</code>.<br />
<code>21</code> is read off as <code>&quot;one 2</code>, then <code>one 1&quot;</code> or <code>1211</code>.</p>

<p>Given an integer <code>n</code>, generate the <code>n<sup>th</sup></code> term of the count-and-say sequence. You can do so recursively, in other words from the previous member&nbsp;read off the digits, counting the number of digits in groups of the same digit.</p>

<p>Note: Each term of the sequence of integers will be represented as a string.</p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>

<pre>
<strong>Input:</strong> n = 1
<strong>Output:</strong> &quot;1&quot;
<strong>Explanation:</strong> This is the base case.
</pre>

<p><strong>Example 2:</strong></p>

<pre>
<strong>Input:</strong> n = 4
<strong>Output:</strong> &quot;1211&quot;
<strong>Explanation:</strong> For n = 3 the term was &quot;21&quot; in which we have two groups &quot;2&quot; and &quot;1&quot;, &quot;2&quot; can be read as &quot;12&quot; which means frequency = 1 and value = 2, the same way &quot;1&quot; is read as &quot;11&quot;, so the answer is the concatenation of &quot;12&quot; and &quot;11&quot; which is &quot;1211&quot;.
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= n &lt;= 30</code></li>
</ul>
