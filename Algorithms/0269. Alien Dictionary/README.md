### [Alien Dictionary](https://leetcode.com/problems/alien-dictionary)

<p>There is a new alien language which uses the latin alphabet. However, the order among letters are unknown to you. You receive a list of <b>non-empty</b> words from the dictionary, where <b>words are sorted lexicographically by the rules of this new language</b>. Derive the order of letters in this language.</p>

<p><b>Example 1:</b></p>

<pre>
<strong>Input:</strong>
[
  &quot;wrt&quot;,
  &quot;wrf&quot;,
  &quot;er&quot;,
  &quot;ett&quot;,
  &quot;rftt&quot;
]

<strong>Output: </strong><code>&quot;wertf&quot;</code>
</pre>

<p><b>Example 2:</b></p>

<pre>
<strong>Input:</strong>
[
  &quot;z&quot;,
  &quot;x&quot;
]

<strong>Output: </strong><code>&quot;zx&quot;</code>
</pre>

<p><b>Example 3:</b></p>

<pre>
<strong>Input:</strong>
[
  &quot;z&quot;,
  &quot;x&quot;,
  &quot;z&quot;
] 

<strong>Output:</strong> <code>&quot;&quot;</code>&nbsp;

<strong>Explanation:</strong> The order is invalid, so return <code>&quot;&quot;</code>.
</pre>

<p><b>Note:</b></p>

<ul>
	<li>You may assume all letters are in lowercase.</li>
	<li>If the order is invalid, return an empty string.</li>
	<li>There may be multiple valid order of letters, return any one of them is fine.</li>
</ul>
