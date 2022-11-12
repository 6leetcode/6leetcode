### [最大公因数等于 K 的子数组数目](https://leetcode-cn.com/problems/number-of-subarrays-with-gcd-equal-to-k)

<p>给你一个整数数组&nbsp;<code>nums</code>&nbsp;和一个整数&nbsp;<code>k</code> ，请你统计并返回 <code>nums</code>&nbsp;的子数组中元素的最大公因数等于 <code>k</code>&nbsp;的子数组数目。</p>

<p><strong>子数组</strong> 是数组中一个连续的非空序列。</p>

<p><strong>数组的最大公因数</strong>&nbsp;是能整除数组中所有元素的最大整数。</p>

<p>&nbsp;</p>

<p><b>示例 1：</b></p>

<pre><b>输入：</b>nums = [9,3,1,2,6,3], k = 3
<b>输出：</b>4
<b>解释：</b>nums 的子数组中，以 3 作为最大公因数的子数组如下：
- [9,<strong><em>3</em></strong>,1,2,6,3]
- [9,3,1,2,6,<em><strong>3</strong></em>]
- [<strong><em>9,3</em></strong>,1,2,6,3]
- [9,3,1,2,<em><strong>6,3</strong></em>]
</pre>

<p><b>示例 2：</b></p>

<pre><b>输入：</b>nums = [4], k = 7
<b>输出：</b>0
<b>解释：</b>不存在以 7 作为最大公因数的子数组。
</pre>

<p>&nbsp;</p>

<p><b>提示：</b></p>

<ul>
	<li><code>1 &lt;= nums.length &lt;= 1000</code></li>
	<li><code>1 &lt;= nums[i], k &lt;= 10<sup>9</sup></code></li>
</ul>
