### [Buddy Strings](https://leetcode.com/problems/buddy-strings)

<p>Given two strings <code>A</code> and <code>B</code> of lowercase letters, return <code>true</code><em> if you can swap two letters in </em><code>A</code><em> so the result is equal to </em><code>B</code><em>, otherwise, return </em><code>false</code><em>.</em></p>

<p>Swapping letters is defined as taking two indices <code>i</code> and <code>j</code> (0-indexed) such that <code>i != j</code> and swapping the characters at <code>A[i]</code> and <code>A[j]</code>. For example, swapping at indices <code>0</code> and <code>2</code> in <code>&quot;abcd&quot;</code> results in <code>&quot;cbad&quot;</code>.</p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>

<pre>
<strong>Input:</strong> A = &quot;ab&quot;, B = &quot;ba&quot;
<strong>Output:</strong> true
<strong>Explanation</strong><strong>:</strong> You can swap A[0] = &#39;a&#39; and A[1] = &#39;b&#39; to get &quot;ba&quot;, which is equal to B.
</pre>

<p><strong>Example 2:</strong></p>

<pre>
<strong>Input:</strong> A = &quot;ab&quot;, B = &quot;ab&quot;
<strong>Output:</strong> false
<strong>Explanation</strong><strong>:</strong> The only letters you can swap are A[0] = &#39;a&#39; and A[1] = &#39;b&#39;, which results in &quot;ba&quot; != B.
</pre>

<p><strong>Example 3:</strong></p>

<pre>
<strong>Input:</strong> A = &quot;aa&quot;, B = &quot;aa&quot;
<strong>Output:</strong> true
<strong>Explanation</strong><strong>:</strong> You can swap A[0] = &#39;a&#39; and A[1] = &#39;a&#39; to get &quot;aa&quot;, which is equal to B.
</pre>

<p><strong>Example 4:</strong></p>

<pre>
<strong>Input:</strong> A = &quot;aaaaaaabc&quot;, B = &quot;aaaaaaacb&quot;
<strong>Output:</strong> true
</pre>

<p><strong>Example 5:</strong></p>

<pre>
<strong>Input:</strong> A = &quot;&quot;, B = &quot;aa&quot;
<strong>Output:</strong> false
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>0 &lt;= A.length &lt;= 20000</code></li>
	<li><code>0 &lt;= B.length &lt;= 20000</code></li>
	<li><code>A</code> and <code>B</code> consist of lowercase letters.</li>
</ul>
