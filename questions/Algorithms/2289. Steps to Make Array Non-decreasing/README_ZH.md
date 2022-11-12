### [使数组按非递减顺序排列](https://leetcode-cn.com/problems/steps-to-make-array-non-decreasing)

<p>给你一个下标从 <strong>0</strong> 开始的整数数组 <code>nums</code> 。在一步操作中，移除所有满足&nbsp;<code>nums[i - 1] &gt; nums[i]</code> 的 <code>nums[i]</code> ，其中 <code>0 &lt; i &lt; nums.length</code> 。</p>

<p>重复执行步骤，直到 <code>nums</code> 变为 <strong>非递减</strong> 数组，返回所需执行的操作数。</p>

<p>&nbsp;</p>

<p><strong>示例 1：</strong></p>

<pre>
<strong>输入：</strong>nums = [5,3,4,4,7,3,6,11,8,5,11]
<strong>输出：</strong>3
<strong>解释：</strong>执行下述几个步骤：
- 步骤 1 ：[5,<em><strong>3</strong></em>,4,4,7,<em><strong>3</strong></em>,6,11,<em><strong>8</strong></em>,<em><strong>5</strong></em>,11] 变为 [5,4,4,7,6,11,11]
- 步骤 2 ：[5,<em><strong>4</strong></em>,4,7,<em><strong>6</strong></em>,11,11] 变为 [5,4,7,11,11]
- 步骤 3 ：[5,<em><strong>4</strong></em>,7,11,11] 变为 [5,7,11,11]
[5,7,11,11] 是一个非递减数组，因此，返回 3 。
</pre>

<p><strong>示例 2：</strong></p>

<pre>
<strong>输入：</strong>nums = [4,5,7,7,13]
<strong>输出：</strong>0
<strong>解释：</strong>nums 已经是一个非递减数组，因此，返回 0 。
</pre>

<p>&nbsp;</p>

<p><strong>提示：</strong></p>

<ul>
	<li><code>1 &lt;= nums.length &lt;= 10<sup>5</sup></code></li>
	<li><code>1 &lt;= nums[i] &lt;= 10<sup>9</sup></code></li>
</ul>
