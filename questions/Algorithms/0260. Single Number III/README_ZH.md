### [只出现一次的数字 III](https://leetcode-cn.com/problems/single-number-iii)

<p>给你一个整数数组&nbsp;<code>nums</code>，其中恰好有两个元素只出现一次，其余所有元素均出现两次。 找出只出现一次的那两个元素。你可以按 <strong>任意顺序</strong> 返回答案。</p>

<p>你必须设计并实现线性时间复杂度的算法且仅使用常量额外空间来解决此问题。</p>

<p>&nbsp;</p>

<p><strong>示例 1：</strong></p>

<pre>
<strong>输入：</strong>nums = [1,2,1,3,2,5]
<strong>输出：</strong>[3,5]
<strong>解释：</strong>[5, 3] 也是有效的答案。
</pre>

<p><strong>示例 2：</strong></p>

<pre>
<strong>输入：</strong>nums = [-1,0]
<strong>输出：</strong>[-1,0]
</pre>

<p><strong>示例 3：</strong></p>

<pre>
<strong>输入：</strong>nums = [0,1]
<strong>输出：</strong>[1,0]
</pre>

<p>&nbsp;</p>

<p><strong>提示：</strong></p>

<ul>
	<li><code>2 &lt;= nums.length &lt;= 3 * 10<sup>4</sup></code></li>
	<li><code>-2<sup>31</sup> &lt;= nums[i] &lt;= 2<sup>31</sup> - 1</code></li>
	<li>除两个只出现一次的整数外，<code>nums</code> 中的其他数字都出现两次</li>
</ul>
