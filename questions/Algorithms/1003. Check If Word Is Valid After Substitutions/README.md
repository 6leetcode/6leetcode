### [Check If Word Is Valid After Substitutions](https://leetcode.com/problems/check-if-word-is-valid-after-substitutions)

<p>We can say that a string is valid if it follows one of the three following cases:</p>

<ul>
	<li>An empty string <code>&quot;&quot;</code> is valid.</li>
	<li>The string <code>&quot;abc&quot;</code> is also valid.</li>
	<li>Any string in the form <code>&quot;a&quot; + str + &quot;bc&quot;</code>, <code>&quot;ab&quot; + str + &quot;c&quot;</code>, <code>str + &quot;abc&quot;</code> or <code>&quot;abc&quot; + str</code> where <code>str</code> is a valid string is also considered a valid string.</li>
</ul>

<p>For example, <code>&quot;&quot;</code>, <code>&quot;abc&quot;</code>,&nbsp;<code>&quot;aabcbc&quot;</code>,&nbsp;<code>&quot;abcabc&quot;</code> and&nbsp;<code>&quot;abcabcababcc&quot;</code>&nbsp;are all <strong>valid</strong> strings, while&nbsp;<code>&quot;abccba&quot;</code>,&nbsp;<code>&quot;ab&quot;</code>, <code>&quot;cababc&quot;</code> and&nbsp;<code>&quot;bac&quot;</code>&nbsp;are <strong>not valid</strong> strings.</p>

<p>Given a string <code>s</code>, return <code>true</code> if it is a valid string, otherwise, return <code>false</code>.</p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>

<pre>
<strong>Input:</strong> s = &quot;aabcbc&quot;
<strong>Output:</strong> true
<strong>Explanation: </strong>
We start with the valid string &quot;abc&quot;.
Then we can insert another &quot;abc&quot; between &quot;a&quot; and &quot;bc&quot;, resulting in &quot;a&quot; + &quot;abc&quot; + &quot;bc&quot; which is &quot;aabcbc&quot;.
</pre>

<p><strong>Example 2:</strong></p>

<pre>
<strong>Input:</strong> s = &quot;abcabcababcc&quot;
<strong>Output:</strong> true
<strong>Explanation: </strong>
&quot;abcabcabc&quot; is valid after consecutive insertings of &quot;abc&quot;.
Then we can insert &quot;abc&quot; before the last letter, resulting in &quot;abcabcab&quot; + &quot;abc&quot; + &quot;c&quot; which is &quot;abcabcababcc&quot;.
</pre>

<p><strong>Example 3:</strong></p>

<pre>
<strong>Input:</strong> s = &quot;abccba&quot;
<strong>Output:</strong> false
</pre>

<p><strong>Example 4:</strong></p>

<pre>
<strong>Input:</strong> s = &quot;cababc&quot;
<strong>Output:</strong> false
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= s.length &lt;= 2 * 10<sup>4</sup></code></li>
	<li><code>s[i]</code> is <code>&#39;a&#39;</code>, <code>&#39;b&#39;</code>, or <code>&#39;c&#39;</code></li>
</ul>
