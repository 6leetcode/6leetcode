### [增减字符串匹配](https://leetcode-cn.com/problems/di-string-match)

<p>由范围 <code>[0,n]</code> 内所有整数组成的 <code>n + 1</code> 个整数的排列序列可以表示为长度为 <code>n</code> 的字符串 <code>s</code> ，其中:</p>

<ul>
	<li>如果&nbsp;<code>perm[i] &lt; perm[i + 1]</code>&nbsp;，那么&nbsp;<code>s[i] == 'I'</code>&nbsp;</li>
	<li>如果&nbsp;<code>perm[i] &gt; perm[i + 1]</code>&nbsp;，那么 <code>s[i] == 'D'</code>&nbsp;</li>
</ul>

<p>给定一个字符串 <code>s</code> ，重构排列&nbsp;<code>perm</code> 并返回它。如果有多个有效排列perm，则返回其中 <strong>任何一个</strong> 。</p>

<p>&nbsp;</p>

<p><strong>示例 1：</strong></p>

<pre>
<strong>输入：</strong>s = "IDID"
<strong>输出：</strong>[0,4,1,3,2]
</pre>

<p><strong>示例 2：</strong></p>

<pre>
<strong>输入：</strong>s = "III"
<strong>输出：</strong>[0,1,2,3]
</pre>

<p><strong>示例 3：</strong></p>

<pre>
<strong>输入：</strong>s = "DDI"
<strong>输出：</strong>[3,2,0,1]</pre>

<p>&nbsp;</p>

<p><strong>提示：</strong></p>

<ul>
	<li><code>1 &lt;= s.length &lt;= 10<sup>5</sup></code></li>
	<li><code><font color="#c7254e"><font face="Menlo, Monaco, Consolas, Courier New, monospace"><span style="font-size:12.6px"><span style="background-color:#f9f2f4">s</span></span></font></font></code> 只包含字符&nbsp;<code>"I"</code>&nbsp;或&nbsp;<code>"D"</code></li>
</ul>
