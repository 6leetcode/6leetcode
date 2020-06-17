### [Swap For Longest Repeated Character Substring](https://leetcode.com/problems/swap-for-longest-repeated-character-substring)

<p>Given a string <code>text</code>, we are allowed to swap two of the characters in the string. Find the length of the longest substring with repeated characters.</p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>

<pre>
<strong>Input:</strong> text = &quot;ababa&quot;
<strong>Output:</strong> 3
<strong>Explanation:</strong> We can swap the first &#39;b&#39; with the last &#39;a&#39;, or the last &#39;b&#39; with the first &#39;a&#39;. Then, the longest repeated character substring is &quot;aaa&quot;, which its length is 3.
</pre>

<p><strong>Example 2:</strong></p>

<pre>
<strong>Input:</strong> text = &quot;aaabaaa&quot;
<strong>Output:</strong> 6
<strong>Explanation:</strong> Swap &#39;b&#39; with the last &#39;a&#39; (or the first &#39;a&#39;), and we get longest repeated character substring &quot;aaaaaa&quot;, which its length is 6.
</pre>

<p><strong>Example 3:</strong></p>

<pre>
<strong>Input:</strong> text = &quot;aaabbaaa&quot;
<strong>Output:</strong> 4
</pre>

<p><strong>Example 4:</strong></p>

<pre>
<strong>Input:</strong> text = &quot;aaaaa&quot;
<strong>Output:</strong> 5
<strong>Explanation:</strong> No need to swap, longest repeated character substring is &quot;aaaaa&quot;, length is 5.
</pre>

<p><strong>Example 5:</strong></p>

<pre>
<strong>Input:</strong> text = &quot;abcdef&quot;
<strong>Output:</strong> 1
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= text.length &lt;= 20000</code></li>
	<li><code>text</code> consist of lowercase English characters only.</li>
</ul>