### [让字符串成为回文串的最少插入次数](https://leetcode-cn.com/problems/minimum-insertion-steps-to-make-a-string-palindrome)

<p>给你一个字符串&nbsp;<code>s</code>&nbsp;，每一次操作你都可以在字符串的任意位置插入任意字符。</p>

<p>请你返回让&nbsp;<code>s</code>&nbsp;成为回文串的&nbsp;<strong>最少操作次数</strong>&nbsp;。</p>

<p>「回文串」是正读和反读都相同的字符串。</p>

<p>&nbsp;</p>

<p><strong>示例 1：</strong></p>

<pre>
<strong>输入：</strong>s = &quot;zzazz&quot;
<strong>输出：</strong>0
<strong>解释：</strong>字符串 &quot;zzazz&quot; 已经是回文串了，所以不需要做任何插入操作。
</pre>

<p><strong>示例 2：</strong></p>

<pre>
<strong>输入：</strong>s = &quot;mbadm&quot;
<strong>输出：</strong>2
<strong>解释：</strong>字符串可变为 &quot;mbdadbm&quot; 或者 &quot;mdbabdm&quot; 。
</pre>

<p><strong>示例 3：</strong></p>

<pre>
<strong>输入：</strong>s = &quot;leetcode&quot;
<strong>输出：</strong>5
<strong>解释：</strong>插入 5 个字符后字符串变为 &quot;leetcodocteel&quot; 。
</pre>

<p><strong>示例 4：</strong></p>

<pre>
<strong>输入：</strong>s = &quot;g&quot;
<strong>输出：</strong>0
</pre>

<p><strong>示例 5：</strong></p>

<pre>
<strong>输入：</strong>s = &quot;no&quot;
<strong>输出：</strong>1
</pre>

<p>&nbsp;</p>

<p><strong>提示：</strong></p>

<ul>
	<li><code>1 &lt;= s.length &lt;= 500</code></li>
	<li><code>s</code>&nbsp;中所有字符都是小写字母。</li>
</ul>
