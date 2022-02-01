### [不含连续1的非负整数](https://leetcode-cn.com/problems/non-negative-integers-without-consecutive-ones)

<p>给定一个正整数 <code>n</code>&nbsp;，返回范围在&nbsp;<code>[0, n]</code>&nbsp;都非负整数中，其二进制表示不包含&nbsp;<strong>连续的 1&nbsp;</strong>的个数。</p>

<p>&nbsp;</p>

<p><strong>示例 1:</strong></p>

<pre>
<strong>输入:</strong> n = 5
<strong>输出:</strong> 5
<strong>解释:</strong> 
下面是带有相应二进制表示的非负整数&lt;= 5：
0 : 0
1 : 1
2 : 10
3 : 11
4 : 100
5 : 101
其中，只有整数3违反规则（有两个连续的1），其他5个满足规则。</pre>

<p><strong>示例 2:</strong></p>

<pre>
<strong>输入:</strong> n = 1
<strong>输出:</strong> 2
</pre>

<p><strong>示例 3:</strong></p>

<pre>
<strong>输入:</strong> n = 2
<strong>输出:</strong> 3
</pre>

<p>&nbsp;</p>

<p><strong>提示:</strong></p>

<ul>
	<li><code>1 &lt;= n &lt;= 10<sup>9</sup></code></li>
</ul>
