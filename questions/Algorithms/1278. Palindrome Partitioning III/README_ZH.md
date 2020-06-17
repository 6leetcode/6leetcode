### [分割回文串 III](https://leetcode-cn.com/problems/palindrome-partitioning-iii)

<p>给你一个由小写字母组成的字符串&nbsp;<code>s</code>，和一个整数&nbsp;<code>k</code>。</p>

<p>请你按下面的要求分割字符串：</p>

<ul>
	<li>首先，你可以将&nbsp;<code>s</code>&nbsp;中的部分字符修改为其他的小写英文字母。</li>
	<li>接着，你需要把&nbsp;<code>s</code>&nbsp;分割成&nbsp;<code>k</code>&nbsp;个非空且不相交的子串，并且每个子串都是回文串。</li>
</ul>

<p>请返回以这种方式分割字符串所需修改的最少字符数。</p>

<p>&nbsp;</p>

<p><strong>示例 1：</strong></p>

<pre><strong>输入：</strong>s = &quot;abc&quot;, k = 2
<strong>输出：</strong>1
<strong>解释：</strong>你可以把字符串分割成 &quot;ab&quot; 和 &quot;c&quot;，并修改 &quot;ab&quot; 中的 1 个字符，将它变成回文串。
</pre>

<p><strong>示例 2：</strong></p>

<pre><strong>输入：</strong>s = &quot;aabbc&quot;, k = 3
<strong>输出：</strong>0
<strong>解释：</strong>你可以把字符串分割成 &quot;aa&quot;、&quot;bb&quot; 和 &quot;c&quot;，它们都是回文串。</pre>

<p><strong>示例 3：</strong></p>

<pre><strong>输入：</strong>s = &quot;leetcode&quot;, k = 8
<strong>输出：</strong>0
</pre>

<p>&nbsp;</p>

<p><strong>提示：</strong></p>

<ul>
	<li><code>1 &lt;= k &lt;= s.length &lt;= 100</code></li>
	<li><code>s</code>&nbsp;中只含有小写英文字母。</li>
</ul>
