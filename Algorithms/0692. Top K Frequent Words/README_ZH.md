### [前K个高频单词](https://leetcode-cn.com/problems/top-k-frequent-words)

<p>给一非空的单词列表，返回前&nbsp;<em>k&nbsp;</em>个出现次数最多的单词。</p>

<p>返回的答案应该按单词出现频率由高到低排序。如果不同的单词有相同出现频率，按字母顺序排序。</p>

<p><strong>示例 1：</strong></p>

<pre>
<strong>输入:</strong> [&quot;i&quot;, &quot;love&quot;, &quot;leetcode&quot;, &quot;i&quot;, &quot;love&quot;, &quot;coding&quot;], k = 2
<strong>输出:</strong> [&quot;i&quot;, &quot;love&quot;]
<strong>解析:</strong> &quot;i&quot; 和 &quot;love&quot; 为出现次数最多的两个单词，均为2次。
    注意，按字母顺序 &quot;i&quot; 在 &quot;love&quot; 之前。
</pre>

<p>&nbsp;</p>

<p><strong>示例 2：</strong></p>

<pre>
<strong>输入:</strong> [&quot;the&quot;, &quot;day&quot;, &quot;is&quot;, &quot;sunny&quot;, &quot;the&quot;, &quot;the&quot;, &quot;the&quot;, &quot;sunny&quot;, &quot;is&quot;, &quot;is&quot;], k = 4
<strong>输出:</strong> [&quot;the&quot;, &quot;is&quot;, &quot;sunny&quot;, &quot;day&quot;]
<strong>解析:</strong> &quot;the&quot;, &quot;is&quot;, &quot;sunny&quot; 和 &quot;day&quot; 是出现次数最多的四个单词，
    出现次数依次为 4, 3, 2 和 1 次。
</pre>

<p>&nbsp;</p>

<p><strong>注意：</strong></p>

<ol>
	<li>假定 <em>k</em> 总为有效值， 1 &le; <em>k</em> &le; 集合元素数。</li>
	<li>输入的单词均由小写字母组成。</li>
</ol>

<p>&nbsp;</p>

<p><strong>扩展练习：</strong></p>

<ol>
	<li>尝试以&nbsp;<em>O</em>(<em>n</em> log <em>k</em>) 时间复杂度和&nbsp;<em>O</em>(<em>n</em>) 空间复杂度解决。</li>
</ol>
