### [Find And Replace in String](https://leetcode.com/problems/find-and-replace-in-string)

<p>To some string <code>s</code>, we will perform some replacement operations that replace groups of letters with new ones (not necessarily the same size).</p>

<p>Each replacement operation has <code>3</code> parameters: a starting index <code>i</code>, a source word <code>x</code> and a target word <code>y</code>. The rule is that if <code><font face="monospace">x</font></code> starts at position <code>i</code> in the <strong>original</strong> <strong>string</strong> <strong><code>S</code></strong>, then we will replace that occurrence of <code>x</code> with <code>y</code>. If not, we do nothing.</p>

<p>For example, if we have <code>s = &quot;abcd&quot;</code> and we have some replacement operation <code>i = 2, x = &quot;cd&quot;, y = &quot;ffff&quot;</code>, then because <code>&quot;cd&quot;</code> starts at position <code><font face="monospace">2</font></code> in the original string <code>s</code>, we will replace it with <code>&quot;ffff&quot;</code>.</p>

<p>Using another example on <code>s = &quot;abcd&quot;</code>, if we have both the replacement operation <code>i = 0, x = &quot;ab&quot;, y = &quot;eee&quot;</code>, as well as another replacement operation <code>i = 2, x = &quot;ec&quot;, y = &quot;ffff&quot;</code>, this second operation does nothing because in the original string <code>s[2] = &#39;c&#39;</code>, which doesn&#39;t match <code>x[0] = &#39;e&#39;</code>.</p>

<p>All these operations occur simultaneously. It&#39;s guaranteed that there won&#39;t be any overlap in replacement: for example, <code>s = &quot;abc&quot;, indexes = [0, 1], sources = [&quot;ab&quot;,&quot;bc&quot;]</code> is not a valid test case.</p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>

<pre>
<strong>Input:</strong> s = &quot;abcd&quot;, indexes = [0, 2], sources = [&quot;a&quot;, &quot;cd&quot;], targets = [&quot;eee&quot;, &quot;ffff&quot;]
<strong>Output:</strong> &quot;eeebffff&quot;
<strong>Explanation:</strong>
&quot;a&quot; starts at index 0 in s, so it&#39;s replaced by &quot;eee&quot;.
&quot;cd&quot; starts at index 2 in s, so it&#39;s replaced by &quot;ffff&quot;.
</pre>

<p><strong>Example 2:</strong></p>

<pre>
<strong>Input:</strong> s = &quot;abcd&quot;, indexes = [0, 2], sources = [&quot;ab&quot;,&quot;ec&quot;], targets = [&quot;eee&quot;,&quot;ffff&quot;]
<strong>Output:</strong> &quot;eeecd&quot;
<strong>Explanation:</strong>
&quot;ab&quot; starts at index 0 in s, so it&#39;s replaced by &quot;eee&quot;.
&quot;ec&quot; doesn&#39;t starts at index 2 in the <strong>original</strong> s, so we do nothing.
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>0 &lt;= s.length &lt;= 1000</code></li>
	<li><code>s</code> consists of only lowercase English letters.</li>
	<li><code>0 &lt;= indexes.length &lt;= 100</code></li>
	<li><code>0 &lt;= indexes[i] &lt; s.length</code></li>
	<li><code>sources.length == indexes.length</code></li>
	<li><code>targets.length == indexes.length</code></li>
	<li><code>1 &lt;= sources[i].length, targets[i].length &lt;= 50</code></li>
	<li><code>sources[i]</code> and <code>targets[i]</code> consist of only lowercase English letters.</li>
</ul>
