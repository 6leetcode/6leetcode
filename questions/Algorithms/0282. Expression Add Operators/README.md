### [Expression Add Operators](https://leetcode.com/problems/expression-add-operators)

<p>Given a string <code>num</code> that contains only digits and an integer <code>target</code>, return <em><strong>all possibilities</strong> to insert the binary operators </em><code>&#39;+&#39;</code><em>, </em><code>&#39;-&#39;</code><em>, and/or </em><code>&#39;*&#39;</code><em> between the digits of </em><code>num</code><em> so that the resultant expression evaluates to the </em><code>target</code><em> value</em>.</p>

<p>Note that operands in the returned expressions <strong>should not</strong> contain leading zeros.</p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>

<pre>
<strong>Input:</strong> num = &quot;123&quot;, target = 6
<strong>Output:</strong> [&quot;1*2*3&quot;,&quot;1+2+3&quot;]
<strong>Explanation:</strong> Both &quot;1*2*3&quot; and &quot;1+2+3&quot; evaluate to 6.
</pre>

<p><strong>Example 2:</strong></p>

<pre>
<strong>Input:</strong> num = &quot;232&quot;, target = 8
<strong>Output:</strong> [&quot;2*3+2&quot;,&quot;2+3*2&quot;]
<strong>Explanation:</strong> Both &quot;2*3+2&quot; and &quot;2+3*2&quot; evaluate to 8.
</pre>

<p><strong>Example 3:</strong></p>

<pre>
<strong>Input:</strong> num = &quot;105&quot;, target = 5
<strong>Output:</strong> [&quot;1*0+5&quot;,&quot;10-5&quot;]
<strong>Explanation:</strong> Both &quot;1*0+5&quot; and &quot;10-5&quot; evaluate to 5.
Note that &quot;1-05&quot; is not a valid expression because the 5 has a leading zero.
</pre>

<p><strong>Example 4:</strong></p>

<pre>
<strong>Input:</strong> num = &quot;00&quot;, target = 0
<strong>Output:</strong> [&quot;0*0&quot;,&quot;0+0&quot;,&quot;0-0&quot;]
<strong>Explanation:</strong> &quot;0*0&quot;, &quot;0+0&quot;, and &quot;0-0&quot; all evaluate to 0.
Note that &quot;00&quot; is not a valid expression because the 0 has a leading zero.
</pre>

<p><strong>Example 5:</strong></p>

<pre>
<strong>Input:</strong> num = &quot;3456237490&quot;, target = 9191
<strong>Output:</strong> []
<strong>Explanation:</strong> There are no expressions that can be created from &quot;3456237490&quot; to evaluate to 9191.
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= num.length &lt;= 10</code></li>
	<li><code>num</code> consists of only digits.</li>
	<li><code>-2<sup>31</sup> &lt;= target &lt;= 2<sup>31</sup> - 1</code></li>
</ul>
