### [反转字符串 II](https://leetcode-cn.com/problems/reverse-string-ii)

<p>给定一个字符串 <code>s</code> 和一个整数 <code>k</code>，从字符串开头算起，每计数至 <code>2k</code> 个字符，就反转这 <code>2k</code> 字符中的前 <code>k</code> 个字符。</p>

<ul>
	<li>如果剩余字符少于 <code>k</code> 个，则将剩余字符全部反转。</li>
	<li>如果剩余字符小于 <code>2k</code> 但大于或等于 <code>k</code> 个，则反转前 <code>k</code> 个字符，其余字符保持原样。</li>
</ul>

<p>&nbsp;</p>

<p><strong>示例 1：</strong></p>

<pre>
<strong>输入：</strong>s = "abcdefg", k = 2
<strong>输出：</strong>"bacdfeg"
</pre>

<p><strong>示例 2：</strong></p>

<pre>
<strong>输入：</strong>s = "abcd", k = 2
<strong>输出：</strong>"bacd"
</pre>

<p>&nbsp;</p>

<p><strong>提示：</strong></p>

<ul>
	<li><code>1 &lt;= s.length &lt;= 10<sup>4</sup></code></li>
	<li><code>s</code> 仅由小写英文组成</li>
	<li><code>1 &lt;= k &lt;= 10<sup>4</sup></code></li>
</ul>
