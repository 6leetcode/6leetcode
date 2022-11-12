### [字符串的总引力](https://leetcode-cn.com/problems/total-appeal-of-a-string)

<p>字符串的 <strong>引力</strong> 定义为：字符串中 <strong>不同</strong> 字符的数量。</p>

<ul>
	<li>例如，<code>"abbca"</code> 的引力为 <code>3</code> ，因为其中有 <code>3</code> 个不同字符 <code>'a'</code>、<code>'b'</code> 和 <code>'c'</code> 。</li>
</ul>

<p>给你一个字符串 <code>s</code> ，返回 <strong>其所有子字符串的总引力</strong> <strong>。</strong></p>

<p><strong>子字符串</strong> 定义为：字符串中的一个连续字符序列。</p>

<p>&nbsp;</p>

<p><strong>示例 1：</strong></p>

<pre><strong>输入：</strong>s = "abbca"
<strong>输出：</strong>28
<strong>解释：</strong>"abbca" 的子字符串有：
- 长度为 1 的子字符串："a"、"b"、"b"、"c"、"a" 的引力分别为 1、1、1、1、1，总和为 5 。
- 长度为 2 的子字符串："ab"、"bb"、"bc"、"ca" 的引力分别为 2、1、2、2 ，总和为 7 。
- 长度为 3 的子字符串："abb"、"bbc"、"bca" 的引力分别为 2、2、3 ，总和为 7 。
- 长度为 4 的子字符串："abbc"、"bbca" 的引力分别为 3、3 ，总和为 6 。
- 长度为 5 的子字符串："abbca" 的引力为 3 ，总和为 3 。
引力总和为 5 + 7 + 7 + 6 + 3 = 28 。
</pre>

<p><strong>示例 2：</strong></p>

<pre><strong>输入：</strong>s = "code"
<strong>输出：</strong>20
<strong>解释：</strong>"code" 的子字符串有：
- 长度为 1 的子字符串："c"、"o"、"d"、"e" 的引力分别为 1、1、1、1 ，总和为 4 。
- 长度为 2 的子字符串："co"、"od"、"de" 的引力分别为 2、2、2 ，总和为 6 。
- 长度为 3 的子字符串："cod"、"ode" 的引力分别为 3、3 ，总和为 6 。
- 长度为 4 的子字符串："code" 的引力为 4 ，总和为 4 。
引力总和为 4 + 6 + 6 + 4 = 20 。
</pre>

<p>&nbsp;</p>

<p><strong>提示：</strong></p>

<ul>
	<li><code>1 &lt;= s.length &lt;= 10<sup>5</sup></code></li>
	<li><code>s</code> 由小写英文字母组成</li>
</ul>
