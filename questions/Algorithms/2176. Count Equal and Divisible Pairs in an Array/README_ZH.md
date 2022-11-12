### [统计数组中相等且可以被整除的数对](https://leetcode-cn.com/problems/count-equal-and-divisible-pairs-in-an-array)

<p>给你一个下标从 <strong>0</strong>&nbsp;开始长度为 <code>n</code>&nbsp;的整数数组&nbsp;<code>nums</code>&nbsp;和一个整数&nbsp;<code>k</code>&nbsp;，请你返回满足&nbsp;<code>0 &lt;= i &lt; j &lt; n</code>&nbsp;，<code>nums[i] == nums[j]</code> 且&nbsp;<code>(i * j)</code>&nbsp;能被&nbsp;<code>k</code>&nbsp;整除的数对&nbsp;<code>(i, j)</code>&nbsp;的&nbsp;<strong>数目</strong>&nbsp;。</p>

<p>&nbsp;</p>

<p><strong>示例 1：</strong></p>

<pre><b>输入：</b>nums = [3,1,2,2,2,1,3], k = 2
<b>输出：</b>4
<strong>解释：</strong>
总共有 4 对数符合所有要求：
- nums[0] == nums[6] 且 0 * 6 == 0 ，能被 2 整除。
- nums[2] == nums[3] 且 2 * 3 == 6 ，能被 2 整除。
- nums[2] == nums[4] 且 2 * 4 == 8 ，能被 2 整除。
- nums[3] == nums[4] 且 3 * 4 == 12 ，能被 2 整除。
</pre>

<p><strong>示例 2：</strong></p>

<pre><b>输入：</b>nums = [1,2,3,4], k = 1
<b>输出：</b>0
<b>解释：</b>由于数组中没有重复数值，所以没有数对 (i,j) 符合所有要求。
</pre>

<p>&nbsp;</p>

<p><strong>提示：</strong></p>

<ul>
	<li><code>1 &lt;= nums.length &lt;= 100</code></li>
	<li><code>1 &lt;= nums[i], k &lt;= 100</code></li>
</ul>
