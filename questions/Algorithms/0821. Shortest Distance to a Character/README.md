### [Shortest Distance to a Character](https://leetcode.com/problems/shortest-distance-to-a-character)

<p>Given a string <code>s</code> and a character <code>c</code> that occurs in <code>s</code>, return <em>an array of integers <code>answer</code> where</em> <code>answer.length == s.length</code> <em>and</em> <code>answer[i]</code> <em>is the shortest distance from</em> <code>s[i]</code> <em>to the character</em> <code>c</code> <em>in</em> <code>s</code>.</p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>
<pre><strong>Input:</strong> s = "loveleetcode", c = "e"
<strong>Output:</strong> [3,2,1,0,1,0,0,1,2,2,1,0]
</pre><p><strong>Example 2:</strong></p>
<pre><strong>Input:</strong> s = "aaab", c = "b"
<strong>Output:</strong> [3,2,1,0]
</pre>
<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= s.length &lt;= 10<sup>4</sup></code></li>
	<li><code>s[i]</code> and <code>c</code> are lowercase English letters.</li>
	<li><code>c</code> occurs at least once in <code>s</code>.</li>
</ul>
