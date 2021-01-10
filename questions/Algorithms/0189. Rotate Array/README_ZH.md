### [旋转数组](https://leetcode-cn.com/problems/rotate-array)

<p>给定一个数组，将数组中的元素向右移动 <code>k</code><em> </em>个位置，其中 <code>k</code><em> </em>是非负数。</p>

<p> </p>

<p><strong>进阶：</strong></p>

<ul>
	<li>尽可能想出更多的解决方案，至少有三种不同的方法可以解决这个问题。</li>
	<li>你可以使用空间复杂度为 O(1) 的 <strong>原地 </strong>算法解决这个问题吗？</li>
</ul>

<p> </p>

<p><strong>示例 1:</strong></p>

<pre>
<strong>输入:</strong> nums = [1,2,3,4,5,6,7], k = 3
<strong>输出:</strong> <code>[5,6,7,1,2,3,4]</code>
<strong>解释:</strong>
向右旋转 1 步: <code>[7,1,2,3,4,5,6]</code>
向右旋转 2 步: <code>[6,7,1,2,3,4,5]
</code>向右旋转 3 步: <code>[5,6,7,1,2,3,4]</code>
</pre>

<p><strong>示例 2:</strong></p>

<pre>
<strong>输入：</strong>nums = [-1,-100,3,99], k = 2
<strong>输出：</strong>[3,99,-1,-100]
<strong>解释:</strong> 
向右旋转 1 步: [99,-1,-100,3]
向右旋转 2 步: [3,99,-1,-100]</pre>

<p> </p>

<p><strong>提示：</strong></p>

<ul>
	<li><code>1 <= nums.length <= 2 * 10<sup>4</sup></code></li>
	<li><code>-2<sup>31</sup> <= nums[i] <= 2<sup>31</sup> - 1</code></li>
	<li><code>0 <= k <= 10<sup>5</sup></code></li>
</ul>

<ul>
</ul>
