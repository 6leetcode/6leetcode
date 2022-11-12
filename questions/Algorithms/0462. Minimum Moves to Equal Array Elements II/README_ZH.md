### [最小操作次数使数组元素相等 II](https://leetcode-cn.com/problems/minimum-moves-to-equal-array-elements-ii)

<p>给你一个长度为 <code>n</code> 的整数数组 <code>nums</code> ，返回使所有数组元素相等需要的最小操作数。</p>

<p>在一次操作中，你可以使数组中的一个元素加 <code>1</code> 或者减 <code>1</code> 。</p>

<p>&nbsp;</p>

<p><strong>示例 1：</strong></p>

<pre>
<strong>输入：</strong>nums = [1,2,3]
<strong>输出：</strong>2
<strong>解释：</strong>
只需要两次操作（每次操作指南使一个元素加 1 或减 1）：
[<strong><em>1</em></strong>,2,3]  =&gt;  [2,2,<strong><em>3</em></strong>]  =&gt;  [2,2,2]
</pre>

<p><strong>示例 2：</strong></p>

<pre>
<strong>输入：</strong>nums = [1,10,2,9]
<strong>输出：</strong>16
</pre>

<p>&nbsp;</p>

<p><strong>提示：</strong></p>

<ul>
	<li><code>n == nums.length</code></li>
	<li><code>1 &lt;= nums.length &lt;= 10<sup>5</sup></code></li>
	<li><code>-10<sup>9</sup> &lt;= nums[i] &lt;= 10<sup>9</sup></code></li>
</ul>
