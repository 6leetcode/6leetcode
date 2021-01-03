### [子数组最大平均数 II](https://leetcode-cn.com/problems/maximum-average-subarray-ii)

<p>给你一个包含 <code>n</code> 个整数的数组，请你找出<strong> 长度大于等于</strong> <code>k</code> 且含最大平均值的连续子数组。并输出这个最大平均值。</p>

<p> </p>

<p><strong>示例：</strong></p>

<pre>
<strong>输入：</strong>[1,12,-5,-6,50,3], k = 4
<strong>输出：</strong>12.75
<strong>解释：</strong>
当长度为 5 的时候，最大平均值是 10.8，
当长度为 6 的时候，最大平均值是 9.16667。
所以返回值是 12.75。
</pre>

<p> </p>

<p><strong>提示：</strong></p>

<ul>
	<li>1 <= <code>k</code> <= <code>n</code> <= 10,000。</li>
	<li>数组中的元素范围是 [-10,000, 10,000]。</li>
	<li>答案的计算误差小于 10<sup>-5</sup> 。</li>
</ul>
