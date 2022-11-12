### [二进制字符串重新安排顺序需要的时间](https://leetcode-cn.com/problems/time-needed-to-rearrange-a-binary-string)

<p>给你一个二进制字符串&nbsp;<code>s</code>&nbsp;。在一秒之中，<strong>所有</strong>&nbsp;子字符串&nbsp;<code>"01"</code> <strong>同时</strong>&nbsp;被替换成&nbsp;<code>"10"</code>&nbsp;。这个过程持续进行到没有&nbsp;<code>"01"</code>&nbsp;存在。</p>

<p>请你返回完成这个过程所需要的秒数。</p>

<p>&nbsp;</p>

<p><strong>示例 1：</strong></p>

<pre>
<b>输入：</b>s = "0110101"
<b>输出：</b>4
<b>解释：</b>
一秒后，s 变成 "1011010" 。
再过 1 秒后，s 变成 "1101100" 。
第三秒过后，s 变成 "1110100" 。
第四秒后，s 变成 "1111000" 。
此时没有 "01" 存在，整个过程花费 4 秒。
所以我们返回 4 。
</pre>

<p><strong>示例 2：</strong></p>

<pre>
<b>输入：</b>s = "11100"
<b>输出：</b>0
<strong>解释：</strong>
s 中没有 "01" 存在，整个过程花费 0 秒。
所以我们返回 0 。
</pre>

<p>&nbsp;</p>

<p><strong>提示：</strong></p>

<ul>
	<li><code>1 &lt;= s.length &lt;= 1000</code></li>
	<li><code>s[i]</code>&nbsp;要么是&nbsp;<code>'0'</code>&nbsp;，要么是&nbsp;<code>'1'</code> 。</li>
</ul>

<p>&nbsp;</p>

<p><strong>进阶：</strong></p>

<p>你能以 O(n) 的时间复杂度解决这个问题吗？</p>
