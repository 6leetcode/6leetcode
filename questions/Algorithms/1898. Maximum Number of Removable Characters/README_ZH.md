### [可移除字符的最大数目](https://leetcode-cn.com/problems/maximum-number-of-removable-characters)

<p>给你两个字符串 <code>s</code> 和 <code>p</code> ，其中 <code>p</code> 是 <code>s</code> 的一个 <strong>子序列</strong> 。同时，给你一个元素 <strong>互不相同</strong> 且下标 <strong>从 0 开始</strong> 计数的整数数组 <code>removable</code> ，该数组是 <code>s</code> 中下标的一个子集（<code>s</code> 的下标也 <strong>从 0 开始</strong> 计数）。</p>

<p>请你找出一个整数 <code>k</code>（<code>0 <= k <= removable.length</code>），选出 <code>removable</code> 中的 <strong>前</strong> <code>k</code> 个下标，然后从 <code>s</code> 中移除这些下标对应的 <code>k</code> 个字符。整数 <code>k</code> 需满足：在执行完上述步骤后， <code>p</code> 仍然是 <code>s</code> 的一个 <strong>子序列</strong> 。更正式的解释是，对于每个 <code>0 <= i < k</code> ，先标记出位于 <code>s[removable[i]]</code> 的字符，接着移除所有标记过的字符，然后检查 <code>p</code> 是否仍然是 <code>s</code> 的一个子序列。</p>

<p>返回你可以找出的 <strong>最大</strong><em> </em><code>k</code><em> </em>，满足在移除字符后<em> </em><code>p</code><em> </em>仍然是 <code>s</code> 的一个子序列。</p>

<p>字符串的一个 <strong>子序列</strong> 是一个由原字符串生成的新字符串，生成过程中可能会移除原字符串中的一些字符（也可能不移除）但不改变剩余字符之间的相对顺序。</p>

<p> </p>

<p><strong>示例 1：</strong></p>

<pre>
<strong>输入：</strong>s = "abcacb", p = "ab", removable = [3,1,0]
<strong>输出：</strong>2
<strong>解释：</strong>在移除下标 3 和 1 对应的字符后，"a<strong>b</strong>c<strong>a</strong>cb" 变成 "accb" 。
"ab" 是 "<strong>a</strong>cc<strong>b</strong>" 的一个子序列。
如果移除下标 3、1 和 0 对应的字符后，"<strong>ab</strong>c<strong>a</strong>cb" 变成 "ccb" ，那么 "ab" 就不再是 s 的一个子序列。
因此，最大的 k 是 2 。
</pre>

<p><strong>示例 2：</strong></p>

<pre>
<strong>输入：</strong>s = "abcbddddd", p = "abcd", removable = [3,2,1,4,5,6]
<strong>输出：</strong>1
<strong>解释：</strong>在移除下标 3 对应的字符后，"abc<strong>b</strong>ddddd" 变成 "abcddddd" 。
"abcd" 是 "<strong>abcd</strong>dddd" 的一个子序列。
</pre>

<p><strong>示例 3：</strong></p>

<pre>
<strong>输入：</strong>s = "abcab", p = "abc", removable = [0,1,2,3,4]
<strong>输出：</strong>0
<strong>解释：</strong>如果移除数组 removable 的第一个下标，"abc" 就不再是 s 的一个子序列。
</pre>

<p> </p>

<p><strong>提示：</strong></p>

<ul>
	<li><code>1 <= p.length <= s.length <= 10<sup>5</sup></code></li>
	<li><code>0 <= removable.length < s.length</code></li>
	<li><code>0 <= removable[i] < s.length</code></li>
	<li><code>p</code> 是 <code>s</code> 的一个 <strong>子字符串</strong></li>
	<li><code>s</code> 和 <code>p</code> 都由小写英文字母组成</li>
	<li><code>removable</code> 中的元素 <strong>互不相同</strong></li>
</ul>
