### [Ambiguous Coordinates](https://leetcode.com/problems/ambiguous-coordinates)

<p>We had some 2-dimensional coordinates, like <code>&quot;(1, 3)&quot;</code> or <code>&quot;(2, 0.5)&quot;</code>. Then, we removed all commas, decimal points, and spaces and ended up with the string s.</p>

<ul>
	<li>For example, <code>&quot;(1, 3)&quot;</code> becomes <code>s = &quot;(13)&quot;</code> and <code>&quot;(2, 0.5)&quot;</code> becomes <code>s = &quot;(205)&quot;</code>.</li>
</ul>

<p>Return <em>a list of strings representing all possibilities for what our original coordinates could have been</em>.</p>

<p>Our original representation never had extraneous zeroes, so we never started with numbers like <code>&quot;00&quot;</code>, <code>&quot;0.0&quot;</code>, <code>&quot;0.00&quot;</code>, <code>&quot;1.0&quot;</code>, <code>&quot;001&quot;</code>, <code>&quot;00.01&quot;</code>, or any other number that can be represented with fewer digits. Also, a decimal point within a number never occurs without at least one digit occurring before it, so we never started with numbers like <code>&quot;.1&quot;</code>.</p>

<p>The final answer list can be returned in any order. All coordinates in the final answer have exactly one space between them (occurring after the comma.)</p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>

<pre>
<strong>Input:</strong> s = &quot;(123)&quot;
<strong>Output:</strong> [&quot;(1, 2.3)&quot;,&quot;(1, 23)&quot;,&quot;(1.2, 3)&quot;,&quot;(12, 3)&quot;]
</pre>

<p><strong>Example 2:</strong></p>

<pre>
<strong>Input:</strong> s = &quot;(0123)&quot;
<strong>Output:</strong> [&quot;(0, 1.23)&quot;,&quot;(0, 12.3)&quot;,&quot;(0, 123)&quot;,&quot;(0.1, 2.3)&quot;,&quot;(0.1, 23)&quot;,&quot;(0.12, 3)&quot;]
<strong>Explanation:</strong> 0.0, 00, 0001 or 00.01 are not allowed.
</pre>

<p><strong>Example 3:</strong></p>

<pre>
<strong>Input:</strong> s = &quot;(00011)&quot;
<strong>Output:</strong> [&quot;(0, 0.011)&quot;,&quot;(0.001, 1)&quot;]
</pre>

<p><strong>Example 4:</strong></p>

<pre>
<strong>Input:</strong> s = &quot;(100)&quot;
<strong>Output:</strong> [&quot;(10, 0)&quot;]
<strong>Explanation:</strong> 1.0 is not allowed.
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>4 &lt;= s.length &lt;= 12</code></li>
	<li><code>s[0] == &#39;(&#39;</code> and <code>s[s.length - 1] == &#39;)&#39;</code>.</li>
	<li>The rest of <code>s</code> are digits.</li>
</ul>
