### [最长理想子序列](https://leetcode-cn.com/problems/longest-ideal-subsequence)

<p>给你一个由小写字母组成的字符串 <code>s</code> ，和一个整数 <code>k</code> 。如果满足下述条件，则可以将字符串 <code>t</code> 视作是 <strong>理想字符串</strong> ：</p>

<ul>
	<li><code>t</code> 是字符串 <code>s</code> 的一个子序列。</li>
	<li><code>t</code> 中每两个 <strong>相邻</strong> 字母在字母表中位次的绝对差值小于或等于 <code>k</code> 。</li>
</ul>

<p>返回 <strong>最长</strong> 理想字符串的长度。</p>

<p>字符串的子序列同样是一个字符串，并且子序列还满足：可以经由其他字符串删除某些字符（也可以不删除）但不改变剩余字符的顺序得到。</p>

<p><strong>注意：</strong>字母表顺序不会循环。例如，<code>'a'</code> 和 <code>'z'</code> 在字母表中位次的绝对差值是 <code>25</code> ，而不是 <code>1</code> 。</p>

<p>&nbsp;</p>

<p><strong>示例 1：</strong></p>

<pre>
<strong>输入：</strong>s = "acfgbd", k = 2
<strong>输出：</strong>4
<strong>解释：</strong>最长理想字符串是 "acbd" 。该字符串长度为 4 ，所以返回 4 。
注意 "acfgbd" 不是理想字符串，因为 'c' 和 'f' 的字母表位次差值为 3 。</pre>

<p><strong>示例 2：</strong></p>

<pre>
<strong>输入：</strong>s = "abcd", k = 3
<strong>输出：</strong>4
<strong>解释：</strong>最长理想字符串是 "abcd" ，该字符串长度为 4 ，所以返回 4 。
</pre>

<p>&nbsp;</p>

<p><strong>提示：</strong></p>

<ul>
	<li><code>1 &lt;= s.length &lt;= 10<sup>5</sup></code></li>
	<li><code>0 &lt;= k &lt;= 25</code></li>
	<li><code>s</code> 由小写英文字母组成</li>
</ul>
