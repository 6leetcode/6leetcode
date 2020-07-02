### [Maximum Number of Vowels in a Substring of Given Length](https://leetcode.com/problems/maximum-number-of-vowels-in-a-substring-of-given-length)

<p>Given a string <code>s</code> and an integer <code>k</code>.</p>

<p>Return <em>the maximum number of vowel letters</em> in any substring of <code>s</code>&nbsp;with&nbsp;length <code>k</code>.</p>

<p><strong>Vowel letters</strong> in&nbsp;English are&nbsp;(a, e, i, o, u).</p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>

<pre>
<strong>Input:</strong> s = &quot;abciiidef&quot;, k = 3
<strong>Output:</strong> 3
<strong>Explanation:</strong> The substring &quot;iii&quot; contains 3 vowel letters.
</pre>

<p><strong>Example 2:</strong></p>

<pre>
<strong>Input:</strong> s = &quot;aeiou&quot;, k = 2
<strong>Output:</strong> 2
<strong>Explanation:</strong> Any substring of length 2 contains 2 vowels.
</pre>

<p><strong>Example 3:</strong></p>

<pre>
<strong>Input:</strong> s = &quot;leetcode&quot;, k = 3
<strong>Output:</strong> 2
<strong>Explanation:</strong> &quot;lee&quot;, &quot;eet&quot; and &quot;ode&quot; contain 2 vowels.
</pre>

<p><strong>Example 4:</strong></p>

<pre>
<strong>Input:</strong> s = &quot;rhythms&quot;, k = 4
<strong>Output:</strong> 0
<strong>Explanation:</strong> We can see that s doesn&#39;t have any vowel letters.
</pre>

<p><strong>Example 5:</strong></p>

<pre>
<strong>Input:</strong> s = &quot;tryhard&quot;, k = 4
<strong>Output:</strong> 1
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= s.length &lt;= 10^5</code></li>
	<li><code>s</code>&nbsp;consists of lowercase English letters.</li>
	<li><code>1 &lt;= k &lt;= s.length</code></li>
</ul>