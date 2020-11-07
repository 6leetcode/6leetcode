### [基本计算器 III](https://leetcode-cn.com/problems/basic-calculator-iii)

<p>实现一个基本的计算器来计算简单的表达式字符串。</p>

<p>表达式字符串只包含非负整数，&nbsp;<code>+</code>, <code>-</code>, <code>*</code>, <code>/</code>&nbsp;操作符，左括号 <code>(</code>&nbsp;，右括号 <code>)</code>和空格&nbsp;。整数除法需要向下截断。</p>

<p>你可以假定给定的字符串总是有效的。所有的中间结果的范围为 <code>[-2147483648, 2147483647]</code>。</p>

<p><strong>进阶：</strong>你可以在不使用内置库函数的情况下解决此问题吗？</p>

<p>&nbsp;</p>

<p><strong>示例 1：</strong></p>

<pre><strong>输入：</strong>s = &quot;1 + 1&quot;
<strong>输出：</strong>2
</pre>

<p><strong>示例 2：</strong></p>

<pre><strong>输入：</strong>s = &quot; 6-4 / 2 &quot;
<strong>输出：</strong>4
</pre>

<p><strong>示例 3：</strong></p>

<pre><strong>输入：</strong>s = &quot;2*(5+5*2)/3+(6/2+8)&quot;
<strong>输出：</strong>21
</pre>

<p><strong>示例 4：</strong></p>

<pre><strong>输入：</strong>s = &quot;(2+6* 3+5- (3*14/7+2)*5)+3&quot;
<strong>输出：</strong>-12
</pre>

<p><strong>示例 5：</strong></p>

<pre><strong>输入：</strong>s = &quot;0&quot;
<strong>输出：</strong>0
</pre>

<p>&nbsp;</p>

<p><strong>提示：</strong></p>

<ul>
	<li><code>1 &lt;= s &lt;= 10<sup>4</sup></code></li>
	<li><code>s</code> 由整数、<code>&#39;+&#39;</code>、<code>&#39;-&#39;</code>、<code>&#39;*&#39;</code>、<code>&#39;/&#39;</code>、<code>&#39;(&#39;</code>、<code>&#39;)&#39;</code> 和 <code>&#39; &#39;</code> 组成</li>
	<li><code>s</code> 是一个 <strong>有效的</strong> 表达式</li>
</ul>
