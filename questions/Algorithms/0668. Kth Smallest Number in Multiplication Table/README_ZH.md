### [乘法表中第k小的数](https://leetcode-cn.com/problems/kth-smallest-number-in-multiplication-table)

<p>几乎每一个人都用&nbsp;<a href="https://baike.baidu.com/item/%E4%B9%98%E6%B3%95%E8%A1%A8">乘法表</a>。但是你能在乘法表中快速找到第 <code>k</code> 小的数字吗？</p>

<p>乘法表是大小为 <code>m x n</code> 的一个整数矩阵，其中&nbsp;<code>mat[i][j] == i * j</code>（下标从 <strong>1</strong> 开始）。</p>

<p>给你三个整数 <code>m</code>、<code>n</code> 和 <code>k</code>，请你在大小为&nbsp;<code>m x n</code> 的乘法表中，找出并返回第 <code>k</code>&nbsp;小的数字。</p>

<div class="original__bRMd">
<div>
<p>&nbsp;</p>

<p><strong>示例 1：</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2021/05/02/multtable1-grid.jpg" style="width: 500px; height: 254px;" />
<pre>
<strong>输入：</strong>m = 3, n = 3, k = 5
<strong>输出：</strong>3
<strong>解释：</strong>第 5 小的数字是 3 。
</pre>

<p><strong>示例 2：</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2021/05/02/multtable2-grid.jpg" style="width: 493px; height: 293px;" />
<pre>
<strong>输入：</strong>m = 2, n = 3, k = 6
<strong>输出：</strong>6
<strong>解释：</strong>第 6 小的数字是 6 。
</pre>

<p>&nbsp;</p>

<p><strong>提示：</strong></p>

<ul>
	<li><code>1 &lt;= m, n &lt;= 3 * 10<sup>4</sup></code></li>
	<li><code>1 &lt;= k &lt;= m * n</code></li>
</ul>
</div>
</div>
