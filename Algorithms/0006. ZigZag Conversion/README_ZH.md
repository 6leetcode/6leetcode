### [Z 字形变换](https://leetcode-cn.com/problems/zigzag-conversion)

<p>将一个给定字符串根据给定的行数，以从上往下、从左到右进行&nbsp;Z 字形排列。</p>

<p>比如输入字符串为 <code>&quot;LEETCODEISHIRING&quot;</code>&nbsp;行数为 3 时，排列如下：</p>

<pre>L   C   I   R
E T O E S I I G
E   D   H   N
</pre>

<p>之后，你的输出需要从左往右逐行读取，产生出一个新的字符串，比如：<code>&quot;LCIRETOESIIGEDHN&quot;</code>。</p>

<p>请你实现这个将字符串进行指定行数变换的函数：</p>

<pre>string convert(string s, int numRows);</pre>

<p><strong>示例&nbsp;1:</strong></p>

<pre><strong>输入:</strong> s = &quot;LEETCODEISHIRING&quot;, numRows = 3
<strong>输出:</strong> &quot;LCIRETOESIIGEDHN&quot;
</pre>

<p><strong>示例&nbsp;2:</strong></p>

<pre><strong>输入:</strong> s = &quot;LEETCODEISHIRING&quot;, numRows =&nbsp;4
<strong>输出:</strong>&nbsp;&quot;LDREOEIIECIHNTSG&quot;
<strong>解释:</strong>

L     D     R
E   O E   I I
E C   I H   N
T     S     G</pre>
