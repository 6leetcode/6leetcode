### [使两字符串互为字母异位词的最少步骤数](https://leetcode-cn.com/problems/minimum-number-of-steps-to-make-two-strings-anagram-ii)

<p>给你两个字符串 <code>s</code> 和 <code>t</code> 。在一步操作中，你可以给 <code>s</code> 或者 <code>t</code> 追加 <strong>任一字符</strong> 。</p>

<p>返回使 <code>s</code> 和 <code>t</code> 互为 <strong>字母异位词</strong> 所需的最少步骤数<em>。</em></p>

<p><strong>字母异位词 </strong>指字母相同但是顺序不同（或者相同）的字符串。</p>

<p>&nbsp;</p>

<p><strong>示例 1：</strong></p>

<pre><strong>输入：</strong>s = "<em><strong>lee</strong>t</em>co<em><strong>de</strong></em>", t = "co<em><strong>a</strong></em>t<em><strong>s</strong></em>"
<strong>输出：</strong>7
<strong>解释：</strong>
- 执行 2 步操作，将 "as" 追加到 s = "leetcode" 中，得到 s = "leetcode<em><strong>as</strong></em>" 。
- 执行 5 步操作，将 "leede" 追加到 t = "coats" 中，得到 t = "coats<em><strong>leede</strong></em>" 。
"leetcodeas" 和 "coatsleede" 互为字母异位词。
总共用去 2 + 5 = 7 步。
可以证明，无法用少于 7 步操作使这两个字符串互为字母异位词。</pre>

<p><strong>示例 2：</strong></p>

<pre><strong>输入：</strong>s = "night", t = "thing"
<strong>输出：</strong>0
<strong>解释：</strong>给出的字符串已经互为字母异位词。因此，不需要任何进一步操作。
</pre>

<p>&nbsp;</p>

<p><strong>提示：</strong></p>

<ul>
	<li><code>1 &lt;= s.length, t.length &lt;= 2 * 10<sup>5</sup></code></li>
	<li><code>s</code> 和 <code>t</code> 由小写英文字符组成</li>
</ul>
