### [子串能表示从 1 到 N 数字的二进制串](https://leetcode-cn.com/problems/binary-string-with-substrings-representing-1-to-n)

<p>给定一个二进制字符串&nbsp;<code>S</code>（一个仅由若干&nbsp;&#39;0&#39; 和 &#39;1&#39; 构成的字符串）和一个正整数&nbsp;<code>N</code>，如果对于从 <code>1</code> 到 <code>N</code> 的每个整数 <code>X</code>，其二进制表示都是&nbsp;<code>S</code> 的子串，就返回 <code>true</code>，否则返回 <code>false</code>。</p>

<p>&nbsp;</p>

<p><strong>示例 1：</strong></p>

<pre><strong>输入：</strong>S = &quot;0110&quot;, N = 3
<strong>输出：</strong>true
</pre>

<p><strong>示例 2：</strong></p>

<pre><strong>输入：</strong>S = &quot;0110&quot;, N = 4
<strong>输出：</strong>false
</pre>

<p>&nbsp;</p>

<p><strong>提示：</strong></p>

<ol>
	<li><code>1 &lt;= S.length &lt;= 1000</code></li>
	<li><code>1 &lt;= N &lt;= 10^9</code></li>
</ol>
