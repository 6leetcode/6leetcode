### [环绕字符串中唯一的子字符串](https://leetcode-cn.com/problems/unique-substrings-in-wraparound-string)

<p>把字符串 <code>s</code> 看作 <code>"abcdefghijklmnopqrstuvwxyz"</code>&nbsp;的无限环绕字符串，所以&nbsp;<code>s</code> 看起来是这样的：</p>

<ul>
	<li><code>"...zabcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyzabcd...."</code> 。</li>
</ul>

<p>现在给定另一个字符串 <code>p</code> 。返回&nbsp;<code>s</code> 中 <strong>不同 </strong>的 <code>p</code> 的 <strong>非空子串</strong>&nbsp;的数量&nbsp;。&nbsp;</p>

<p>&nbsp;</p>

<p><strong>示例&nbsp;1：</strong></p>

<pre>
<strong>输入：</strong>p = "a"
<strong>输出：</strong>1
<strong>解释：</strong>字符串 s 中只有 p 的一个 "a" 子字符。
</pre>

<p><strong>示例 2：</strong></p>

<pre>
<strong>输入：</strong>p = "cac"
<strong>输出：</strong>2
<strong>解释：</strong>字符串 s 中只有 p 的两个子串 ("a", "c") 。
</pre>

<p><strong>示例 3：</strong></p>

<pre>
<strong>输入：</strong>p = "zab"
<strong>输出：</strong>6
<strong>解释：</strong>在字符串 s 中有 p 的六个子串 ("z", "a", "b", "za", "ab", "zab") 。
</pre>

<p>&nbsp;</p>

<p><strong>提示：</strong></p>

<ul>
	<li><code>1 &lt;= p.length &lt;= 10<sup>5</sup></code></li>
	<li><code>p</code>&nbsp;由小写英文字母组成</li>
</ul>
