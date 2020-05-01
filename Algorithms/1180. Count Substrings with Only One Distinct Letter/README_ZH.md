### [统计只含单一字母的子串](https://leetcode-cn.com/problems/count-substrings-with-only-one-distinct-letter)

<p>给你一个字符串 <code>S</code>，返回只含 <strong>单一字母</strong> 的子串个数。</p>

<p><strong>示例 1：</strong></p>

<pre><strong>输入： </strong>&quot;aaaba&quot;
<strong>输出： </strong>8
<strong>解释： 
</strong>只含单一字母的子串分别是 &quot;aaa&quot;， &quot;aa&quot;， &quot;a&quot;， &quot;b&quot;。
&quot;aaa&quot; 出现 1 次。
&quot;aa&quot; 出现 2 次。
&quot;a&quot; 出现 4 次。
&quot;b&quot; 出现 1 次。
所以答案是 1 + 2 + 4 + 1 = 8。
</pre>

<p><strong>示例 2:</strong></p>

<pre><strong>输入： </strong>&quot;aaaaaaaaaa&quot;
<strong>输出： </strong>55
</pre>

<p>&nbsp;</p>

<p><strong>提示：</strong></p>

<ol>
	<li><code>1 &lt;= S.length &lt;= 1000</code></li>
	<li><code>S[i]</code> 仅由小写英文字母组成。</li>
</ol>
