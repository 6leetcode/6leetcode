### [Split Two Strings to Make Palindrome](https://leetcode.com/problems/split-two-strings-to-make-palindrome)

<p>You are given two strings <code>a</code> and <code>b</code> of the same length. Choose an index and split both strings <strong>at the same index</strong>, splitting <code>a</code> into two strings: <code>a<sub>prefix</sub></code> and <code>a<sub>suffix</sub></code> where <code>a = a<sub>prefix</sub> + a<sub>suffix</sub></code>, and splitting <code>b</code> into two strings: <code>b<sub>prefix</sub></code> and <code>b<sub>suffix</sub></code> where <code>b = b<sub>prefix</sub> + b<sub>suffix</sub></code>. Check if <code>a<sub>prefix</sub> + b<sub>suffix</sub></code> or <code>b<sub>prefix</sub> + a<sub>suffix</sub></code> forms a palindrome.</p>

<p>When you split a string <code>s</code> into <code>s<sub>prefix</sub></code> and <code>s<sub>suffix</sub></code>, either <code>s<sub>suffix</sub></code> or <code>s<sub>prefix</sub></code> is allowed to be empty. For example, if <code>s = &quot;abc&quot;</code>, then <code>&quot;&quot; + &quot;abc&quot;</code>, <code>&quot;a&quot; + &quot;bc&quot;</code>, <code>&quot;ab&quot; + &quot;c&quot;</code> , and <code>&quot;abc&quot; + &quot;&quot;</code> are valid splits.</p>

<p>Return <code>true</code><em> if it is possible to form</em><em> a palindrome string, otherwise return </em><code>false</code>.</p>

<p><strong>Notice</strong> that&nbsp;<code>x + y</code> denotes the concatenation of strings <code>x</code> and <code>y</code>.</p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>

<pre>
<strong>Input:</strong> a = &quot;x&quot;, b = &quot;y&quot;
<strong>Output:</strong> true
<strong>Explaination:</strong> If either a or b are palindromes the answer is true since you can split in the following way:
a<sub>prefix</sub> = &quot;&quot;, a<sub>suffix</sub> = &quot;x&quot;
b<sub>prefix</sub> = &quot;&quot;, b<sub>suffix</sub> = &quot;y&quot;
Then, a<sub>prefix</sub> + b<sub>suffix</sub> = &quot;&quot; + &quot;y&quot; = &quot;y&quot;, which is a palindrome.
</pre>

<p><strong>Example 2:</strong></p>

<pre>
<strong>Input:</strong> a = &quot;xbdef&quot;, b = &quot;xecab&quot;
<strong>Output:</strong> false
</pre>

<p><strong>Example 3:</strong></p>

<pre>
<strong>Input:</strong> a = &quot;ulacfd&quot;, b = &quot;jizalu&quot;
<strong>Output:</strong> true
<strong>Explaination:</strong> Split them at index 3:
a<sub>prefix</sub> = &quot;ula&quot;, a<sub>suffix</sub> = &quot;cfd&quot;
b<sub>prefix</sub> = &quot;jiz&quot;, b<sub>suffix</sub> = &quot;alu&quot;
Then, a<sub>prefix</sub> + b<sub>suffix</sub> = &quot;ula&quot; + &quot;alu&quot; = &quot;ulaalu&quot;, which is a palindrome.
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= a.length, b.length &lt;= 10<sup>5</sup></code></li>
	<li><code>a.length == b.length</code></li>
	<li><code>a</code> and <code>b</code> consist of lowercase English letters</li>
</ul>
