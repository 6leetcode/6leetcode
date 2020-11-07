### [小于 K 的两数之和](https://leetcode-cn.com/problems/two-sum-less-than-k)

<p>给你一个整数数组&nbsp;<code>A</code> 和一个整数&nbsp;<code>K</code>，请在该数组中找出两个元素，使它们的和小于&nbsp;<code>K</code>&nbsp;但尽可能地接近 <code>K</code>，<strong>返回这两个元素的和</strong>。</p>

<p>如不存在这样的两个元素，请返回 <code>-1</code>。</p>

<p>&nbsp;</p>

<p><strong>示例 1：</strong></p>

<pre><strong>输入：</strong>A = [34,23,1,24,75,33,54,8], K = 60
<strong>输出：</strong>58
<strong>解释：</strong>
34 和 24 相加得到 58，58 小于 60，满足题意。
</pre>

<p><strong>示例&nbsp;2：</strong></p>

<pre><strong>输入：</strong>A = [10,20,30], K = 15
<strong>输出：</strong>-1
<strong>解释：</strong>
我们无法找到和小于 15 的两个元素。</pre>

<p>&nbsp;</p>

<p><strong>提示：</strong></p>

<ol>
	<li><code>1 &lt;= A.length &lt;= 100</code></li>
	<li><code>1 &lt;= A[i] &lt;= 1000</code></li>
	<li><code>1 &lt;= K &lt;= 2000</code></li>
</ol>
