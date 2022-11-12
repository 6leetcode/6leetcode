### [对字母串可执行的最大删除数](https://leetcode-cn.com/problems/maximum-deletions-on-a-string)

<p>给你一个仅由小写英文字母组成的字符串 <code>s</code> 。在一步操作中，你可以：</p>

<ul>
	<li>删除 <strong>整个字符串</strong> <code>s</code> ，或者</li>
	<li>对于满足&nbsp;<code>1 &lt;= i &lt;= s.length / 2</code> 的任意 <code>i</code> ，如果 <code>s</code> 中的 <strong>前</strong> <code>i</code> 个字母和接下来的 <code>i</code> 个字母 <strong>相等</strong> ，删除 <strong>前</strong> <code>i</code> 个字母。</li>
</ul>

<p>例如，如果 <code>s = "ababc"</code> ，那么在一步操作中，你可以删除 <code>s</code> 的前两个字母得到 <code>"abc"</code> ，因为 <code>s</code> 的前两个字母和接下来的两个字母都等于 <code>"ab"</code> 。</p>

<p>返回删除 <code>s</code> 所需的最大操作数。</p>

<p>&nbsp;</p>

<p><strong>示例 1：</strong></p>

<pre>
<strong>输入：</strong>s = "abcabcdabc"
<strong>输出：</strong>2
<strong>解释：</strong>
- 删除前 3 个字母（"abc"），因为它们和接下来 3 个字母相等。现在，s = "abcdabc"。
- 删除全部字母。
一共用了 2 步操作，所以返回 2 。可以证明 2 是所需的最大操作数。
注意，在第二步操作中无法再次删除 "abc" ，因为 "abc" 的下一次出现并不是位于接下来的 3 个字母。
</pre>

<p><strong>示例 2：</strong></p>

<pre>
<strong>输入：</strong>s = "aaabaab"
<strong>输出：</strong>4
<strong>解释：</strong>
- 删除第一个字母（"a"），因为它和接下来的字母相等。现在，s = "aabaab"。
- 删除前 3 个字母（"aab"），因为它们和接下来 3 个字母相等。现在，s = "aab"。 
- 删除第一个字母（"a"），因为它和接下来的字母相等。现在，s = "ab"。
- 删除全部字母。
一共用了 4 步操作，所以返回 4 。可以证明 4 是所需的最大操作数。
</pre>

<p><strong>示例 3：</strong></p>

<pre>
<strong>输入：</strong>s = "aaaaa"
<strong>输出：</strong>5
<strong>解释：</strong>在每一步操作中，都可以仅删除 s 的第一个字母。
</pre>

<p>&nbsp;</p>

<p><strong>提示：</strong></p>

<ul>
	<li><code>1 &lt;= s.length &lt;= 4000</code></li>
	<li><code>s</code> 仅由小写英文字母组成</li>
</ul>
