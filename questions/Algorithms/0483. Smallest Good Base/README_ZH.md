### [最小好进制](https://leetcode-cn.com/problems/smallest-good-base)

<p>以字符串的形式给出 <code>n</code>&nbsp;, 以字符串的形式返回<em> <code>n</code> 的最小 <strong>好进制</strong> </em>&nbsp;。</p>

<p>如果 <code>n</code> 的 &nbsp;<code>k(k&gt;=2)</code>&nbsp;进制数的所有数位全为1，则称&nbsp;<code>k(k&gt;=2)</code>&nbsp;是 <code>n</code> 的一个&nbsp;<strong>好进制&nbsp;</strong>。</p>

<p>&nbsp;</p>

<p><strong>示例 1：</strong></p>

<pre>
<strong>输入：</strong>n = "13"
<strong>输出：</strong>"3"
<strong>解释：</strong>13 的 3 进制是 111。
</pre>

<p><strong>示例 2：</strong></p>

<pre>
<strong>输入：</strong>n = "4681"
<strong>输出：</strong>"8"
<strong>解释：</strong>4681 的 8 进制是 11111。
</pre>

<p><strong>示例 3：</strong></p>

<pre>
<strong>输入：</strong>n = "1000000000000000000"
<strong>输出：</strong>"999999999999999999"
<strong>解释：</strong>1000000000000000000 的 999999999999999999 进制是 11。
</pre>

<p>&nbsp;</p>

<p><strong>提示：</strong></p>

<ul>
	<li><code>n</code> 的取值范围是&nbsp;<code>[3, 10<sup>18</sup>]</code></li>
	<li><code>n</code> 没有前导 0</li>
</ul>
