### [反转之后的数字和](https://leetcode-cn.com/problems/sum-of-number-and-its-reverse)

<p>给你一个 <strong>非负</strong> 整数 <code>num</code> 。如果存在某个 <strong>非负</strong> 整数 <code>k</code> 满足 <code>k + reverse(k) = num</code>&nbsp; ，则返回 <code>true</code> ；否则，返回<em> </em><code>false</code> 。</p>

<p><code>reverse(k)</code> 表示 <code>k</code> 反转每个数位后得到的数字。</p>

<p>&nbsp;</p>

<p><strong>示例 1：</strong></p>

<pre>
<strong>输入：</strong>num = 443
<strong>输出：</strong>true
<strong>解释：</strong>172 + 271 = 443 ，所以返回 true 。
</pre>

<p><strong>示例 2：</strong></p>

<pre>
<strong>输入：</strong>num = 63
<strong>输出：</strong>false
<strong>解释：</strong>63 不能表示为非负整数及其反转后数字之和，返回 false 。
</pre>

<p><strong>示例 3：</strong></p>

<pre>
<strong>输入：</strong>num = 181
<strong>输出：</strong>true
<strong>解释：</strong>140 + 041 = 181 ，所以返回 true 。注意，反转后的数字可能包含前导零。
</pre>

<p>&nbsp;</p>

<p><strong>提示：</strong></p>

<ul>
	<li><code>0 &lt;= num &lt;= 10<sup>5</sup></code></li>
</ul>
