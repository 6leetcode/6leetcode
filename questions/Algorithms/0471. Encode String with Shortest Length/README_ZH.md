### [编码最短长度的字符串](https://leetcode-cn.com/problems/encode-string-with-shortest-length)

<p>给定一个 <strong>非空</strong>&nbsp;字符串，将其编码为具有最短长度的字符串。</p>

<p>编码规则是：<code>k[encoded_string]</code>，其中在方括号&nbsp;<em>encoded_string </em>中的内容重复 <em>k</em> 次。</p>

<p><strong>注：</strong></p>

<ol>
	<li><em>k</em>&nbsp;为正整数且编码后的字符串不能为空或有额外的空格。</li>
	<li>你可以假定输入的字符串只包含小写的英文字母。字符串长度不超过 160。</li>
	<li>如果编码的过程不能使字符串缩短，则不要对其进行编码。如果有多种编码方式，返回任意一种即可。</li>
</ol>

<p>&nbsp;</p>

<p><strong>示例 1：</strong></p>

<pre>输入： &quot;aaa&quot;
输出： &quot;aaa&quot;
解释： 无法将其编码为更短的字符串，因此不进行编码。
</pre>

<p>&nbsp;</p>

<p><strong>示例 2：</strong></p>

<pre>输入： &quot;aaaaa&quot;
输出： &quot;5[a]&quot;
解释： &quot;5[a]&quot; 比 &quot;aaaaa&quot; 短 1 个字符。
</pre>

<p>&nbsp;</p>

<p><strong>示例 3：</strong></p>

<pre>输入： &quot;aaaaaaaaaa&quot;
输出： &quot;10[a]&quot;
解释： &quot;a9[a]&quot; 或 &quot;9[a]a&quot; 都是合法的编码，和 &quot;10[a]&quot; 一样长度都为 5。
</pre>

<p>&nbsp;</p>

<p><strong>示例 4：</strong></p>

<pre>输入： &quot;aabcaabcd&quot;
输出： &quot;2[aabc]d&quot;
解释： &quot;aabc&quot; 出现两次，因此一种答案可以是 &quot;2[aabc]d&quot;。
</pre>

<p>&nbsp;</p>

<p><strong>示例 5：</strong></p>

<pre>输入： &quot;abbbabbbcabbbabbbc&quot;
输出： &quot;2[2[abbb]c]&quot;
解释： &quot;abbbabbbc&quot; 出现两次，但是 &quot;abbbabbbc&quot; 可以编码为 &quot;2[abbb]c&quot;，因此一种答案可以是 &quot;2[2[abbb]c]&quot;。
</pre>

<p>&nbsp;</p>
