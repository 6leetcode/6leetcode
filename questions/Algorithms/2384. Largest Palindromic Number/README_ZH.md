### [最大回文数字](https://leetcode-cn.com/problems/largest-palindromic-number)

<p>给你一个仅由数字（<code>0 - 9</code>）组成的字符串 <code>num</code> 。</p>

<p>请你找出能够使用 <code>num</code> 中数字形成的 <strong>最大回文</strong> 整数，并以字符串形式返回。该整数不含 <strong>前导零</strong> 。</p>

<p><strong>注意：</strong></p>

<ul>
	<li>你 <strong>无需</strong> 使用 <code>num</code> 中的所有数字，但你必须使用 <strong>至少</strong> 一个数字。</li>
	<li>数字可以重新排序。</li>
</ul>

<p>&nbsp;</p>

<p><strong>示例 1：</strong></p>

<pre>
<strong>输入：</strong>num = "444947137"
<strong>输出：</strong>"7449447"
<strong>解释：</strong>
从 "<em><strong>44494</strong></em><em><strong>7</strong></em>13<em><strong>7</strong></em>" 中选用数字 "4449477"，可以形成回文整数 "7449447" 。
可以证明 "7449447" 是能够形成的最大回文整数。
</pre>

<p><strong>示例 2：</strong></p>

<pre>
<strong>输入：</strong>num = "00009"
<strong>输出：</strong>"9"
<strong>解释：</strong>
可以证明 "9" 能够形成的最大回文整数。
注意返回的整数不应含前导零。
</pre>

<p>&nbsp;</p>

<p><strong>提示：</strong></p>

<ul>
	<li><code>1 &lt;= num.length &lt;= 10<sup>5</sup></code></li>
	<li><code>num</code> 由数字（<code>0 - 9</code>）组成</li>
</ul>
