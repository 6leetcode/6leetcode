### [Reverse Words in a String](https://leetcode.com/problems/reverse-words-in-a-string)

<p>Given an input string, reverse the string word by word.</p>

<p>A <strong>word</strong> is defined as a sequence of non-space characters.</p>

<p><strong>Notice</strong> that the input string may contain leading or trailing spaces. However, your reversed string should not contain leading or trailing spaces.</p>

<p>Also, <strong>notice</strong> that you need to reduce multiple spaces between two words to a single space in the reversed string.</p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>

<pre>
<strong>Input:</strong> s = &quot;the sky is blue&quot;
<strong>Output:</strong> &quot;blue is sky the&quot;
</pre>

<p><strong>Example 2:</strong></p>

<pre>
<strong>Input:</strong> s = &quot;  hello world  &quot;
<strong>Output:</strong> &quot;world hello&quot;
<strong>Explanation:</strong> Your reversed string should not contain leading or trailing spaces.
</pre>

<p><strong>Example 3:</strong></p>

<pre>
<strong>Input:</strong> s = &quot;a good   example&quot;
<strong>Output:</strong> &quot;example good a&quot;
<strong>Explanation:</strong> You need to reduce multiple spaces between two words to a single space in the reversed string.
</pre>

<p><strong>Example 4:</strong></p>

<pre>
<strong>Input:</strong> s = &quot;  Bob    Loves  Alice   &quot;
<strong>Output:</strong> &quot;Alice Loves Bob&quot;
</pre>

<p><strong>Example 5:</strong></p>

<pre>
<strong>Input:</strong> s = &quot;Alice does not even like bob&quot;
<strong>Output:</strong> &quot;bob like even not does Alice&quot;
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= s.length &lt;= 10<sup>4</sup></code></li>
	<li><code>s</code> contains English letters (upper-case and lower-case), digits, and spaces <code>&#39; &#39;</code>.</li>
	<li>There is <strong>at least one</strong> word in <code>s</code>.</li>
</ul>

<p>&nbsp;</p>

<p><strong>Follow up:</strong></p>

<ul>
	<li>Could you solve it <strong>in-place</strong> in <code>O(1)</code> extra space.</li>
</ul>

<p>&nbsp;</p>
