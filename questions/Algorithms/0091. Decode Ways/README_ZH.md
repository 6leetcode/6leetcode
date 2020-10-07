### [解码方法](https://leetcode-cn.com/problems/decode-ways)

<p>一条包含字母&nbsp;<code>A-Z</code> 的消息通过以下方式进行了编码：</p>

<pre>&#39;A&#39; -&gt; 1
&#39;B&#39; -&gt; 2
...
&#39;Z&#39; -&gt; 26
</pre>

<p>给定一个只包含数字的<strong>非空</strong>字符串，请计算解码方法的总数。</p>

<p>题目数据保证答案肯定是一个 32 位的整数。</p>

<p>&nbsp;</p>

<p><strong>示例 1：</strong></p>

<pre><strong>输入：</strong>&quot;12&quot;
<strong>输出：</strong>2
<strong>解释：</strong>它可以解码为 &quot;AB&quot;（1 2）或者 &quot;L&quot;（12）。
</pre>

<p><strong>示例 2：</strong></p>

<pre><strong>输入：</strong>&quot;226&quot;
<strong>输出：</strong>3
<strong>解释：</strong>它可以解码为 &quot;BZ&quot; (2 26), &quot;VF&quot; (22 6), 或者 &quot;BBF&quot; (2 2 6) 。
</pre>

<p><strong>示例 3：</strong></p>

<pre><strong>输入：</strong>s = &quot;0&quot;
<strong>输出：</strong>0
</pre>

<p><strong>示例 4：</strong></p>

<pre><strong>输入：</strong>s = &quot;1&quot;
<strong>输出：</strong>1
</pre>

<p><strong>示例 5：</strong></p>

<pre><strong>输入：</strong>s = &quot;2&quot;
<strong>输出：</strong>1
</pre>

<p>&nbsp;</p>

<p><strong>提示：</strong></p>

<ul>
	<li><code>1 &lt;= s.length &lt;= 100</code></li>
	<li><code>s</code> 只包含数字，并且可以包含前导零。</li>
</ul>
