### [基本计算器 III](https://leetcode-cn.com/problems/basic-calculator-iii)

<p>实现一个基本的计算器来计算简单的表达式字符串。</p>

<p>表达式字符串只包含非负整数，算符 <code>+</code>、<code>-</code>、<code>*</code>、<code>/</code> ，左括号 <code>(</code> 和右括号 <code>)</code> 。整数除法需要 <strong>向下截断</strong> 。</p>

<p>你可以假定给定的表达式总是有效的。所有的中间结果的范围为 <code>[-2<sup>31</sup>, 2<sup>31</sup> - 1]</code> 。</p>

<p> </p>

<p><strong>示例 1：</strong></p>

<pre>
<strong>输入：</strong>s = "1+1"
<strong>输出：</strong>2
</pre>

<p><strong>示例 2：</strong></p>

<pre>
<strong>输入：</strong>s = "6-4/2"
<strong>输出：</strong>4
</pre>

<p><strong>示例 3：</strong></p>

<pre>
<strong>输入：</strong>s = "2*(5+5*2)/3+(6/2+8)"
<strong>输出：</strong>21
</pre>

<p><strong>示例 4：</strong></p>

<pre>
<strong>输入：</strong>s = "(2+6*3+5-(3*14/7+2)*5)+3"
<strong>输出：</strong>-12
</pre>

<p><strong>示例 5：</strong></p>

<pre>
<strong>输入：</strong>s = "0"
<strong>输出：</strong>0
</pre>

<p> </p>

<p><strong>提示：</strong></p>

<ul>
	<li><code>1 <= s <= 10<sup>4</sup></code></li>
	<li><code>s</code> 由整数、<code>'+'</code>、<code>'-'</code>、<code>'*'</code>、<code>'/'</code>、<code>'('</code> 和 <code>')'</code> 组成</li>
	<li><code>s</code> 是一个 <strong>有效的</strong> 表达式</li>
</ul>

<p> </p>

<p><strong>进阶：</strong>你可以在不使用内置库函数的情况下解决此问题吗？</p>
