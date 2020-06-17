### [火星词典](https://leetcode-cn.com/problems/alien-dictionary)

<p>现有一种使用字母的全新语言，这门语言的字母顺序与英语顺序不同。</p>

<p>假设，您并不知道其中字母之间的先后顺序。但是，会收到词典中获得一个&nbsp;<strong>不为空的&nbsp;</strong>单词列表。因为是从词典中获得的，所以该单词列表内的单词已经&nbsp;<strong>按这门新语言的字母顺序进行了排序</strong>。</p>

<p>您需要根据这个输入的列表，还原出此语言中已知的字母顺序。</p>

<p>&nbsp;</p>

<p><strong>示例 1：</strong></p>

<pre><strong>输入:</strong>
[
  &quot;wrt&quot;,
  &quot;wrf&quot;,
  &quot;er&quot;,
  &quot;ett&quot;,
  &quot;rftt&quot;
]
<strong>输出: </strong><code>&quot;wertf&quot;</code>
</pre>

<p><strong>示例 2：</strong></p>

<pre><strong>输入:</strong>
[
  &quot;z&quot;,
  &quot;x&quot;
]
<strong>输出: </strong><code>&quot;zx&quot;</code>
</pre>

<p><strong>示例 3：</strong></p>

<pre><strong>输入:</strong>
[
  &quot;z&quot;,
  &quot;x&quot;,
  &quot;z&quot;
] 
<strong>输出: </strong><code>&quot;&quot;</code>&nbsp;
<strong>解释:</strong> 此顺序是非法的，因此返回 <code>&quot;&quot;。</code>
</pre>

<p>&nbsp;</p>

<p><strong>提示：</strong></p>

<ul>
	<li>你可以默认输入的全部都是小写字母</li>
	<li>若给定的顺序是不合法的，则返回空字符串即可</li>
	<li>若存在多种可能的合法字母顺序，请返回其中任意一种顺序即可</li>
</ul>
