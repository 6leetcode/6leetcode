### [布尔运算](https://leetcode-cn.com/problems/boolean-evaluation-lcci)

<p>给定一个布尔表达式和一个期望的布尔结果 result，布尔表达式由 <code>0</code> (false)、<code>1</code> (true)、<code>&amp;</code> (AND)、 <code>|</code> (OR) 和 <code>^</code> (XOR) 符号组成。实现一个函数，算出有几种可使该表达式得出 result 值的括号方法。</p>

<p><strong>示例 1:</strong></p>

<pre><strong>输入: </strong>s = &quot;1^0|0|1&quot;, result = 0

<strong>输出: </strong>2
<strong>解释:</strong>&nbsp;两种可能的括号方法是
1^(0|(0|1))
1^((0|0)|1)
</pre>

<p><strong>示例 2:</strong></p>

<pre><strong>输入: </strong>s = &quot;0&amp;0&amp;0&amp;1^1|0&quot;, result = 1

<strong>输出: </strong>10</pre>

<p><strong>提示：</strong></p>

<ul>
	<li>运算符的数量不超过 19 个</li>
</ul>
