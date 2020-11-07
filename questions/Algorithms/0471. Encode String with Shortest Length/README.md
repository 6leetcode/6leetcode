### [Encode String with Shortest Length](https://leetcode.com/problems/encode-string-with-shortest-length)

<p>Given a <b>non-empty</b> string, encode the string such that its encoded length is the shortest.</p>

<p>The encoding rule is: <code>k[encoded_string]</code>, where the <code>encoded_string</code> inside the square brackets is being repeated exactly <code>k</code> times.</p>

<p><b>Note:</b></p>

<ol>
	<li><code>k</code> will be a positive integer.</li>
	<li>If an encoding process does not make the string shorter, then do not encode it. If there are several solutions, return <strong>any of them</strong>.</li>
</ol>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>

<pre>
<strong>Input:</strong> s = &quot;aaa&quot;
<strong>Output:</strong> &quot;aaa&quot;
<strong>Explanation:</strong> There is no way to encode it such that it is shorter than the input string, so we do not encode it.
</pre>

<p><strong>Example 2:</strong></p>

<pre>
<strong>Input:</strong> s = &quot;aaaaa&quot;
<strong>Output:</strong> &quot;5[a]&quot;
<strong>Explanation:</strong> &quot;5[a]&quot; is shorter than &quot;aaaaa&quot; by 1 character.
</pre>

<p><strong>Example 3:</strong></p>

<pre>
<strong>Input:</strong> s = &quot;aaaaaaaaaa&quot;
<strong>Output:</strong> &quot;10[a]&quot;
<strong>Explanation:</strong> &quot;a9[a]&quot; or &quot;9[a]a&quot; are also valid solutions, both of them have the same length = 5, which is the same as &quot;10[a]&quot;.
</pre>

<p><strong>Example 4:</strong></p>

<pre>
<strong>Input:</strong> s = &quot;aabcaabcd&quot;
<strong>Output:</strong> &quot;2[aabc]d&quot;
<strong>Explanation:</strong> &quot;aabc&quot; occurs twice, so one answer can be &quot;2[aabc]d&quot;.
</pre>

<p><strong>Example 5:</strong></p>

<pre>
<strong>Input:</strong> s = &quot;abbbabbbcabbbabbbc&quot;
<strong>Output:</strong> &quot;2[2[abbb]c]&quot;
<strong>Explanation:</strong> &quot;abbbabbbc&quot; occurs twice, but &quot;abbbabbbc&quot; can also be encoded to &quot;2[abbb]c&quot;, so one answer can be &quot;2[2[abbb]c]&quot;.
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= s.length &lt;= 150</code></li>
	<li><code>s</code> consists of only lowercase English letters.</li>
</ul>
