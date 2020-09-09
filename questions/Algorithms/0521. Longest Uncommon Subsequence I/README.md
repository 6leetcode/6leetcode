### [Longest Uncommon Subsequence I](https://leetcode.com/problems/longest-uncommon-subsequence-i)

<p>Given two strings, you need to find the longest uncommon subsequence&nbsp;of this two strings. The longest uncommon subsequence is defined as the longest subsequence of one of these strings and this subsequence should not be <b>any</b> subsequence of the other string.</p>

<p>A <b>subsequence</b> is a sequence that can be derived from one sequence by deleting some characters without changing the order of the remaining elements. Trivially, any string is a subsequence of itself and an empty string is a subsequence of any string.</p>

<p>The input will be two strings, and the output needs to be the length of the longest uncommon subsequence. If the longest uncommon subsequence doesn&#39;t exist, return -1.</p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>

<pre>
<strong>Input:</strong> a = &quot;aba&quot;, b = &quot;cdc&quot;
<strong>Output:</strong> 3
<strong>Explanation:</strong> The longest uncommon subsequence is &quot;aba&quot;, 
because &quot;aba&quot; is a subsequence of &quot;aba&quot;, 
but not a subsequence of the other string &quot;cdc&quot;.
Note that &quot;cdc&quot; can be also a longest uncommon subsequence.
</pre>

<p><strong>Example 2:</strong></p>

<pre>
<strong>Input:</strong> a = &quot;aaa&quot;, b = &quot;bbb&quot;
<strong>Output:</strong> 3
</pre>

<p><strong>Example 3:</strong></p>

<pre>
<strong>Input:</strong> a = &quot;aaa&quot;, b = &quot;aaa&quot;
<strong>Output:</strong> -1
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= a.length, b.length &lt;= 100</code></li>
	<li><code>a</code> and <code>b</code> consist of lower-case English letters.</li>
</ul>
