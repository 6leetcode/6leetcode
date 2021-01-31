### [寻找数组的中心索引](https://leetcode-cn.com/problems/find-pivot-index)

<p>给你一个整数数组 <code>nums</code>，请编写一个能够返回数组 <strong>“中心索引” </strong>的方法。</p>

<p>数组<strong> 中心索引 </strong>是数组的一个索引，其左侧所有元素相加的和等于右侧所有元素相加的和。</p>

<p>如果数组不存在中心索引，返回 <code>-1</code> 。如果数组有多个中心索引，应该返回最靠近左边的那一个。</p>

<p><strong>注意：</strong>中心索引可能出现在数组的两端。</p>

<p> </p>

<p><strong>示例 1：</strong></p>

<pre>
<strong>输入：</strong>nums = [1, 7, 3, 6, 5, 6]
<strong>输出：</strong>3
<strong>解释：</strong>
索引 3 (nums[3] = 6) 的左侧数之和 (1 + 7 + 3 = 11)，与右侧数之和 (5 + 6 = 11) 相等。
同时, 3 也是第一个符合要求的中心索引。
</pre>

<p><strong>示例 2：</strong></p>

<pre>
<strong>输入：</strong>nums = [1, 2, 3]
<strong>输出：</strong>-1
<strong>解释：</strong>
数组中不存在满足此条件的中心索引。</pre>

<p><strong>示例 3：</strong></p>

<pre>
<strong>输入：</strong>nums = [2, 1, -1]
<strong>输出：</strong>0
<strong>解释：</strong>
索引 0 左侧不存在元素，视作和为 0 ；右侧数之和为 1 + (-1) = 0 ，二者相等。
</pre>

<p><strong>示例 4：</strong></p>

<pre>
<strong>输入：</strong>nums = [0, 0, 0, 0, 1]
<strong>输出：</strong>4
<strong>解释：</strong>
索引 4 左侧数之和为 0 ；右侧不存在元素，视作和为 0 ，二者相等。
</pre>

<p> </p>

<p><strong>提示：</strong></p>

<ul>
	<li><code>nums</code> 的长度范围为 <code>[0, 10000]</code>。</li>
	<li>任何一个 <code>nums[i]</code> 将会是一个范围在 <code>[-1000, 1000]</code>的整数。</li>
</ul>
