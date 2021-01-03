### [Decode Ways](https://leetcode.com/problems/decode-ways)

<p>A message containing letters from <code>A-Z</code> can be <strong>encoded</strong> into numbers using the following mapping:</p>

<pre>
&#39;A&#39; -&gt; &quot;1&quot;
&#39;B&#39; -&gt; &quot;2&quot;
...
&#39;Z&#39; -&gt; &quot;26&quot;
</pre>

<p>To <strong>decode</strong> an encoded message, all the digits must be mapped back into letters using the reverse of the mapping above (there may be multiple ways). For example, <code>&quot;111&quot;</code> can have each of its <code>&quot;1&quot;</code>s be mapped into <code>&#39;A&#39;</code>s to make <code>&quot;AAA&quot;</code>, or it could be mapped to <code>&quot;11&quot;</code> and <code>&quot;1&quot;</code> (<code>&#39;K&#39;</code> and <code>&#39;A&#39;</code> respectively) to make <code>&quot;KA&quot;</code>. Note that <code>&quot;06&quot;</code> cannot be mapped into <code>&#39;F&#39;</code> since <code>&quot;6&quot;</code> is different from <code>&quot;06&quot;</code>.</p>

<p>Given a <strong>non-empty</strong> string <code>num</code> containing only digits, return <em>the <strong>number</strong> of ways to <strong>decode</strong> it</em>.</p>

<p>The answer is guaranteed to fit in a <strong>32-bit</strong> integer.</p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>

<pre>
<strong>Input:</strong> s = &quot;12&quot;
<strong>Output:</strong> 2
<strong>Explanation:</strong> &quot;12&quot; could be decoded as &quot;AB&quot; (1 2) or &quot;L&quot; (12).
</pre>

<p><strong>Example 2:</strong></p>

<pre>
<strong>Input:</strong> s = &quot;226&quot;
<strong>Output:</strong> 3
<strong>Explanation:</strong> &quot;226&quot; could be decoded as &quot;BZ&quot; (2 26), &quot;VF&quot; (22 6), or &quot;BBF&quot; (2 2 6).
</pre>

<p><strong>Example 3:</strong></p>

<pre>
<strong>Input:</strong> s = &quot;0&quot;
<strong>Output:</strong> 0
<strong>Explanation:</strong> There is no character that is mapped to a number starting with 0. The only valid mappings with 0 are &#39;J&#39; -&gt; &quot;10&quot; and &#39;T&#39; -&gt; &quot;20&quot;.
Since there is no character, there are no valid ways to decode this since all digits need to be mapped.
</pre>

<p><strong>Example 4:</strong></p>

<pre>
<strong>Input:</strong> s = &quot;1&quot;
<strong>Output:</strong> 1
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= s.length &lt;= 100</code></li>
	<li><code>s</code> contains only digits and may contain leading zero(s).</li>
</ul>
