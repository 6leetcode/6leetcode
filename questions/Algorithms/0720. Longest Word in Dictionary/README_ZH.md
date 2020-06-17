### [词典中最长的单词](https://leetcode-cn.com/problems/longest-word-in-dictionary)

<p>给出一个字符串数组<code>words</code>组成的一本英语词典。从中找出最长的一个单词，该单词是由<code>words</code>词典中其他单词逐步添加一个字母组成。若其中有多个可行的答案，则返回答案中字典序最小的单词。</p>

<p>若无答案，则返回空字符串。</p>

<p><strong>示例 1:</strong></p>

<pre>
<strong>输入:</strong> 
words = [&quot;w&quot;,&quot;wo&quot;,&quot;wor&quot;,&quot;worl&quot;, &quot;world&quot;]
<strong>输出:</strong> &quot;world&quot;
<strong>解释:</strong> 
单词&quot;world&quot;可由&quot;w&quot;, &quot;wo&quot;, &quot;wor&quot;, 和 &quot;worl&quot;添加一个字母组成。
</pre>

<p><strong>示例 2:</strong></p>

<pre>
<strong>输入:</strong> 
words = [&quot;a&quot;, &quot;banana&quot;, &quot;app&quot;, &quot;appl&quot;, &quot;ap&quot;, &quot;apply&quot;, &quot;apple&quot;]
<strong>输出:</strong> &quot;apple&quot;
<strong>解释:</strong> 
&quot;apply&quot;和&quot;apple&quot;都能由词典中的单词组成。但是&quot;apple&quot;得字典序小于&quot;apply&quot;。
</pre>

<p><strong>注意:</strong></p>

<ul>
	<li>所有输入的字符串都只包含小写字母。</li>
	<li><code>words</code>数组长度范围为<code>[1,1000]</code>。</li>
	<li><code>words[i]</code>的长度范围为<code>[1,30]</code>。</li>
</ul>
