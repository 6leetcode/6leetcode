### [寻找旋转排序数组中的最小值](https://leetcode-cn.com/problems/find-minimum-in-rotated-sorted-array)

<p>假设按照升序排序的数组在预先未知的某个点上进行了旋转。例如，数组 <code>[0,1,2,4,5,6,7]</code> <strong> </strong>可能变为 <code>[4,5,6,7,0,1,2]</code> 。</p>

<p>请找出其中最小的元素。</p>

<p> </p>

<p><strong>示例 1：</strong></p>

<pre>
<strong>输入：</strong>nums = [3,4,5,1,2]
<strong>输出：</strong>1
</pre>

<p><strong>示例 2：</strong></p>

<pre>
<strong>输入：</strong>nums = [4,5,6,7,0,1,2]
<strong>输出：</strong>0
</pre>

<p><strong>示例 3：</strong></p>

<pre>
<strong>输入：</strong>nums = [1]
<strong>输出：</strong>1
</pre>

<p> </p>

<p><strong>提示：</strong></p>

<ul>
	<li><code>1 <= nums.length <= 5000</code></li>
	<li><code>-5000 <= nums[i] <= 5000</code></li>
	<li><code>nums</code> 中的所有整数都是 <strong>唯一</strong> 的</li>
	<li><code>nums</code> 原来是一个升序排序的数组，但在预先未知的某个点上进行了旋转</li>
</ul>
