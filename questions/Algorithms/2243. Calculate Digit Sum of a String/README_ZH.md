### [计算字符串的数字和](https://leetcode-cn.com/problems/calculate-digit-sum-of-a-string)

<p>给你一个由若干数字（<code>0</code> - <code>9</code>）组成的字符串 <code>s</code> ，和一个整数。</p>

<p>如果 <code>s</code> 的长度大于 <code>k</code> ，则可以执行一轮操作。在一轮操作中，需要完成以下工作：</p>

<ol>
	<li>将 <code>s</code> <strong>拆分 </strong>成长度为 <code>k</code> 的若干 <strong>连续数字组</strong> ，使得前 <code>k</code> 个字符都分在第一组，接下来的 <code>k</code> 个字符都分在第二组，依此类推。<strong>注意</strong>，最后一个数字组的长度可以小于 <code>k</code> 。</li>
	<li>用表示每个数字组中所有数字之和的字符串来 <strong>替换</strong> 对应的数字组。例如，<code>"346"</code> 会替换为 <code>"13"</code> ，因为 <code>3 + 4 + 6 = 13</code> 。</li>
	<li><strong>合并</strong> 所有组以形成一个新字符串。如果新字符串的长度大于 <code>k</code> 则重复第一步。</li>
</ol>

<p>返回在完成所有轮操作后的 <code>s</code> 。</p>

<p>&nbsp;</p>

<p><strong>示例 1：</strong></p>

<pre><strong>输入：</strong>s = "11111222223", k = 3
<strong>输出：</strong>"135"
<strong>解释：</strong>
- 第一轮，将 s 分成："111"、"112"、"222" 和 "23" 。
  接着，计算每一组的数字和：1 + 1 + 1 = 3、1 + 1 + 2 = 4、2 + 2 + 2 = 6 和 2 + 3 = 5 。 
&nbsp; 这样，s 在第一轮之后变成 "3" + "4" + "6" + "5" = "3465" 。
- 第二轮，将 s 分成："346" 和 "5" 。
&nbsp; 接着，计算每一组的数字和：3 + 4 + 6 = 13 、5 = 5 。
&nbsp; 这样，s 在第二轮之后变成 "13" + "5" = "135" 。 
现在，s.length &lt;= k ，所以返回 "135" 作为答案。
</pre>

<p><strong>示例 2：</strong></p>

<pre><strong>输入：</strong>s = "00000000", k = 3
<strong>输出：</strong>"000"
<strong>解释：</strong>
将 "000", "000", and "00".
接着，计算每一组的数字和：0 + 0 + 0 = 0 、0 + 0 + 0 = 0 和 0 + 0 = 0 。 
s 变为 "0" + "0" + "0" = "000" ，其长度等于 k ，所以返回 "000" 。
</pre>

<p>&nbsp;</p>

<p><strong>提示：</strong></p>

<ul>
	<li><code>1 &lt;= s.length &lt;= 100</code></li>
	<li><code>2 &lt;= k &lt;= 100</code></li>
	<li><code>s</code> 仅由数字（<code>0</code> - <code>9</code>）组成。</li>
</ul>
