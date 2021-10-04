### [Simplified Fractions](https://leetcode.com/problems/simplified-fractions)

<p>Given an integer <code>n</code>, return a list of all <strong>simplified</strong> fractions between <code>0</code> and <code>1</code> (exclusive) such that the denominator is less-than-or-equal-to <code>n</code>. The fractions can be in <strong>any</strong> order.</p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>

<pre>
<strong>Input:</strong> n = 2
<strong>Output:</strong> [&quot;1/2&quot;]
<strong>Explanation: </strong>&quot;1/2&quot; is the only unique fraction with a denominator less-than-or-equal-to 2.</pre>

<p><strong>Example 2:</strong></p>

<pre>
<strong>Input:</strong> n = 3
<strong>Output:</strong> [&quot;1/2&quot;,&quot;1/3&quot;,&quot;2/3&quot;]
</pre>

<p><strong>Example 3:</strong></p>

<pre>
<strong>Input:</strong> n = 4
<strong>Output:</strong> [&quot;1/2&quot;,&quot;1/3&quot;,&quot;1/4&quot;,&quot;2/3&quot;,&quot;3/4&quot;]
<strong>Explanation: </strong>&quot;2/4&quot; is not a simplified fraction because it can be simplified to &quot;1/2&quot;.</pre>

<p><strong>Example 4:</strong></p>

<pre>
<strong>Input:</strong> n = 1
<strong>Output:</strong> []
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= n &lt;= 100</code></li>
</ul>
