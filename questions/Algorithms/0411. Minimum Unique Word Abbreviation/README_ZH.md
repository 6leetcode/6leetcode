### [最短特异单词缩写](https://leetcode-cn.com/problems/minimum-unique-word-abbreviation)

<p>字符串&nbsp;<code>&quot;word&quot;</code> 包含以下这些缩写形式：</p>

<pre>[&quot;word&quot;, &quot;1ord&quot;, &quot;w1rd&quot;, &quot;wo1d&quot;, &quot;wor1&quot;, &quot;2rd&quot;, &quot;w2d&quot;, &quot;wo2&quot;, &quot;1o1d&quot;, &quot;1or1&quot;, &quot;w1r1&quot;, &quot;1o2&quot;, &quot;2r1&quot;, &quot;3d&quot;, &quot;w3&quot;, &quot;4&quot;]</pre>

<p>给一个目标字符串和一个字符串字典，为目标字符串找一个&nbsp;<strong>最短 </strong>长度的缩写字符串，同时这个缩写字符串不是字典中其他字符串的缩写形式。</p>

<p>缩写形式中每一个 <strong>数字</strong>&nbsp;或者字母都被视为长度为 1 。比方说，缩写形式 &quot;a32bc&quot; 的长度为 4 而不是 5 。</p>

<p><strong>注意:</strong></p>

<ul>
	<li>如果像第二个示例一样有多个有效答案，你可以返回它们中的任意一个。</li>
	<li>假设目标字符串的长度为&nbsp;<strong>m </strong>，字典中的字符串数目为&nbsp;<strong>n</strong>&nbsp;。你可以假设&nbsp;<strong>m &le; 21</strong>，&nbsp;<strong>n &le; 1000</strong>，&nbsp;且&nbsp;<strong>log<sub>2</sub>(n) + m &le; 20</strong>.</li>
</ul>

<p>&nbsp;</p>

<p><strong>示例:</strong></p>

<pre>&quot;apple&quot;, [&quot;blade&quot;] -&gt; &quot;a4&quot; (因为 &quot;5&quot; 或者 &quot;4e&quot; 同时也是 &quot;blade&quot; 的缩写形式，所以它们是无效的缩写)

&quot;apple&quot;, [&quot;plain&quot;, &quot;amber&quot;, &quot;blade&quot;] -&gt; &quot;1p3&quot; (其他有效的缩写形式还包括 &quot;ap3&quot;, &quot;a3e&quot;, &quot;2p2&quot;, &quot;3le&quot;, &quot;3l1&quot;)。
</pre>

<p>&nbsp;</p>
