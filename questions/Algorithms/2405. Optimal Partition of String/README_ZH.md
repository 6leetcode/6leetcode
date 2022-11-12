### [子字符串的最优划分](https://leetcode-cn.com/problems/optimal-partition-of-string)

<p>给你一个字符串 <code>s</code> ，请你将该字符串划分成一个或多个 <strong>子字符串</strong> ，并满足每个子字符串中的字符都是 <strong>唯一</strong> 的。也就是说，在单个子字符串中，字母的出现次数都不超过 <strong>一次</strong> 。</p>

<p>满足题目要求的情况下，返回 <strong>最少</strong> 需要划分多少个子字符串<em>。</em></p>

<p>注意，划分后，原字符串中的每个字符都应该恰好属于一个子字符串。</p>

<p>&nbsp;</p>

<p><strong>示例 1：</strong></p>

<pre>
<strong>输入：</strong>s = "abacaba"
<strong>输出：</strong>4
<strong>解释：</strong>
两种可行的划分方法分别是 ("a","ba","cab","a") 和 ("ab","a","ca","ba") 。
可以证明最少需要划分 4 个子字符串。
</pre>

<p><strong>示例 2：</strong></p>

<pre>
<strong>输入：</strong>s = "ssssss"
<strong>输出：</strong>6
<strong>解释：
</strong>只存在一种可行的划分方法 ("s","s","s","s","s","s") 。
</pre>

<p>&nbsp;</p>

<p><strong>提示：</strong></p>

<ul>
	<li><code>1 &lt;= s.length &lt;= 10<sup>5</sup></code></li>
	<li><code>s</code> 仅由小写英文字母组成</li>
</ul>
