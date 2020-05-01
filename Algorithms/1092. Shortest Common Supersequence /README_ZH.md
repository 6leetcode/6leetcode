### [最短公共超序列](https://leetcode-cn.com/problems/shortest-common-supersequence)

<p>给出两个字符串&nbsp;<code>str1</code> 和&nbsp;<code>str2</code>，返回同时以&nbsp;<code>str1</code>&nbsp;和&nbsp;<code>str2</code>&nbsp;作为子序列的最短字符串。如果答案不止一个，则可以返回满足条件的任意一个答案。</p>

<p>（如果从字符串 T 中删除一些字符（也可能不删除，并且选出的这些字符可以位于 T 中的&nbsp;<strong>任意位置</strong>），可以得到字符串 S，那么&nbsp;S 就是&nbsp;T 的子序列）</p>

<p>&nbsp;</p>

<p><strong>示例：</strong></p>

<pre><strong>输入：</strong>str1 = &quot;abac&quot;, str2 = &quot;cab&quot;
<strong>输出：</strong>&quot;cabac&quot;
<strong>解释：</strong>
str1 = &quot;abac&quot; 是 &quot;cabac&quot; 的一个子串，因为我们可以删去 &quot;cabac&quot; 的第一个 &quot;c&quot;得到 &quot;abac&quot;。 
str2 = &quot;cab&quot; 是 &quot;cabac&quot; 的一个子串，因为我们可以删去 &quot;cabac&quot; 末尾的 &quot;ac&quot; 得到 &quot;cab&quot;。
最终我们给出的答案是满足上述属性的最短字符串。
</pre>

<p>&nbsp;</p>

<p><strong>提示：</strong></p>

<ol>
	<li><code>1 &lt;= str1.length, str2.length &lt;= 1000</code></li>
	<li><code>str1</code> 和&nbsp;<code>str2</code>&nbsp;都由小写英文字母组成。</li>
</ol>
