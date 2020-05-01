### [不同的子序列](https://leetcode-cn.com/problems/distinct-subsequences)

<p>给定一个字符串&nbsp;<strong>S&nbsp;</strong>和一个字符串&nbsp;<strong>T</strong>，计算在 <strong>S</strong> 的子序列中 <strong>T</strong> 出现的个数。</p>

<p>一个字符串的一个子序列是指，通过删除一些（也可以不删除）字符且不干扰剩余字符相对位置所组成的新字符串。（例如，<code>&quot;ACE&quot;</code>&nbsp;是&nbsp;<code>&quot;ABCDE&quot;</code>&nbsp;的一个子序列，而&nbsp;<code>&quot;AEC&quot;</code>&nbsp;不是）</p>

<p>题目数据保证答案符合 32 位带符号整数范围。</p>

<p>&nbsp;</p>

<p><strong>示例&nbsp;1：</strong></p>

<pre><strong>输入：</strong>S = <code>&quot;rabbbit&quot;</code>, T = <code>&quot;rabbit&quot;
<strong>输出</strong></code><strong>：</strong><code>3
</code><strong>解释：
</strong>
如下图所示, 有 3 种可以从 S 中得到 <code>&quot;rabbit&quot; 的方案</code>。
(上箭头符号 ^ 表示选取的字母)

<code>rabbbit</code>
^^^^ ^^
<code>rabbbit</code>
^^ ^^^^
<code>rabbbit</code>
^^^ ^^^
</pre>

<p><strong>示例&nbsp;2：</strong></p>

<pre><strong>输入：</strong>S = <code>&quot;babgbag&quot;</code>, T = <code>&quot;bag&quot;
<strong>输出</strong></code><strong>：</strong><code>5
</code><strong>解释：
</strong>
如下图所示, 有 5 种可以从 S 中得到 <code>&quot;bag&quot; 的方案</code>。 
(上箭头符号 ^ 表示选取的字母)

<code>babgbag</code>
^^ ^
<code>babgbag</code>
^^    ^
<code>babgbag</code>
^    ^^
<code>babgbag</code>
  ^  ^^
<code>babgbag</code>
    ^^^</pre>
