### [最长快乐前缀](https://leetcode-cn.com/problems/longest-happy-prefix)

<p><strong>「快乐前缀」</strong>&nbsp;是在原字符串中既是&nbsp;<strong>非空</strong> 前缀也是后缀（不包括原字符串自身）的字符串。</p>

<p>给你一个字符串 <code>s</code>，请你返回它的 <strong>最长快乐前缀</strong>。如果不存在满足题意的前缀，则返回一个空字符串<meta charset="UTF-8" />&nbsp;<code>""</code>&nbsp;。</p>

<p>&nbsp;</p>

<p><strong>示例 1：</strong></p>

<pre>
<strong>输入：</strong>s = "level"
<strong>输出：</strong>"l"
<strong>解释：</strong>不包括 s 自己，一共有 4 个前缀（"l", "le", "lev", "leve"）和 4 个后缀（"l", "el", "vel", "evel"）。最长的既是前缀也是后缀的字符串是 "l" 。
</pre>

<p><strong>示例 2：</strong></p>

<pre>
<strong>输入：</strong>s = "ababab"
<strong>输出：</strong>"abab"
<strong>解释：</strong>"abab" 是最长的既是前缀也是后缀的字符串。题目允许前后缀在原字符串中重叠。
</pre>

<p>&nbsp;</p>

<p><strong>提示：</strong></p>

<ul>
	<li><code>1 &lt;= s.length &lt;= 10<sup>5</sup></code></li>
	<li><code>s</code> 只含有小写英文字母</li>
</ul>
