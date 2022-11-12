### [替换字符后匹配](https://leetcode-cn.com/problems/match-substring-after-replacement)

<p>给你两个字符串&nbsp;<code>s</code> 和&nbsp;<code>sub</code>&nbsp;。同时给你一个二维字符数组&nbsp;<code>mappings</code> ，其中&nbsp;<code>mappings[i] = [old<sub>i</sub>, new<sub>i</sub>]</code>&nbsp;表示你可以将&nbsp;<code>sub</code>&nbsp;中任意数目的&nbsp;<code>old<sub>i</sub></code>&nbsp;字符替换为&nbsp;<code>new<sub>i</sub></code>&nbsp;。<code>sub</code>&nbsp;中每个字符 <b>不能</b>&nbsp;被替换超过一次。</p>

<p>如果使用 <code>mappings</code>&nbsp;替换 0 个或者若干个字符，可以将 <code>sub</code>&nbsp;变成 <code>s</code>&nbsp;的一个子字符串，请你返回&nbsp;<code>true</code>，否则返回&nbsp;<code>false</code>&nbsp;。</p>

<p>一个 <strong>子字符串</strong>&nbsp;是字符串中连续非空的字符序列。</p>

<p>&nbsp;</p>

<p><strong>示例 1：</strong></p>

<pre>
<b>输入：</b>s = "fool3e7bar", sub = "leet", mappings = [["e","3"],["t","7"],["t","8"]]
<b>输出：</b>true
<b>解释：</b>将 sub 中第一个 'e' 用 '3' 替换，将 't' 用 '7' 替换。
现在 sub = "l3e7" ，它是 s 的子字符串，所以我们返回 true 。</pre>

<p><strong>示例 2：</strong></p>

<pre>
<b>输入：</b>s = "fooleetbar", sub = "f00l", mappings = [["o","0"]]
<b>输出：</b>false
<b>解释：</b>字符串 "f00l" 不是 s 的子串且没有可以进行的修改。
注意我们不能用 'o' 替换 '0' 。
</pre>

<p><strong>示例 3：</strong></p>

<pre>
<b>输入：</b>s = "Fool33tbaR", sub = "leetd", mappings = [["e","3"],["t","7"],["t","8"],["d","b"],["p","b"]]
<b>输出：</b>true
<b>解释：</b>将 sub 里第一个和第二个 'e' 用 '3' 替换，用 'b' 替换 sub 里的 'd' 。
得到 sub = "l33tb" ，它是 s 的子字符串，所以我们返回 true 。
</pre>

<p>&nbsp;</p>

<p><strong>提示：</strong></p>

<ul>
	<li><code>1 &lt;= sub.length &lt;= s.length &lt;= 5000</code></li>
	<li><code>0 &lt;= mappings.length &lt;= 1000</code></li>
	<li><code>mappings[i].length == 2</code></li>
	<li><code>old<sub>i</sub> != new<sub>i</sub></code></li>
	<li><code>s</code> 和&nbsp;<code>sub</code>&nbsp;只包含大写和小写英文字母和数字。</li>
	<li><code>old<sub>i</sub></code> 和&nbsp;<code>new<sub>i</sub></code>&nbsp;是大写、小写字母或者是个数字。</li>
</ul>
