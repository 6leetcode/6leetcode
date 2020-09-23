### [一和零](https://leetcode-cn.com/problems/ones-and-zeroes)

<p>在计算机界中，我们总是追求用有限的资源获取最大的收益。</p>

<p>现在，假设你分别支配着 <strong>m</strong> 个&nbsp;<code>0</code>&nbsp;和 <strong>n</strong> 个&nbsp;<code>1</code>。另外，还有一个仅包含&nbsp;<code>0</code>&nbsp;和&nbsp;<code>1</code>&nbsp;字符串的数组。</p>

<p>你的任务是使用给定的&nbsp;<strong>m</strong> 个&nbsp;<code>0</code>&nbsp;和 <strong>n</strong> 个&nbsp;<code>1</code>&nbsp;，找到能拼出存在于数组中的字符串的最大数量。每个&nbsp;<code>0</code>&nbsp;和&nbsp;<code>1</code>&nbsp;至多被使用<strong>一次</strong>。</p>

<p>&nbsp;</p>

<p><strong>示例 1:</strong></p>

<pre><strong>输入:</strong> strs = [&quot;10&quot;, &quot;0001&quot;, &quot;111001&quot;, &quot;1&quot;, &quot;0&quot;], m = 5, n = 3
<strong>输出:</strong> 4
<strong>解释:</strong> 总共 4 个字符串可以通过 5 个 0 和 3 个 1 拼出，即 &quot;10&quot;,&quot;0001&quot;,&quot;1&quot;,&quot;0&quot; 。
</pre>

<p><strong>示例 2:</strong></p>

<pre><strong>输入:</strong> strs = [&quot;10&quot;, &quot;0&quot;, &quot;1&quot;], m = 1, n = 1
<strong>输出:</strong> 2
<strong>解释:</strong> 你可以拼出 &quot;10&quot;，但之后就没有剩余数字了。更好的选择是拼出 &quot;0&quot; 和 &quot;1&quot; 。
</pre>

<p>&nbsp;</p>

<p><strong>提示：</strong></p>

<ul>
	<li><code>1 &lt;= strs.length &lt;= 600</code></li>
	<li><code>1 &lt;= strs[i].length &lt;= 100</code></li>
	<li><code>strs[i]</code>&nbsp;仅由&nbsp;&#39;0&#39; 和&nbsp;&#39;1&#39; 组成</li>
	<li><code>1 &lt;= m, n &lt;= 100</code></li>
</ul>
