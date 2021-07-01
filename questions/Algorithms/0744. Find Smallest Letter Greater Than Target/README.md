### [Find Smallest Letter Greater Than Target](https://leetcode.com/problems/find-smallest-letter-greater-than-target)

<p>Given a characters array <code>letters</code> that is sorted in <strong>non-decreasing</strong> order and a character <code>target</code>, return <em>the smallest character in the array that is larger than </em><code>target</code>.</p>

<p><strong>Note</strong> that the letters wrap around.</p>

<ul>
	<li>For example, if <code>target == &#39;z&#39;</code> and <code>letters == [&#39;a&#39;, &#39;b&#39;]</code>, the answer is <code>&#39;a&#39;</code>.</li>
</ul>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>

<pre>
<strong>Input:</strong> letters = [&quot;c&quot;,&quot;f&quot;,&quot;j&quot;], target = &quot;a&quot;
<strong>Output:</strong> &quot;c&quot;
</pre>

<p><strong>Example 2:</strong></p>

<pre>
<strong>Input:</strong> letters = [&quot;c&quot;,&quot;f&quot;,&quot;j&quot;], target = &quot;c&quot;
<strong>Output:</strong> &quot;f&quot;
</pre>

<p><strong>Example 3:</strong></p>

<pre>
<strong>Input:</strong> letters = [&quot;c&quot;,&quot;f&quot;,&quot;j&quot;], target = &quot;d&quot;
<strong>Output:</strong> &quot;f&quot;
</pre>

<p><strong>Example 4:</strong></p>

<pre>
<strong>Input:</strong> letters = [&quot;c&quot;,&quot;f&quot;,&quot;j&quot;], target = &quot;g&quot;
<strong>Output:</strong> &quot;j&quot;
</pre>

<p><strong>Example 5:</strong></p>

<pre>
<strong>Input:</strong> letters = [&quot;c&quot;,&quot;f&quot;,&quot;j&quot;], target = &quot;j&quot;
<strong>Output:</strong> &quot;c&quot;
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>2 &lt;= letters.length &lt;= 10<sup>4</sup></code></li>
	<li><code>letters[i]</code> is a lowercase English letter.</li>
	<li><code>letters</code> is sorted in <strong>non-decreasing</strong> order.</li>
	<li><code>letters</code> contains at least two different characters.</li>
	<li><code>target</code> is a lowercase English letter.</li>
</ul>
