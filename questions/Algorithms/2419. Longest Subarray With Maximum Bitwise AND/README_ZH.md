### [按位与最大的最长子数组](https://leetcode-cn.com/problems/longest-subarray-with-maximum-bitwise-and)

<p>给你一个长度为 <code>n</code> 的整数数组 <code>nums</code> 。</p>

<p>考虑 <code>nums</code> 中进行 <strong>按位与（bitwise AND）</strong>运算得到的值 <strong>最大</strong> 的 <strong>非空</strong> 子数组。</p>

<ul>
	<li>换句话说，令 <code>k</code> 是 <code>nums</code> <strong>任意</strong> 子数组执行按位与运算所能得到的最大值。那么，只需要考虑那些执行一次按位与运算后等于 <code>k</code> 的子数组。</li>
</ul>

<p>返回满足要求的 <strong>最长</strong> 子数组的长度。</p>

<p>数组的按位与就是对数组中的所有数字进行按位与运算。</p>

<p><strong>子数组</strong> 是数组中的一个连续元素序列。</p>

<p>&nbsp;</p>

<p><strong>示例 1：</strong></p>

<pre>
<strong>输入：</strong>nums = [1,2,3,3,2,2]
<strong>输出：</strong>2
<strong>解释：</strong>
子数组按位与运算的最大值是 3 。
能得到此结果的最长子数组是 [3,3]，所以返回 2 。
</pre>

<p><strong>示例 2：</strong></p>

<pre>
<strong>输入：</strong>nums = [1,2,3,4]
<strong>输出：</strong>1
<strong>解释：</strong>
子数组按位与运算的最大值是 4 。 
能得到此结果的最长子数组是 [4]，所以返回 1 。
</pre>

<p>&nbsp;</p>

<p><strong>提示：</strong></p>

<ul>
	<li><code>1 &lt;= nums.length &lt;= 10<sup>5</sup></code></li>
	<li><code>1 &lt;= nums[i] &lt;= 10<sup>6</sup></code></li>
</ul>
