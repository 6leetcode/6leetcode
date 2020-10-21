### [划分数组为连续数字的集合](https://leetcode-cn.com/problems/divide-array-in-sets-of-k-consecutive-numbers)

<p>给你一个整数数组 <code>nums</code> 和一个正整数 <code>k</code>，请你判断是否可以把这个数组划分成一些由 <code>k</code> 个连续数字组成的集合。<br />
如果可以，请返回 <code>True</code>；否则，返回 <code>False</code>。</p>

<p> </p>

<p><strong>注意：</strong>此题目与 846 重复：<a href="https://leetcode-cn.com/problems/hand-of-straights/" target="_blank">https://leetcode-cn.com/problems/hand-of-straights/</a></p>

<p> </p>

<p><strong>示例 1：</strong></p>

<pre>
<strong>输入：</strong>nums = [1,2,3,3,4,4,5,6], k = 4
<strong>输出：</strong>true
<strong>解释：</strong>数组可以分成 [1,2,3,4] 和 [3,4,5,6]。
</pre>

<p><strong>示例 2：</strong></p>

<pre>
<strong>输入：</strong>nums = [3,2,1,2,3,4,3,4,5,9,10,11], k = 3
<strong>输出：</strong>true
<strong>解释：</strong>数组可以分成 [1,2,3] , [2,3,4] , [3,4,5] 和 [9,10,11]。
</pre>

<p><strong>示例 3：</strong></p>

<pre>
<strong>输入：</strong>nums = [3,3,2,2,1,1], k = 3
<strong>输出：</strong>true
</pre>

<p><strong>示例 4：</strong></p>

<pre>
<strong>输入：</strong>nums = [1,2,3,4], k = 3
<strong>输出：</strong>false
<strong>解释：</strong>数组不能分成几个大小为 3 的子数组。
</pre>

<p> </p>

<p><strong>提示：</strong></p>

<ul>
	<li><code>1 <= nums.length <= 10^5</code></li>
	<li><code>1 <= nums[i] <= 10^9</code></li>
	<li><code>1 <= k <= nums.length</code></li>
</ul>
