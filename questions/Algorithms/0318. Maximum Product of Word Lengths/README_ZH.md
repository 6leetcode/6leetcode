### [最大单词长度乘积](https://leetcode-cn.com/problems/maximum-product-of-word-lengths)

<p>给定一个字符串数组 <code>words</code>，找到 <code>length(word[i]) * length(word[j])</code> 的最大值，并且这两个单词不含有公共字母。你可以认为每个单词只包含小写字母。如果不存在这样的两个单词，返回 0。</p>

<p> </p>

<p><strong>示例 1:</strong></p>

<pre>
<strong>输入:</strong> <code>["abcw","baz","foo","bar","xtfn","abcdef"]</code>
<strong>输出: </strong><code>16 
<strong>解释:</strong> 这两个单词为<strong> </strong></code><code>"abcw", "xtfn"</code>。</pre>

<p><strong>示例 2:</strong></p>

<pre>
<strong>输入:</strong> <code>["a","ab","abc","d","cd","bcd","abcd"]</code>
<strong>输出: </strong><code>4 
<strong>解释: </strong></code>这两个单词为 <code>"ab", "cd"</code>。</pre>

<p><strong>示例 3:</strong></p>

<pre>
<strong>输入:</strong> <code>["a","aa","aaa","aaaa"]</code>
<strong>输出: </strong><code>0 
<strong>解释: </strong>不存在这样的两个单词。</code>
</pre>

<p> </p>

<p><strong>提示：</strong></p>

<ul>
	<li><code>2 <= words.length <= 1000</code></li>
	<li><code>1 <= words[i].length <= 1000</code></li>
	<li><code>words[i]</code> 仅包含小写字母</li>
</ul>
