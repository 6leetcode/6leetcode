### [Rearrange Spaces Between Words](https://leetcode.com/problems/rearrange-spaces-between-words)

<p>You are given a string <code>text</code> of words that are placed among some number of spaces. Each word consists of one or more lowercase English letters and are separated by at least one space. It&#39;s guaranteed that <code>text</code> <strong>contains at least one word</strong>.</p>

<p>Rearrange the spaces so that there is an <strong>equal</strong> number of spaces between every pair of adjacent words and that number is <strong>maximized</strong>. If you cannot redistribute all the spaces equally, place the <strong>extra spaces at the end</strong>, meaning the returned string should be the same length as <code>text</code>.</p>

<p>Return <em>the string after rearranging the spaces</em>.</p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>

<pre>
<strong>Input:</strong> text = &quot;  this   is  a sentence &quot;
<strong>Output:</strong> &quot;this   is   a   sentence&quot;
<strong>Explanation: </strong>There are a total of 9 spaces and 4 words. We can evenly divide the 9 spaces between the words: 9 / (4-1) = 3 spaces.
</pre>

<p><strong>Example 2:</strong></p>

<pre>
<strong>Input:</strong> text = &quot; practice   makes   perfect&quot;
<strong>Output:</strong> &quot;practice   makes   perfect &quot;
<strong>Explanation:</strong>&nbsp;There are a total of 7 spaces and 3 words. 7 / (3-1) = 3 spaces plus 1 extra space. We place this extra space at the end of the string.
</pre>

<p><strong>Example 3:</strong></p>

<pre>
<strong>Input:</strong> text = &quot;hello   world&quot;
<strong>Output:</strong> &quot;hello   world&quot;
</pre>

<p><strong>Example 4:</strong></p>

<pre>
<strong>Input:</strong> text = &quot;  walks  udp package   into  bar a&quot;
<strong>Output:</strong> &quot;walks  udp  package  into  bar  a &quot;
</pre>

<p><strong>Example 5:</strong></p>

<pre>
<strong>Input:</strong> text = &quot;a&quot;
<strong>Output:</strong> &quot;a&quot;
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= text.length &lt;= 100</code></li>
	<li><code>text</code>&nbsp;consists of lowercase English letters and&nbsp;<code>&#39; &#39;</code>.</li>
	<li><code>text</code>&nbsp;contains at least one word.</li>
</ul>
