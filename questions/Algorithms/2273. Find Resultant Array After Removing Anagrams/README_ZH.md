### [移除字母异位词后的结果数组](https://leetcode-cn.com/problems/find-resultant-array-after-removing-anagrams)

<p>给你一个下标从 <strong>0</strong> 开始的字符串 <code>words</code> ，其中 <code>words[i]</code> 由小写英文字符组成。</p>

<p>在一步操作中，需要选出任一下标 <code>i</code> ，从 <code>words</code> 中 <strong>删除</strong> <code>words[i]</code> 。其中下标 <code>i</code> 需要同时满足下述两个条件：</p>

<ol>
	<li><code>0 &lt; i &lt; words.length</code></li>
	<li><code>words[i - 1]</code> 和 <code>words[i]</code> 是 <strong>字母异位词</strong> 。</li>
</ol>

<p>只要可以选出满足条件的下标，就一直执行这个操作。</p>

<p>在执行所有操作后，返回 <code>words</code> 。可以证明，按任意顺序为每步操作选择下标都会得到相同的结果。</p>

<p><strong>字母异位词</strong> 是由重新排列源单词的字母得到的一个新单词，所有源单词中的字母通常恰好只用一次。例如，<code>"dacb"</code> 是 <code>"abdc"</code> 的一个字母异位词。</p>

<p>&nbsp;</p>

<p><strong>示例 1：</strong></p>

<pre><strong>输入：</strong>words = ["abba","baba","bbaa","cd","cd"]
<strong>输出：</strong>["abba","cd"]
<strong>解释：</strong>
获取结果数组的方法之一是执行下述步骤：
- 由于 words[2] = "bbaa" 和 words[1] = "baba" 是字母异位词，选择下标 2 并删除 words[2] 。
  现在 words = ["abba","baba","cd","cd"] 。
- 由于 words[1] = "baba" 和 words[0] = "abba" 是字母异位词，选择下标 1 并删除 words[1] 。
  现在 words = ["abba","cd","cd"] 。
- 由于 words[2] = "cd" 和 words[1] = "cd" 是字母异位词，选择下标 2 并删除 words[2] 。
  现在 words = ["abba","cd"] 。
无法再执行任何操作，所以 ["abba","cd"] 是最终答案。</pre>

<p><strong>示例 2：</strong></p>

<pre><strong>输入：</strong>words = ["a","b","c","d","e"]
<strong>输出：</strong>["a","b","c","d","e"]
<strong>解释：</strong>
words 中不存在互为字母异位词的两个相邻字符串，所以无需执行任何操作。</pre>

<p>&nbsp;</p>

<p><strong>提示：</strong></p>

<ul>
	<li><code>1 &lt;= words.length &lt;= 100</code></li>
	<li><code>1 &lt;= words[i].length &lt;= 10</code></li>
	<li><code>words[i]</code> 由小写英文字母组成</li>
</ul>
