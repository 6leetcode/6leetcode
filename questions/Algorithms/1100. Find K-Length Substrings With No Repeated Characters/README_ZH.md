### [长度为 K 的无重复字符子串](https://leetcode-cn.com/problems/find-k-length-substrings-with-no-repeated-characters)

<p>给你一个字符串&nbsp;<code>S</code>，找出所有长度为&nbsp;<code>K</code>&nbsp;且不含重复字符的子串，请你返回全部满足要求的子串的&nbsp;<strong>数目</strong>。</p>

<p>&nbsp;</p>

<p><strong>示例 1：</strong></p>

<pre><strong>输入：</strong>S = &quot;havefunonleetcode&quot;, K = 5
<strong>输出：</strong>6
<strong>解释：</strong>
这里有 6 个满足题意的子串，分别是：&#39;havef&#39;,&#39;avefu&#39;,&#39;vefun&#39;,&#39;efuno&#39;,&#39;etcod&#39;,&#39;tcode&#39;。
</pre>

<p><strong>示例 2：</strong></p>

<pre><strong>输入：</strong>S = &quot;home&quot;, K = 5
<strong>输出：</strong>0
<strong>解释：</strong>
注意：K 可能会大于 S 的长度。在这种情况下，就无法找到任何长度为 K 的子串。</pre>

<p>&nbsp;</p>

<p><strong>提示：</strong></p>

<ol>
	<li><code>1 &lt;= S.length &lt;= 10^4</code></li>
	<li><code>S</code> 中的所有字符均为小写英文字母</li>
	<li><code>1 &lt;= K &lt;= 10^4</code></li>
</ol>
