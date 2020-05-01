### [String Transforms Into Another String](https://leetcode.com/problems/string-transforms-into-another-string)

<p>Given two strings <code>str1</code> and <code>str2</code>&nbsp;of the same length, determine whether you can transform <code>str1</code>&nbsp;into <code>str2</code> by doing <strong>zero or more</strong>&nbsp;<em>conversions</em>.</p>

<p>In one conversion you can convert&nbsp;<strong>all</strong> occurrences of one character in <code>str1</code> to&nbsp;<strong>any</strong> other lowercase English character.</p>

<p>Return <code>true</code>&nbsp;if and only if you can transform <code>str1</code> into <code>str2</code>.</p>

<p>&nbsp;</p>

<p><strong>Example 1:</strong></p>

<pre>
<strong>Input: </strong>str1 = <span id="example-input-1-1">&quot;aabcc&quot;</span>, str2 = <span id="example-input-1-2">&quot;ccdee&quot;</span>
<strong>Output: </strong><span id="example-output-1">true</span>
<strong>Explanation: </strong>Convert &#39;c&#39; to &#39;e&#39; then &#39;b&#39; to &#39;d&#39; then &#39;a&#39; to &#39;c&#39;. Note that the order of conversions matter.
</pre>

<p><strong>Example 2:</strong></p>

<pre>
<strong>Input: </strong>str1 = <span id="example-input-2-1">&quot;leetcode&quot;</span>, str2 = <span id="example-input-2-2">&quot;codeleet&quot;</span>
<strong>Output: </strong><span id="example-output-2">false</span>
<strong>Explanation: </strong>There is no way to transform str1 to str2.
</pre>

<p>&nbsp;</p>

<p><strong>Note:</strong></p>

<ol>
	<li><code>1 &lt;= str1.length == str2.length &lt;= 10^4</code></li>
	<li>Both <code>str1</code> and <code>str2</code> contain only lowercase English letters.</li>
</ol>
