### [找到字符串中所有字母异位词](https://leetcode-cn.com/problems/find-all-anagrams-in-a-string)

<p>给定两个字符串 <code>s</code> 和 <code>p</code>，找到 <code>s</code><strong> </strong>中所有 <code>p</code><strong> </strong>的 <strong>异位词 </strong>的子串，返回这些子串的起始索引。不考虑答案输出的顺序。</p>

<p><strong>异位词 </strong>指字母相同，但排列不同的字符串。</p>

<p> </p>

<p><strong>示例 1:</strong></p>

<pre>
<strong>输入: </strong>s = "cbaebabacd", p = "abc"
<strong>输出: </strong>[0,6]
<strong>解释:</strong>
起始索引等于 0 的子串是 "cba", 它是 "abc" 的异位词。
起始索引等于 6 的子串是 "bac", 它是 "abc" 的异位词。
</pre>

<p><strong> 示例 2:</strong></p>

<pre>
<strong>输入: </strong>s = "abab", p = "ab"
<strong>输出: </strong>[0,1,2]
<strong>解释:</strong>
起始索引等于 0 的子串是 "ab", 它是 "ab" 的异位词。
起始索引等于 1 的子串是 "ba", 它是 "ab" 的异位词。
起始索引等于 2 的子串是 "ab", 它是 "ab" 的异位词。
</pre>

<p> </p>

<p><strong>提示:</strong></p>

<ul>
	<li><code>1 <= s.length, p.length <= 3 * 10<sup>4</sup></code></li>
	<li><code>s</code> 和 <code>p</code> 仅包含小写字母</li>
</ul>
