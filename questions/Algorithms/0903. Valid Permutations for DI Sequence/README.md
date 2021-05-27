### [Valid Permutations for DI Sequence](https://leetcode.com/problems/valid-permutations-for-di-sequence)

<p>We are given <code>s</code>, a length <code>n</code> string of characters from the set <code>{&#39;D&#39;, &#39;I&#39;}</code>. (These letters stand for &quot;decreasing&quot; and &quot;increasing&quot;.)</p>

<p>A&nbsp;<em>valid permutation</em>&nbsp;is a permutation <code>p[0], p[1], ..., p[n]</code> of integers&nbsp;<code>{0, 1, ..., n}</code>, such that for all <code>i</code>:</p>

<ul>
	<li>If <code>s[i] == &#39;D&#39;</code>, then <code>p[i] &gt; p[i+1]</code>, and;</li>
	<li>If <code>s[i] == &#39;I&#39;</code>, then <code>p[i] &lt; p[i+1]</code>.</li>
</ul>

<p>How many valid permutations are there?&nbsp; Since the answer may be large, <strong>return your answer modulo </strong><code>10<sup>9</sup> + 7</code>.</p>

<p>&nbsp;</p>

<p><strong>Example 1:</strong></p>

<pre>
<strong>Input: </strong>s = <span id="example-input-1-1">&quot;DID&quot;</span>
<strong>Output: </strong><span id="example-output-1">5</span>
<strong>Explanation: </strong>
The 5 valid permutations of (0, 1, 2, 3) are:
(1, 0, 3, 2)
(2, 0, 3, 1)
(2, 1, 3, 0)
(3, 0, 2, 1)
(3, 1, 2, 0)
</pre>

<p>&nbsp;</p>

<p><strong>Note:</strong></p>

<ol>
	<li><code>1 &lt;= s.length &lt;= 200</code></li>
	<li><code>s</code> consists only of characters from the set <code>{&#39;D&#39;, &#39;I&#39;}</code>.</li>
</ol>

<div>
<p>&nbsp;</p>
</div>
