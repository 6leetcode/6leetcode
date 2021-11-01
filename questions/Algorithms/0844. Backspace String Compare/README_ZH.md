### [比较含退格的字符串](https://leetcode-cn.com/problems/backspace-string-compare)

<p>给定 <code>s</code> 和 <code>t</code> 两个字符串，当它们分别被输入到空白的文本编辑器后，请你判断二者是否相等。<code>#</code> 代表退格字符。</p>

<p>如果相等，返回 <code>true</code> ；否则，返回 <code>false</code> 。</p>

<p><strong>注意：</strong>如果对空文本输入退格字符，文本继续为空。</p>

<p>&nbsp;</p>

<p><strong>示例 1：</strong></p>

<pre>
<strong>输入：</strong>s = "ab#c", t = "ad#c"
<strong>输出：</strong>true
<strong>解释：</strong>S 和 T 都会变成 “ac”。
</pre>

<p><strong>示例 2：</strong></p>

<pre>
<strong>输入：</strong>s = "ab##", t = "c#d#"
<strong>输出：</strong>true
<strong>解释：</strong>s 和 t 都会变成 “”。
</pre>

<p><strong>示例 3：</strong></p>

<pre>
<strong>输入：</strong>s = "a##c", t = "#a#c"
<strong>输出：</strong>true
<strong>解释：</strong>s 和 t 都会变成 “c”。
</pre>

<p><strong>示例 4：</strong></p>

<pre>
<strong>输入：</strong>s = "a#c", t = "b"
<strong>输出：</strong>false
<strong>解释：</strong>s 会变成 “c”，但 t 仍然是 “b”。</pre>

<p>&nbsp;</p>

<p><strong>提示：</strong></p>

<ul>
	<li><code><span>1 &lt;= s.length, t.length &lt;= 200</span></code></li>
	<li><code>s</code> 和 <code>t</code> 只含有小写字母以及字符 <code>'#'</code></li>
</ul>

<p>&nbsp;</p>

<p><strong>进阶：</strong></p>

<ul>
	<li>你可以用 <code>O(N)</code> 的时间复杂度和 <code>O(1)</code> 的空间复杂度解决该问题吗？</li>
</ul>

<p>&nbsp;</p>
