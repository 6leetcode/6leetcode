### [Keyboard Row](https://leetcode.com/problems/keyboard-row)

<p>Given an array of strings <code>words</code>, return <em>the words that can be typed using letters of the alphabet on only one row of American keyboard like the image below</em>.</p>

<p>In the <strong>American keyboard</strong>:</p>

<ul>
	<li>the first row consists of the characters <code>&quot;qwertyuiop&quot;</code>,</li>
	<li>the second row consists of the characters <code>&quot;asdfghjkl&quot;</code>, and</li>
	<li>the third row consists of the characters <code>&quot;zxcvbnm&quot;</code>.</li>
</ul>
<img alt="" src="https://assets.leetcode.com/uploads/2018/10/12/keyboard.png" style="width: 800px; max-width: 600px; height: 267px;" />
<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>

<pre>
<strong>Input:</strong> words = [&quot;Hello&quot;,&quot;Alaska&quot;,&quot;Dad&quot;,&quot;Peace&quot;]
<strong>Output:</strong> [&quot;Alaska&quot;,&quot;Dad&quot;]
</pre>

<p><strong>Example 2:</strong></p>

<pre>
<strong>Input:</strong> words = [&quot;omk&quot;]
<strong>Output:</strong> []
</pre>

<p><strong>Example 3:</strong></p>

<pre>
<strong>Input:</strong> words = [&quot;adsdf&quot;,&quot;sfd&quot;]
<strong>Output:</strong> [&quot;adsdf&quot;,&quot;sfd&quot;]
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= words.length &lt;= 20</code></li>
	<li><code>1 &lt;= words[i].length &lt;= 100</code></li>
	<li><code>words[i]</code> consists of English letters (both lowercase and uppercase).&nbsp;</li>
</ul>
