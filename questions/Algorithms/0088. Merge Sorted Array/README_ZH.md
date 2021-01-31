### [合并两个有序数组](https://leetcode-cn.com/problems/merge-sorted-array)

<p>给你两个有序整数数组 <code>nums1</code><em> </em>和 <code>nums2</code>，请你将 <code>nums2</code><em> </em>合并到 <code>nums1</code><em> </em>中<em>，</em>使 <code>nums1</code><em> </em>成为一个有序数组。</p>

<p>初始化 <code>nums1</code> 和 <code>nums2</code> 的元素数量分别为 <code>m</code> 和 <code>n</code><em> </em>。你可以假设 <code>nums1</code><em> </em>的空间大小等于 <code>m + n</code>，这样它就有足够的空间保存来自 <code>nums2</code> 的元素。</p>

<p> </p>

<p><strong>示例 1：</strong></p>

<pre>
<strong>输入：</strong>nums1 = [1,2,3,0,0,0], m = 3, nums2 = [2,5,6], n = 3
<strong>输出：</strong>[1,2,2,3,5,6]
</pre>

<p><strong>示例 2：</strong></p>

<pre>
<strong>输入：</strong>nums1 = [1], m = 1, nums2 = [], n = 0
<strong>输出：</strong>[1]
</pre>

<p> </p>

<p><strong>提示：</strong></p>

<ul>
	<li><code>nums1.length == m + n</code></li>
	<li><code>nums2.length == n</code></li>
	<li><code>0 <= m, n <= 200</code></li>
	<li><code>1 <= m + n <= 200</code></li>
	<li><code>-10<sup>9</sup> <= nums1[i], nums2[i] <= 10<sup>9</sup></code></li>
</ul>
