### [Special Binary String](https://leetcode.com/problems/special-binary-string)

<p><i>Special</i> binary strings are binary strings with the following two properties:</p>

<ul>
	<li>The number of 0&#39;s is equal to the number of 1&#39;s.</li>
	<li>Every prefix of the binary string has at least as many 1&#39;s as 0&#39;s.</li>
</ul>

<p>Given a special string <code>s</code>, a <i>move</i> consists of choosing two consecutive, non-empty, special substrings of <code>s</code>, and swapping them. <i>(Two strings are consecutive if the last character of the first string is exactly one index before the first character of the second string.)</i></p>

<p>At the end of any number of moves, what is the lexicographically largest resulting string possible?</p>

<p><b>Example 1:</b></p>

<pre>
<b>Input:</b> s = &quot;11011000&quot;
<b>Output:</b> &quot;11100100&quot;
<b>Explanation:</b>
The strings &quot;10&quot; [occuring at s[1]] and &quot;1100&quot; [at s[3]] are swapped.
This is the lexicographically largest string possible after some number of swaps.
</pre>

<p><b>Note:</b></p>

<ol>
	<li><code>s</code> has length at most <code>50</code>.</li>
	<li><code>s</code> is guaranteed to be a <i>special</i> binary string as defined above.</li>
</ol>
