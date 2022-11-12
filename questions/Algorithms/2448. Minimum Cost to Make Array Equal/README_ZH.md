### [使数组相等的最小开销](https://leetcode-cn.com/problems/minimum-cost-to-make-array-equal)

<p>给你两个下标从 <strong>0</strong>&nbsp;开始的数组&nbsp;<code>nums</code> 和&nbsp;<code>cost</code>&nbsp;，分别包含&nbsp;<code>n</code>&nbsp;个&nbsp;<strong>正</strong>&nbsp;整数。</p>

<p>你可以执行下面操作 <strong>任意</strong>&nbsp;次：</p>

<ul>
	<li>将&nbsp;<code>nums</code>&nbsp;中 <strong>任意</strong>&nbsp;元素增加或者减小 <code>1</code>&nbsp;。</li>
</ul>

<p>对第 <code>i</code>&nbsp;个元素执行一次操作的开销是&nbsp;<code>cost[i]</code>&nbsp;。</p>

<p>请你返回使 <code>nums</code>&nbsp;中所有元素 <strong>相等</strong>&nbsp;的 <strong>最少</strong>&nbsp;总开销。</p>

<p>&nbsp;</p>

<p><strong>示例 1：</strong></p>

<pre><b>输入：</b>nums = [1,3,5,2], cost = [2,3,1,14]
<b>输出：</b>8
<b>解释：</b>我们可以执行以下操作使所有元素变为 2 ：
- 增加第 0 个元素 1 次，开销为 2 。
- 减小第 1 个元素 1 次，开销为 3 。
- 减小第 2 个元素 3 次，开销为 1 + 1 + 1 = 3 。
总开销为 2 + 3 + 3 = 8 。
这是最小开销。
</pre>

<p><strong>示例 2：</strong></p>

<pre><b>输入：</b>nums = [2,2,2,2,2], cost = [4,2,8,1,3]
<b>输出：</b>0
<b>解释：</b>数组中所有元素已经全部相等，不需要执行额外的操作。
</pre>

<p>&nbsp;</p>

<p><strong>提示：</strong></p>

<ul>
	<li><code>n == nums.length == cost.length</code></li>
	<li><code>1 &lt;= n &lt;= 10<sup>5</sup></code></li>
	<li><code>1 &lt;= nums[i], cost[i] &lt;= 10<sup>6</sup></code></li>
</ul>
