### [相似度为 K 的字符串](https://leetcode-cn.com/problems/k-similar-strings)

<p>对于某些非负整数 <code>k</code> ，如果交换 <code>s1</code> 中两个字母的位置恰好 <code>k</code> 次，能够使结果字符串等于 <code>s2</code> ，则认为字符串 <code>s1</code> 和 <code>s2</code> 的<strong> 相似度为 </strong><code>k</code><strong> </strong><strong>。</strong></p>

<p>给你两个字母异位词 <code>s1</code> 和 <code>s2</code> ，返回 <code>s1</code> 和 <code>s2</code> 的相似度 <code>k</code><strong> </strong>的最小值。</p>

<p>&nbsp;</p>

<p><strong>示例 1：</strong></p>

<pre>
<strong>输入：</strong>s1 = "ab", s2 = "ba"
<strong>输出：</strong>1
</pre>

<p><strong>示例 2：</strong></p>

<pre>
<strong>输入：</strong>s1 = "abc", s2 = "bca"
<strong>输出：</strong>2
</pre>

<p>&nbsp;</p>

<p><strong>提示：</strong></p>

<ul>
	<li><code>1 &lt;= s1.length &lt;= 20</code></li>
	<li><code>s2.length == s1.length</code></li>
	<li><code>s1</code>&nbsp;和&nbsp;<code>s2</code>&nbsp;&nbsp;只包含集合&nbsp;<code>{'a', 'b', 'c', 'd', 'e', 'f'}</code>&nbsp;中的小写字母</li>
	<li><code>s2</code> 是 <code>s1</code> 的一个字母异位词</li>
</ul>
