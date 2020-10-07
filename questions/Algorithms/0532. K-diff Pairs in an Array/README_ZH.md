### [数组中的 k-diff 数对](https://leetcode-cn.com/problems/k-diff-pairs-in-an-array)

<p>给定一个整数数组和一个整数&nbsp;<code><strong>k</strong></code>，你需要在数组里找到<strong>不同的&nbsp;</strong>k-diff 数对。这里将&nbsp;<strong>k-diff</strong>&nbsp;数对定义为一个整数对 <code>(i, j)</code>，其中<strong> <code>i</code> </strong>和<strong> <code>j</code> </strong>都是数组中的数字，且两数之差的绝对值是&nbsp;<code><strong>k</strong></code> 。</p>

<p>&nbsp;</p>

<p><strong>示例 1：</strong></p>

<pre><strong>输入：</strong>[3, 1, 4, 1, 5], k = 2
<strong>输出：</strong>2
<strong>解释：</strong>数组中有两个 2-diff 数对, (1, 3) 和 (3, 5)。
尽管数组中有两个1，但我们只应返回不同的数对的数量。
</pre>

<p><strong>示例 2：</strong></p>

<pre><strong>输入：</strong>[1, 2, 3, 4, 5], k = 1
<strong>输出：</strong>4
<strong>解释：</strong>数组中有四个 1-diff 数对, (1, 2), (2, 3), (3, 4) 和 (4, 5)。
</pre>

<p><strong>示例 3：</strong></p>

<pre><strong>输入：</strong>[1, 3, 1, 5, 4], k = 0
<strong>输出：</strong>1
<strong>解释：</strong>数组中只有一个 0-diff 数对，(1, 1)。
</pre>

<p><strong>示例 4：</strong></p>

<pre><strong>输入：</strong>nums = [1,2,4,4,3,3,0,9,2,3], k = 3
<strong>输出：</strong>2
</pre>

<p><strong>示例 5：</strong></p>

<pre><strong>输入：</strong>nums = [-1,-2,-3], k = 1
<strong>输出：</strong>2
</pre>

<p>&nbsp;</p>

<p><strong>提示：</strong></p>

<ul>
	<li><code>1 &lt;= nums.length &lt;= 10<sup>4</sup></code></li>
	<li><code>-10<sup>7</sup> &lt;= nums[i] &lt;= 10<sup>7</sup></code></li>
	<li><code>0 &lt;= k &lt;= 10<sup>7</sup></code></li>
</ul>
