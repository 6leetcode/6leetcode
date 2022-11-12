### [使数组可以被整除的最少删除次数](https://leetcode-cn.com/problems/minimum-deletions-to-make-array-divisible)

<p>给你两个正整数数组&nbsp;<code>nums</code> 和&nbsp;<code>numsDivide</code>&nbsp;。你可以从&nbsp;<code>nums</code>&nbsp;中删除任意数目的元素。</p>

<p>请你返回使 <code>nums</code>&nbsp;中 <strong>最小</strong>&nbsp;元素可以整除 <code>numsDivide</code>&nbsp;中所有元素的 <strong>最少</strong>&nbsp;删除次数。如果无法得到这样的元素，返回 <code>-1</code>&nbsp;。</p>

<p>如果&nbsp;<code>y % x == 0</code>&nbsp;，那么我们说整数&nbsp;<code>x</code>&nbsp;整除&nbsp;<code>y</code>&nbsp;。</p>

<p>&nbsp;</p>

<p><strong>示例 1：</strong></p>

<pre><b>输入：</b>nums = [2,3,2,4,3], numsDivide = [9,6,9,3,15]
<b>输出：</b>2
<b>解释：</b>
[2,3,2,4,3] 中最小元素是 2 ，它无法整除 numsDivide 中所有元素。
我们从 nums 中删除 2 个大小为 2 的元素，得到 nums = [3,4,3] 。
[3,4,3] 中最小元素为 3 ，它可以整除 numsDivide 中所有元素。
可以证明 2 是最少删除次数。
</pre>

<p><strong>示例 2：</strong></p>

<pre><b>输入：</b>nums = [4,3,6], numsDivide = [8,2,6,10]
<b>输出：</b>-1
<b>解释：</b>
我们想 nums 中的最小元素可以整除 numsDivide 中的所有元素。
没有任何办法可以达到这一目的。</pre>

<p>&nbsp;</p>

<p><strong>提示：</strong></p>

<ul>
	<li><code>1 &lt;= nums.length, numsDivide.length &lt;= 10<sup>5</sup></code></li>
	<li><code>1 &lt;= nums[i], numsDivide[i] &lt;= 10<sup>9</sup></code></li>
</ul>
