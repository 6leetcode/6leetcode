### [Basic Calculator III](https://leetcode.com/problems/basic-calculator-iii)

<p>Implement a basic calculator to evaluate a simple expression string.</p>

<p>The expression string contains only non-negative integers, <code>+</code>, <code>-</code>, <code>*</code>, <code>/</code> operators , open <code>(</code> and closing parentheses <code>)</code> and empty spaces <code> </code>. The integer division should truncate toward zero.</p>

<p>You may assume that the given expression is always valid. All intermediate results will be in the range of <code>[-2147483648, 2147483647]</code>.</p>

<p><strong>Follow up:</strong>&nbsp;Could you solve the problem without using&nbsp;built-in library functions.</p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>
<pre><strong>Input:</strong> s = "1 + 1"
<strong>Output:</strong> 2
</pre><p><strong>Example 2:</strong></p>
<pre><strong>Input:</strong> s = " 6-4 / 2 "
<strong>Output:</strong> 4
</pre><p><strong>Example 3:</strong></p>
<pre><strong>Input:</strong> s = "2*(5+5*2)/3+(6/2+8)"
<strong>Output:</strong> 21
</pre><p><strong>Example 4:</strong></p>
<pre><strong>Input:</strong> s = "(2+6* 3+5- (3*14/7+2)*5)+3"
<strong>Output:</strong> -12
</pre><p><strong>Example 5:</strong></p>
<pre><strong>Input:</strong> s = "0"
<strong>Output:</strong> 0
</pre>
<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= s &lt;= 10<sup>4</sup></code></li>
	<li><code>s</code> consists of digits, <code>&#39;+&#39;</code>, <code>&#39;-&#39;</code>, <code>&#39;*&#39;</code>, <code>&#39;/&#39;</code>, <code>&#39;(&#39;</code>, <code>&#39;)&#39;</code> and&nbsp;<code>&#39; &#39;</code>.</li>
	<li><code>s</code> is a <strong>valid</strong> expression.</li>
</ul>
