### [找出最长的超赞子字符串](https://leetcode-cn.com/problems/find-longest-awesome-substring)

<p>给你一个字符串 <code>s</code> 。请返回 <code>s</code> 中最长的 <strong>超赞子字符串</strong> 的长度。</p>

<p>「超赞子字符串」需满足满足下述两个条件：</p>

<ul>
	<li>该字符串是 <code>s</code> 的一个非空子字符串</li>
	<li>进行任意次数的字符交换后，该字符串可以变成一个回文字符串</li>
</ul>

<p>&nbsp;</p>

<p><strong>示例 1：</strong></p>

<pre><strong>输入：</strong>s = &quot;3242415&quot;
<strong>输出：</strong>5
<strong>解释：</strong>&quot;24241&quot; 是最长的超赞子字符串，交换其中的字符后，可以得到回文 &quot;24142&quot;
</pre>

<p><strong>示例 2：</strong></p>

<pre><strong>输入：</strong>s = &quot;12345678&quot;
<strong>输出：</strong>1
</pre>

<p><strong>示例 3：</strong></p>

<pre><strong>输入：</strong>s = &quot;213123&quot;
<strong>输出：</strong>6
<strong>解释：</strong>&quot;213123&quot; 是最长的超赞子字符串，交换其中的字符后，可以得到回文 &quot;231132&quot;
</pre>

<p><strong>示例 4：</strong></p>

<pre><strong>输入：</strong>s = &quot;00&quot;
<strong>输出：</strong>2
</pre>

<p>&nbsp;</p>

<p><strong>提示：</strong></p>

<ul>
	<li><code>1 &lt;= s.length &lt;= 10^5</code></li>
	<li><code>s</code> 仅由数字组成</li>
</ul>
