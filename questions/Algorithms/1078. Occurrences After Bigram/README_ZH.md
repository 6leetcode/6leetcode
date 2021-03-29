### [Bigram 分词](https://leetcode-cn.com/problems/occurrences-after-bigram)

<p>给出第一个词&nbsp;<code>first</code> 和第二个词&nbsp;<code>second</code>，考虑在某些文本&nbsp;<code>text</code>&nbsp;中可能以 &quot;<code>first second third</code>&quot; 形式出现的情况，其中&nbsp;<code>second</code>&nbsp;紧随&nbsp;<code>first</code>&nbsp;出现，<code>third</code>&nbsp;紧随&nbsp;<code>second</code>&nbsp;出现。</p>

<p>对于每种这样的情况，将第三个词 &quot;<code>third</code>&quot; 添加到答案中，并返回答案。</p>

<p>&nbsp;</p>

<p><strong>示例 1：</strong></p>

<pre><strong>输入：</strong>text = &quot;alice is a good girl she is a good student&quot;, first = &quot;a&quot;, second = &quot;good&quot;
<strong>输出：</strong>[&quot;girl&quot;,&quot;student&quot;]
</pre>

<p><strong>示例 2：</strong></p>

<pre><strong>输入：</strong>text = &quot;we will we will rock you&quot;, first = &quot;we&quot;, second = &quot;will&quot;
<strong>输出：</strong>[&quot;we&quot;,&quot;rock&quot;]
</pre>

<p>&nbsp;</p>

<p><strong>提示：</strong></p>

<ol>
	<li><code>1 &lt;= text.length &lt;= 1000</code></li>
	<li><code>text</code>&nbsp;由一些用空格分隔的单词组成，每个单词都由小写英文字母组成</li>
	<li><code>1 &lt;= first.length, second.length &lt;= 10</code></li>
	<li><code>first</code> 和&nbsp;<code>second</code>&nbsp;由小写英文字母组成</li>
</ol>
