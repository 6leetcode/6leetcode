### [数组形式的整数加法](https://leetcode-cn.com/problems/add-to-array-form-of-integer)

<p>整数的 <strong>数组形式</strong> &nbsp;<code>num</code>&nbsp;是按照从左到右的顺序表示其数字的数组。</p>

<ul>
	<li>例如，对于 <code>num = 1321</code> ，数组形式是 <code>[1,3,2,1]</code> 。</li>
</ul>

<p>给定 <code>num</code> ，整数的 <strong>数组形式</strong> ，和整数 <code>k</code> ，返回 <em>整数 <code>num + k</code> 的 <strong>数组形式</strong></em> 。</p>

<p>&nbsp;</p>

<ol>
</ol>

<p><strong>示例 1：</strong></p>

<pre>
<strong>输入：</strong>num = [1,2,0,0], k = 34
<strong>输出：</strong>[1,2,3,4]
<strong>解释：</strong>1200 + 34 = 1234
</pre>

<p><strong>示例 2：</strong></p>

<pre>
<strong>输入：</strong>num = [2,7,4], k = 181
<strong>输出：</strong>[4,5,5]
<strong>解释：</strong>274 + 181 = 455
</pre>

<p><strong>示例 3：</strong></p>

<pre>
<strong>输入：</strong>num = [2,1,5], k = 806
<strong>输出：</strong>[1,0,2,1]
<strong>解释：</strong>215 + 806 = 1021
</pre>

<p>&nbsp;</p>

<p><strong>提示：</strong></p>

<ul>
	<li><code>1 &lt;= num.length &lt;= 10<sup>4</sup></code></li>
	<li><code>0 &lt;= num[i] &lt;= 9</code></li>
	<li><code>num</code>&nbsp;不包含任何前导零，除了零本身</li>
	<li><code>1 &lt;= k &lt;= 10<sup>4</sup></code></li>
</ul>
