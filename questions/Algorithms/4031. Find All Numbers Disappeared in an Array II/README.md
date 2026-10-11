### [Find All Numbers Disappeared in an Array II](https://leetcode.com/problems/find-all-numbers-disappeared-in-an-array-ii)

<p>You are given an integer array <code>nums</code> and two integers <code>lower</code> and <code>upper</code>.</p>

<p>A <strong>missing integer</strong> is an integer in the inclusive range <code>[lower, upper]</code> that does not appear in <code>nums</code>.</p>

<p>Return a 2D integer array where each element is of the form <code>[start, end]</code>, representing a <strong>contiguous</strong> range of missing integers. Return the ranges in <strong>increasing</strong> order. If there are no missing integers, return an empty array.</p>

<p><strong>Note:</strong> Consecutive missing integers should be grouped into a single range.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<div class="example-block">
<p><strong>Input:</strong> <span class="example-io">nums = [3,9,7], lower = 1, upper = 12</span></p>

<p><strong>Output:</strong> <span class="example-io">[[1,2],[4,6],[8,8],[10,12]]</span></p>

<p><strong>Explanation:</strong></p>

<ul>
	<li>The missing integers are <code>[1, 2, 4, 5, 6, 8, 10, 11, 12]</code>.</li>
	<li>Grouping the missing integers into the minimum number of contiguous ranges, we get <code>[1, 2]</code>, <code>[4, 6]</code>, <code>[8, 8]</code>, and <code>[10, 12]</code>.</li>
	<li>Therefore, the answer is <code>[[1, 2], [4, 6], [8, 8], [10, 12]]</code>.</li>
</ul>
</div>

<p><strong class="example">Example 2:</strong></p>

<div class="example-block">
<p><strong>Input:</strong> <span class="example-io">nums = [1,1], lower = 5, upper = 7</span></p>

<p><strong>Output:</strong> <span class="example-io">[[5,7]]</span></p>

<p><strong>Explanation:</strong></p>

<ul>
	<li>The missing integers are <code>[5, 6, 7]</code>.</li>
	<li>Grouping the missing integers into the minimum number of contiguous ranges, we get <code>[5, 7]</code>.</li>
	<li>Therefore, the answer is <code>[[5, 7]]</code>.</li>
</ul>
</div>

<p><strong class="example">Example 3:</strong></p>

<div class="example-block">
<p><strong>Input:</strong> <span class="example-io">nums = [2,3,5], lower = 2, upper = 3</span></p>

<p><strong>Output:</strong> <span class="example-io">[]</span></p>

<p><strong>Explanation:</strong></p>

<ul>
	<li>There are no missing integers.</li>
	<li>Therefore, the answer is <code>[]</code>.</li>
</ul>
</div>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= nums.length &lt;= 10<sup>5</sup></code></li>
	<li><code>1 &lt;= nums[i] &lt;= 10<sup>5</sup></code></li>
	<li><code>1 &lt;= lower &lt;= upper &lt;= 10<sup>5</sup></code></li>
</ul>
