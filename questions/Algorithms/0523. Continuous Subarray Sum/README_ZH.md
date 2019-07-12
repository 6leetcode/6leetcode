### [连续的子数组和](https://leetcode-cn.com/problems/continuous-subarray-sum)

<p>给定一个包含<strong> 非负数</strong> 的数组和一个目标<strong> 整数</strong>&nbsp;k，编写一个函数来判断该数组是否含有连续的子数组，其大小至少为 2，且总和为 <strong>k</strong> 的倍数，即总和为 n*k，其中 n 也是一个<strong>整数</strong>。</p>

<p>&nbsp;</p>

<p><strong>示例 1：</strong></p>

<pre><strong>输入：</strong>[23,2,4,6,7], k = 6
<strong>输出：</strong>True
<strong>解释：</strong>[2,4] 是一个大小为 2 的子数组，并且和为 6。
</pre>

<p><strong>示例 2：</strong></p>

<pre><strong>输入：</strong>[23,2,6,4,7], k = 6
<strong>输出：</strong>True
<strong>解释：</strong>[23,2,6,4,7]是大小为 5 的子数组，并且和为 42。
</pre>

<p>&nbsp;</p>

<p><strong>说明：</strong></p>

<ul>
	<li>数组的长度不会超过 10,000 。</li>
	<li>你可以认为所有数字总和在 32 位有符号整数范围内。</li>
</ul>
