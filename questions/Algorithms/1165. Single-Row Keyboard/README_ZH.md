### [单行键盘](https://leetcode-cn.com/problems/single-row-keyboard)

<p>我们定制了一款特殊的力扣键盘，所有的键都排列在一行上。</p>

<p>我们可以按从左到右的顺序，用一个长度为 26 的字符串&nbsp;<code>keyboard</code>&nbsp;（索引从 0 开始，到 25 结束）来表示该键盘的键位布局。</p>

<p>现在需要测试这个键盘是否能够有效工作，那么我们就需要个机械手来测试这个键盘。</p>

<p>最初的时候，机械手位于左边起第一个键（也就是索引为 0 的键）的上方。当机械手移动到某一字符所在的键位时，就会在终端上输出该字符。</p>

<p>机械手从索引&nbsp;<code>i</code>&nbsp;移动到索引&nbsp;<code>j</code>&nbsp;所需要的时间是&nbsp;<code>|i - j|</code>。</p>

<p>当前测试需要你使用机械手输出指定的单词&nbsp;<code>word</code>，请你编写一个函数来计算机械手输出该单词所需的时间。</p>

<p>&nbsp;</p>

<p><strong>示例 1：</strong></p>

<pre><strong>输入：</strong>keyboard = &quot;abcdefghijklmnopqrstuvwxyz&quot;, word = &quot;cba&quot;
<strong>输出：</strong>4
<strong>解释：
</strong>机械手从 0 号键移动到 2 号键来输出 &#39;c&#39;，又移动到 1 号键来输出 &#39;b&#39;，接着移动到 0 号键来输出 &#39;a&#39;。
总用时 = 2 + 1 + 1 = 4. 
</pre>

<p><strong>示例 2：</strong></p>

<pre><strong>输入：</strong>keyboard = &quot;pqrstuvwxyzabcdefghijklmno&quot;, word = &quot;leetcode&quot;
<strong>输出：</strong>73
</pre>

<p>&nbsp;</p>

<p><strong>提示：</strong></p>

<ul>
	<li><code>keyboard.length == 26</code></li>
	<li><code>keyboard</code>&nbsp;按某种特定顺序排列，并包含每个小写英文字母一次。</li>
	<li><code>1 &lt;= word.length &lt;= 10^4</code></li>
	<li><code>word[i]</code>&nbsp;是一个小写英文字母</li>
</ul>
