### [字符串中的加粗单词](https://leetcode-cn.com/problems/bold-words-in-string)

<p>给定一个关键词集合&nbsp;<code>words</code> 和一个字符串&nbsp;<code>S</code>，将所有 <code>S</code> 中出现的关键词加粗。所有在标签 <code>&lt;b&gt;</code> 和&nbsp;<code>&lt;/b&gt;</code>&nbsp;中的字母都会加粗。</p>

<p>返回的字符串需要使用尽可能少的标签，当然标签应形成有效的组合。</p>

<p>例如，给定&nbsp;<code>words = [&quot;ab&quot;, &quot;bc&quot;]</code> 和&nbsp;<code>S = &quot;aabcd&quot;</code>，需要返回&nbsp;<code>&quot;a&lt;b&gt;abc&lt;/b&gt;d&quot;</code>。注意返回&nbsp;<code>&quot;a&lt;b&gt;a&lt;b&gt;b&lt;/b&gt;c&lt;/b&gt;d&quot;</code>&nbsp;会使用更多的标签，因此是错误的。</p>

<p>&nbsp;</p>

<p><strong>注：</strong></p>

<ol>
	<li><code>words</code> 长度的范围为&nbsp;<code>[0, 50]</code>。</li>
	<li><code>words[i]</code> 长度的范围为&nbsp;<code>[1, 10]</code>。</li>
	<li><code>S</code> 长度的范围为&nbsp;<code>[0, 500]</code>。</li>
	<li>所有&nbsp;<code>words[i]</code>&nbsp;和&nbsp;<code>S</code>&nbsp;中的字符都为小写字母。</li>
</ol>

<p>&nbsp;</p>
