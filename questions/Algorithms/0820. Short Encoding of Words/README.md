### [Short Encoding of Words](https://leetcode.com/problems/short-encoding-of-words)

<p>Given a list of <code>words</code>, we may encode it by writing a reference string <code>s</code> and a list of indexes <code>a</code>.</p>

<p>For example, if the list of <code>words</code> is <code>[&quot;time&quot;, &quot;me&quot;, &quot;bell&quot;]</code>, we can write it as <code>s = &quot;time#bell#&quot;</code> and <code>indexes = [0, 2, 5]</code>.</p>

<p>Then for each index, we will recover the word by reading from the reference string from that index until we reach a <code>&quot;#&quot;</code> character.</p>

<p>Return <em>the length of the shortest reference string </em><code>s</code><em> possible that encodes the given </em><code>words</code><em>.</em></p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>

<pre>
<strong>Input:</strong> words = [&quot;time&quot;, &quot;me&quot;, &quot;bell&quot;]
<strong>Output:</strong> 10
<strong>Explanation:</strong> s = <code>&quot;time#bell#&quot; and indexes = [0, 2, 5</code>].
</pre>

<p><strong>Example 2:</strong></p>

<pre>
<strong>Input:</strong> words = [&quot;t&quot;]
<strong>Output:</strong> 2
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= words.length &lt;= 2000</code></li>
	<li><code>1 &lt;= words[i].length &lt;= 7</code></li>
	<li><code>words[i]</code> consists of only lowercase letters.</li>
</ul>
