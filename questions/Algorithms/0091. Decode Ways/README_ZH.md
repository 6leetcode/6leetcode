### [解码方法](https://leetcode-cn.com/problems/decode-ways)

<p>一条包含字母 <code>A-Z</code> 的消息通过以下映射进行了 <strong>编码</strong> ：</p>

<pre>
'A' -> 1
'B' -> 2
...
'Z' -> 26
</pre>

<p>要 <strong>解码</strong> 已编码的消息，所有数字必须基于上述映射的方法，反向映射回字母（可能有多种方法）。例如，<code>"111"</code> 可以将 <code>"1"</code> 中的每个 <code>"1"</code> 映射为 <code>"A"</code> ，从而得到 <code>"AAA"</code> ，或者可以将 <code>"11"</code> 和 <code>"1"</code>（分别为 <code>"K"</code> 和 <code>"A"</code> ）映射为 <code>"KA"</code> 。注意，<code>"06"</code> 不能映射为 <code>"F"</code> ，因为 <code>"6"</code> 和 <code>"06"</code> 不同。</p>

<p>给你一个只含数字的 <strong>非空 </strong>字符串 <code>num</code> ，请计算并返回 <strong>解码</strong> 方法的 <strong>总数</strong> 。</p>

<p>题目数据保证答案肯定是一个 <strong>32 位</strong> 的整数。</p>

<p> </p>

<p><strong>示例 1：</strong></p>

<pre>
<strong>输入：</strong>s = "12"
<strong>输出：</strong>2
<strong>解释：</strong>它可以解码为 "AB"（1 2）或者 "L"（12）。
</pre>

<p><strong>示例 2：</strong></p>

<pre>
<strong>输入：</strong>s = "226"
<strong>输出：</strong>3
<strong>解释：</strong>它可以解码为 "BZ" (2 26), "VF" (22 6), 或者 "BBF" (2 2 6) 。
</pre>

<p><strong>示例 3：</strong></p>

<pre>
<strong>输入：</strong>s = "0"
<strong>输出：</strong>0
<strong>解释：</strong>没有字符映射到以 0 开头的数字。含有 0 的有效映射是 'J' -> "10" 和 'T'-> "20" 。由于没有字符，因此没有有效的方法对此进行解码，因为所有数字都需要映射。
</pre>

<p><strong>示例 4：</strong></p>

<pre>
<strong>输入：</strong>s = "1"
<strong>输出：</strong>1
</pre>

<p> </p>

<p><strong>提示：</strong></p>

<ul>
	<li><code>1 <= s.length <= 100</code></li>
	<li><code>s</code> 只包含数字，并且可能包含前导零。</li>
</ul>
