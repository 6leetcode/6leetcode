### [字符串中的最大奇数](https://leetcode-cn.com/problems/largest-odd-number-in-string)

<p>给你一个字符串 <code>num</code> ，表示一个大整数。请你在字符串 <code>num</code> 的所有 <strong>非空子字符串</strong> 中找出 <strong>值最大的奇数</strong> ，并以字符串形式返回。如果不存在奇数，则返回一个空字符串<em> </em><code>""</code><em> </em>。</p>

<p><strong>子字符串</strong> 是字符串中的一个连续的字符序列。</p>

<p> </p>

<p><strong>示例 1：</strong></p>

<pre>
<strong>输入：</strong>num = "52"
<strong>输出：</strong>"5"
<strong>解释：</strong>非空子字符串仅有 "5"、"2" 和 "52" 。"5" 是其中唯一的奇数。
</pre>

<p><strong>示例 2：</strong></p>

<pre>
<strong>输入：</strong>num = "4206"
<strong>输出：</strong>""
<strong>解释：</strong>在 "4206" 中不存在奇数。
</pre>

<p><strong>示例 3：</strong></p>

<pre>
<strong>输入：</strong>num = "35427"
<strong>输出：</strong>"35427"
<strong>解释：</strong>"35427" 本身就是一个奇数。
</pre>

<p> </p>

<p><strong>提示：</strong></p>

<ul>
	<li><code>1 <= num.length <= 10<sup>5</sup></code></li>
	<li><code>num</code> 仅由数字组成且不含前导零</li>
</ul>
