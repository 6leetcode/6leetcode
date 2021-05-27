### [Minimum Window Substring](https://leetcode.com/problems/minimum-window-substring)

<p>Given two strings <code>s</code> and <code>t</code>&nbsp;of lengths&nbsp;<code>m</code>&nbsp;and <code>n</code>&nbsp;respectively, return <em>the minimum window in <code>s</code> which will contain all the characters in <code>t</code></em>. If there is no such window in <code>s</code> that covers all characters in <code>t</code>, return <em>the empty string <code>&quot;&quot;</code></em>.</p>

<p><strong>Note</strong> that If there is such a window, it is&nbsp;guaranteed that there will always be only one unique minimum window in <code>s</code>.</p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>
<pre><strong>Input:</strong> s = "ADOBECODEBANC", t = "ABC"
<strong>Output:</strong> "BANC"
</pre><p><strong>Example 2:</strong></p>
<pre><strong>Input:</strong> s = "a", t = "a"
<strong>Output:</strong> "a"
</pre>
<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>m == s.length</code></li>
	<li><code>n == t.length</code></li>
	<li><code>1 &lt;= m, n&nbsp;&lt;= 10<sup>5</sup></code></li>
	<li><code>s</code> and <code>t</code> consist of English letters.</li>
</ul>

<p>&nbsp;</p>
<strong>Follow up:</strong> Could you find an algorithm that runs in <code>O(m + n)</code> time?