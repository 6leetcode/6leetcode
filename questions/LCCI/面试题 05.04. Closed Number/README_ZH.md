### [下一个数](https://leetcode-cn.com/problems/closed-number-lcci)

<p>下一个数。给定一个正整数，找出与其二进制表达式中1的个数相同且大小最接近的那两个数（一个略大，一个略小）。</p>

<p> <strong>示例1:</strong></p>

<pre>
<strong> 输入</strong>：num = 2（或者0b10）
<strong> 输出</strong>：[4, 1] 或者（[0b100, 0b1]）
</pre>

<p> <strong>示例2:</strong></p>

<pre>
<strong> 输入</strong>：num = 1
<strong> 输出</strong>：[2, -1]
</pre>

<p> <strong>提示:</strong></p>

<ol>
<li><code>num</code>的范围在[1, 2147483647]之间；</li>
<li>如果找不到前一个或者后一个满足条件的正数，那么输出 -1。</li>
</ol>
