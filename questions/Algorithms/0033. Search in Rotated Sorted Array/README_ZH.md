### [搜索旋转排序数组](https://leetcode-cn.com/problems/search-in-rotated-sorted-array)

<p>给你一个整数数组 <code>nums</code> ，和一个整数 <code>target</code> 。</p>

<p>该整数数组原本是按升序排列，但输入时在预先未知的某个点上进行了旋转。（例如，数组 <code>[0,1,2,4,5,6,7]</code> 可能变为 <code>[4,5,6,7,0,1,2]</code> ）。</p>

<p>请你在数组中搜索 <code>target</code> ，如果数组中存在这个目标值，则返回它的索引，否则返回 <code>-1</code> 。</p>
 

<p><strong>示例 1：</strong></p>

<pre>
<strong>输入：</strong>nums = [<code>4,5,6,7,0,1,2]</code>, target = 0
<strong>输出：</strong>4
</pre>

<p><strong>示例 2：</strong></p>

<pre>
<strong>输入：</strong>nums = [<code>4,5,6,7,0,1,2]</code>, target = 3
<strong>输出：</strong>-1</pre>

<p><strong>示例 3：</strong></p>

<pre>
<strong>输入：</strong>nums = [1], target = 0
<strong>输出：</strong>-1
</pre>

<p> </p>

<p><strong>提示：</strong></p>

<ul>
	<li><code>1 <= nums.length <= 5000</code></li>
	<li><code>-10^4 <= nums[i] <= 10^4</code></li>
	<li><code>nums</code> 中的每个值都 <strong>独一无二</strong></li>
	<li><code>nums</code> 肯定会在某个点上旋转</li>
	<li><code>-10^4 <= target <= 10^4</code></li>
</ul>
