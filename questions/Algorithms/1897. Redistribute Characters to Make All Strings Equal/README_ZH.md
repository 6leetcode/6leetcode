### [重新分配字符使所有字符串都相等](https://leetcode-cn.com/problems/redistribute-characters-to-make-all-strings-equal)

<p>给你一个字符串数组 <code>words</code>（下标 <strong>从 0 开始</strong> 计数）。</p>

<p>在一步操作中，需先选出两个 <strong>不同</strong> 下标 <code>i</code> 和 <code>j</code>，其中 <code>words[i]</code> 是一个非空字符串，接着将 <code>words[i]</code> 中的 <strong>任一</strong> 字符移动到 <code>words[j]</code> 中的 <strong>任一</strong> 位置上。</p>

<p>如果执行任意步操作可以使 <code>words</code> 中的每个字符串都相等，返回 <code>true</code><em> </em>；否则，返回<em> </em><code>false</code> 。</p>

<p> </p>

<p><strong>示例 1：</strong></p>

<pre><strong>输入：</strong>words = ["abc","aabc","bc"]
<strong>输出：</strong>true
<strong>解释：</strong>将 <code>words[1] 中的第一个</code> 'a' 移动到<code> words[2] 的最前面。
使 </code><code>words[1]</code> = "abc" 且 words[2] = "abc" 。
所有字符串都等于 "abc" ，所以返回 <code>true</code> 。
</pre>

<p><strong>示例 2：</strong></p>

<pre><strong>输入：</strong>words = ["ab","a"]
<strong>输出：</strong>false
<strong>解释：</strong>执行操作无法使所有字符串都相等。
</pre>

<p> </p>

<p><strong>提示：</strong></p>

<ul>
	<li><code>1 &lt;= words.length &lt;= 100</code></li>
	<li><code>1 &lt;= words[i].length &lt;= 100</code></li>
	<li><code>words[i]</code> 由小写英文字母组成</li>
</ul>
