### [最长递增子序列 II](https://leetcode-cn.com/problems/longest-increasing-subsequence-ii)

<p>给你一个整数数组&nbsp;<code>nums</code>&nbsp;和一个整数&nbsp;<code>k</code>&nbsp;。</p>

<p>找到&nbsp;<code>nums</code>&nbsp;中满足以下要求的最长子序列：</p>

<ul>
	<li>子序列 <strong>严格递增</strong></li>
	<li>子序列中相邻元素的差值 <strong>不超过</strong>&nbsp;<code>k</code>&nbsp;。</li>
</ul>

<p>请你返回满足上述要求的 <strong>最长子序列</strong>&nbsp;的长度。</p>

<p><strong>子序列</strong>&nbsp;是从一个数组中删除部分元素后，剩余元素不改变顺序得到的数组。</p>

<p>&nbsp;</p>

<p><strong>示例 1：</strong></p>

<pre><b>输入：</b>nums = [4,2,1,4,3,4,5,8,15], k = 3
<b>输出：</b>5
<strong>解释：</strong>
满足要求的最长子序列是 [1,3,4,5,8] 。
子序列长度为 5 ，所以我们返回 5 。
注意子序列 [1,3,4,5,8,15] 不满足要求，因为 15 - 8 = 7 大于 3 。
</pre>

<p><strong>示例 2：</strong></p>

<pre><b>输入：</b>nums = [7,4,5,1,8,12,4,7], k = 5
<b>输出：</b>4
<strong>解释：</strong>
满足要求的最长子序列是 [4,5,8,12] 。
子序列长度为 4 ，所以我们返回 4 。
</pre>

<p><strong>示例 3：</strong></p>

<pre><b>输入：</b>nums = [1,5], k = 1
<b>输出：</b>1
<strong>解释：</strong>
满足要求的最长子序列是 [1] 。
子序列长度为 1 ，所以我们返回 1 。
</pre>

<p>&nbsp;</p>

<p><strong>提示：</strong></p>

<ul>
	<li><code>1 &lt;= nums.length &lt;= 10<sup>5</sup></code></li>
	<li><code>1 &lt;= nums[i], k &lt;= 10<sup>5</sup></code></li>
</ul>
