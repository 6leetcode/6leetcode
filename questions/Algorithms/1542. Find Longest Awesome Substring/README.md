### [Find Longest Awesome Substring](https://leetcode.com/problems/find-longest-awesome-substring)

<p>Given a string <code>s</code>. An <em>awesome</em> substring is a non-empty substring of <code>s</code> such that we can make any number of swaps in order to make it palindrome.</p>

<p>Return the length of the maximum length <strong>awesome substring</strong> of <code>s</code>.</p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>

<pre>
<strong>Input:</strong> s = &quot;3242415&quot;
<strong>Output:</strong> 5
<strong>Explanation:</strong> &quot;24241&quot; is the longest awesome substring, we can form the palindrome &quot;24142&quot; with some swaps.
</pre>

<p><strong>Example 2:</strong></p>

<pre>
<strong>Input:</strong> s = &quot;12345678&quot;
<strong>Output:</strong> 1
</pre>

<p><strong>Example 3:</strong></p>

<pre>
<strong>Input:</strong> s = &quot;213123&quot;
<strong>Output:</strong> 6
<strong>Explanation:</strong> &quot;213123&quot; is the longest awesome substring, we can form the palindrome &quot;231132&quot; with some swaps.
</pre>

<p><strong>Example 4:</strong></p>

<pre>
<strong>Input:</strong> s = &quot;00&quot;
<strong>Output:</strong> 2
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= s.length &lt;= 10<sup>5</sup></code></li>
	<li><code>s</code> consists only of digits.</li>
</ul>
