### [查找和最小的K对数字](https://leetcode-cn.com/problems/find-k-pairs-with-smallest-sums)

<p>给定两个以升序排列的整数数组 <code>nums1</code> 和<strong> </strong><code>nums2</code><strong> </strong>, 以及一个整数 <code>k</code><strong> </strong>。</p>

<p>定义一对值 <code>(u,v)</code>，其中第一个元素来自 <code>nums1</code>，第二个元素来自 <code>nums2</code><strong> </strong>。</p>

<p>请找到和最小的 <code>k</code> 个数对 <code>(u<sub>1</sub>,v<sub>1</sub>)</code>, <code> (u<sub>2</sub>,v<sub>2</sub>)</code>  ...  <code>(u<sub>k</sub>,v<sub>k</sub>)</code> 。</p>

<p> </p>

<p><strong>示例 1:</strong></p>

<pre>
<strong>输入:</strong> nums1 = [1,7,11], nums2 = [2,4,6], k = 3
<strong>输出:</strong> [1,2],[1,4],[1,6]
<strong>解释: </strong>返回序列中的前 3 对数：
     [1,2],[1,4],[1,6],[7,2],[7,4],[11,2],[7,6],[11,4],[11,6]
</pre>

<p><strong>示例 2:</strong></p>

<pre>
<strong>输入: </strong>nums1 = [1,1,2], nums2 = [1,2,3], k = 2
<strong>输出: </strong>[1,1],[1,1]
<strong>解释: </strong>返回序列中的前 2 对数：
     [1,1],[1,1],[1,2],[2,1],[1,2],[2,2],[1,3],[1,3],[2,3]
</pre>

<p><strong>示例 3:</strong></p>

<pre>
<strong>输入: </strong>nums1 = [1,2], nums2 = [3], k = 3 
<strong>输出:</strong> [1,3],[2,3]
<strong>解释: </strong>也可能序列中所有的数对都被返回:[1,3],[2,3]
</pre>

<p> </p>

<p><strong>提示:</strong></p>

<ul>
	<li><code>1 <= nums1.length, nums2.length <= 10<sup>4</sup></code></li>
	<li><code>-10<sup>9</sup> <= nums1[i], nums2[i] <= 10<sup>9</sup></code></li>
	<li><code>nums1</code>, <code>nums2</code> 均为升序排列</li>
	<li><code>1 <= k <= 1000</code></li>
</ul>
