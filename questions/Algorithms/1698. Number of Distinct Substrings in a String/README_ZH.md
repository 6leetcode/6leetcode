### [字符串的不同子字符串个数](https://leetcode-cn.com/problems/number-of-distinct-substrings-in-a-string)

<p>给定一个字符串 <code>s</code>，返回 <code>s</code> 的不同子字符串的个数。</p>

<p>字符串的 <strong>子字符串 </strong>是由原字符串删除开头若干个字符（可能是 0 个）并删除结尾若干个字符（可能是 0 个）形成的字符串。</p>

<p> </p>

<p><strong>示例 1：</strong></p>

<pre>
<strong>输入：</strong>s = "aabbaba"
<strong>输出：</strong>21
<strong>解释：</strong>不同子字符串的集合是 ["a","b","aa","bb","ab","ba","aab","abb","bab","bba","aba","aabb","abba","bbab","baba","aabba","abbab","bbaba","aabbab","abbaba","aabbaba"]
</pre>

<p><strong>示例 2：</strong></p>

<pre>
<strong>输入：</strong>s = "abcdefg"
<strong>输出：</strong>28
</pre>

<p> </p>

<p><strong>提示：</strong></p>

<ul>
	<li><code>1 <= s.length <= 500</code></li>
	<li><code>s</code> 由小写英文字母组成。</li>
</ul>

<p><b>进阶：</b>你可以以 <code>O(n)</code> 时间复杂度解决此问题吗？</p>
