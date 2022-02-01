### [段式回文](https://leetcode-cn.com/problems/longest-chunked-palindrome-decomposition)

<p>你会得到一个字符串&nbsp;<code>text</code>&nbsp;。你应该把它分成 <code>k</code>&nbsp;个子字符串&nbsp;<code>(subtext1, subtext2，…， subtextk)</code>&nbsp;，要求满足:</p>

<ul>
	<li><code>subtext<sub>i</sub></code><sub>&nbsp;</sub>是非空字符串</li>
	<li>所有子字符串的连接等于 <code>text</code> ( 即<code>subtext<sub>1</sub>&nbsp;+ subtext<sub>2</sub>&nbsp;+ ... + subtext<sub>k</sub>&nbsp;== text</code>&nbsp;)</li>
	<li><code>subtext<sub>i</sub>&nbsp;== subtext<sub>k - i + 1</sub></code><sub>&nbsp;</sub>表示所有 <font color="#c7254e"><font face="Menlo, Monaco, Consolas, Courier New, monospace"><span style="font-size:12.6px"><span style="background-color:#f9f2f4">i</span></span></font></font>&nbsp;的有效值( 即&nbsp;<code>1 &lt;= i&nbsp;&lt;= k</code> )</li>
</ul>

<p>返回<code>k</code>可能最大值。</p>

<p>&nbsp;</p>

<p><strong>示例 1：</strong></p>

<pre>
<strong>输入：</strong>text = "ghiabcdefhelloadamhelloabcdefghi"
<strong>输出：</strong>7
<strong>解释：</strong>我们可以把字符串拆分成 "(ghi)(abcdef)(hello)(adam)(hello)(abcdef)(ghi)"。
</pre>

<p><strong>示例 2：</strong></p>

<pre>
<strong>输入：</strong>text = "merchant"
<strong>输出：</strong>1
<strong>解释：</strong>我们可以把字符串拆分成 "(merchant)"。
</pre>

<p><strong>示例 3：</strong></p>

<pre>
<strong>输入：</strong>text = "antaprezatepzapreanta"
<strong>输出：</strong>11
<strong>解释：</strong>我们可以把字符串拆分成 "(a)(nt)(a)(pre)(za)(tpe)(za)(pre)(a)(nt)(a)"。
</pre>

<p><strong>示例 4：</strong></p>

<pre>
<strong>输入：</strong>text = "aaa"
<strong>输出：</strong>3
<strong>解释：</strong>我们可以把字符串拆分成 "(a)(a)(a)"。
</pre>

<p>&nbsp;</p>

<p><strong>提示：</strong></p>

<ul>
	<li><code>1 &lt;= text.length &lt;= 1000</code></li>
	<li><code>text</code>&nbsp;仅由小写英文字符组成</li>
</ul>
