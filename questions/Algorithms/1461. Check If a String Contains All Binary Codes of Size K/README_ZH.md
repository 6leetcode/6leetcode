### [检查一个字符串是否包含所有长度为 K 的二进制子串](https://leetcode-cn.com/problems/check-if-a-string-contains-all-binary-codes-of-size-k)

<p>给你一个二进制字符串&nbsp;<code>s</code>&nbsp;和一个整数&nbsp;<code>k</code>&nbsp;。</p>

<p>如果所有长度为 <code>k</code>&nbsp;的二进制字符串都是 <code>s</code>&nbsp;的子串，请返回 True ，否则请返回 False 。</p>

<p>&nbsp;</p>

<p><strong>示例 1：</strong></p>

<pre><strong>输入：</strong>s = &quot;00110110&quot;, k = 2
<strong>输出：</strong>true
<strong>解释：</strong>长度为 2 的二进制串包括 &quot;00&quot;，&quot;01&quot;，&quot;10&quot; 和 &quot;11&quot;。它们分别是 s 中下标为 0，1，3，2 开始的长度为 2 的子串。
</pre>

<p><strong>示例 2：</strong></p>

<pre><strong>输入：</strong>s = &quot;00110&quot;, k = 2
<strong>输出：</strong>true
</pre>

<p><strong>示例 3：</strong></p>

<pre><strong>输入：</strong>s = &quot;0110&quot;, k = 1
<strong>输出：</strong>true
<strong>解释：</strong>长度为 1 的二进制串包括 &quot;0&quot; 和 &quot;1&quot;，显然它们都是 s 的子串。
</pre>

<p><strong>示例 4：</strong></p>

<pre><strong>输入：</strong>s = &quot;0110&quot;, k = 2
<strong>输出：</strong>false
<strong>解释：</strong>长度为 2 的二进制串 &quot;00&quot; 没有出现在 s 中。
</pre>

<p><strong>示例 5：</strong></p>

<pre><strong>输入：</strong>s = &quot;0000000001011100&quot;, k = 4
<strong>输出：</strong>false
</pre>

<p>&nbsp;</p>

<p><strong>提示：</strong></p>

<ul>
	<li><code>1 &lt;= s.length &lt;= 5 * 10^5</code></li>
	<li><code>s</code> 中只含 0 和 1 。</li>
	<li><code>1 &lt;= k &lt;= 20</code></li>
</ul>
