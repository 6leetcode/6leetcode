### [得到回文串的最少操作次数](https://leetcode-cn.com/problems/minimum-number-of-moves-to-make-palindrome)

<p>给你一个只包含小写英文字母的字符串&nbsp;<code>s</code>&nbsp;。</p>

<p>每一次 <strong>操作</strong>&nbsp;，你可以选择 <code>s</code>&nbsp;中两个 <strong>相邻</strong>&nbsp;的字符，并将它们交换。</p>

<p>请你返回将 <code>s</code>&nbsp;变成回文串的 <strong>最少操作次数</strong>&nbsp;。</p>

<p><strong>注意</strong>&nbsp;，输入数据会确保&nbsp;<code>s</code>&nbsp;一定能变成一个回文串。</p>

<p>&nbsp;</p>

<p><strong>示例 1：</strong></p>

<pre><b>输入：</b>s = "aabb"
<b>输出：</b>2
<strong>解释：</strong>
我们可以将 s 变成 2 个回文串，"abba" 和 "baab" 。
- 我们可以通过 2 次操作得到 "abba" ："a<em><strong>ab</strong></em>b" -&gt; "ab<em><strong>ab</strong></em>" -&gt; "abba" 。
- 我们可以通过 2 次操作得到 "baab" ："a<em><strong>ab</strong></em>b" -&gt; "<em><strong>ab</strong></em>ab" -&gt; "baab" 。
因此，得到回文串的最少总操作次数为 2 。
</pre>

<p><strong>示例 2：</strong></p>

<pre><b>输入：</b>s = "letelt"
<b>输出：</b>2
<strong>解释：</strong>
通过 2 次操作从 s 能得到回文串 "lettel" 。
其中一种方法是："lete<em><strong>lt</strong></em>" -&gt; "let<em><strong>et</strong></em>l" -&gt; "lettel" 。
其他回文串比方说 "tleelt" 也可以通过 2 次操作得到。
可以证明少于 2 次操作，无法得到回文串。
</pre>

<p>&nbsp;</p>

<p><strong>提示：</strong></p>

<ul>
	<li><code>1 &lt;= s.length &lt;= 2000</code></li>
	<li><code>s</code>&nbsp;只包含小写英文字母。</li>
	<li><code>s</code>&nbsp;可以通过有限次操作得到一个回文串。</li>
</ul>
