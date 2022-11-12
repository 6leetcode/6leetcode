### [极大极小游戏](https://leetcode-cn.com/problems/min-max-game)

<p>给你一个下标从 <strong>0</strong> 开始的整数数组 <code>nums</code> ，其长度是 <code>2</code> 的幂。</p>

<p>对 <code>nums</code> 执行下述算法：</p>

<ol>
	<li>设 <code>n</code> 等于 <code>nums</code> 的长度，如果 <code>n == 1</code> ，<strong>终止</strong> 算法过程。否则，<strong>创建</strong> 一个新的整数数组&nbsp;<code>newNums</code> ，新数组长度为 <code>n / 2</code> ，下标从 <strong>0</strong> 开始。</li>
	<li>对于满足&nbsp;<code>0 &lt;= i &lt; n / 2</code> 的每个 <strong>偶数</strong> 下标 <code>i</code> ，将 <code>newNums[i]</code> <strong>赋值</strong> 为 <code>min(nums[2 * i], nums[2 * i + 1])</code> 。</li>
	<li>对于满足&nbsp;<code>0 &lt;= i &lt; n / 2</code> 的每个 <strong>奇数</strong> 下标 <code>i</code> ，将 <code>newNums[i]</code> <strong>赋值</strong> 为 <code>max(nums[2 * i], nums[2 * i + 1])</code> 。</li>
	<li>用 <code>newNums</code> 替换 <code>nums</code> 。</li>
	<li>从步骤 1 开始 <strong>重复</strong> 整个过程。</li>
</ol>

<p>执行算法后，返回 <code>nums</code> 中剩下的那个数字。</p>

<p>&nbsp;</p>

<p><strong>示例 1：</strong></p>

<p><img alt="" src="https://assets.leetcode.com/uploads/2022/04/13/example1drawio-1.png" style="width: 500px; height: 240px;" /></p>

<pre>
<strong>输入：</strong>nums = [1,3,5,2,4,8,2,2]
<strong>输出：</strong>1
<strong>解释：</strong>重复执行算法会得到下述数组。
第一轮：nums = [1,5,4,2]
第二轮：nums = [1,4]
第三轮：nums = [1]
1 是最后剩下的那个数字，返回 1 。
</pre>

<p><strong>示例 2：</strong></p>

<pre>
<strong>输入：</strong>nums = [3]
<strong>输出：</strong>3
<strong>解释：</strong>3 就是最后剩下的数字，返回 3 。
</pre>

<p>&nbsp;</p>

<p><strong>提示：</strong></p>

<ul>
	<li><code>1 &lt;= nums.length &lt;= 1024</code></li>
	<li><code>1 &lt;= nums[i] &lt;= 10<sup>9</sup></code></li>
	<li><code>nums.length</code> 是 <code>2</code> 的幂</li>
</ul>
