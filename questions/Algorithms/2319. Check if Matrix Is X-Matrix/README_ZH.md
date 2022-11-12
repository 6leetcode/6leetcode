### [判断矩阵是否是一个 X 矩阵](https://leetcode-cn.com/problems/check-if-matrix-is-x-matrix)

<p>如果一个正方形矩阵满足下述 <strong>全部</strong> 条件，则称之为一个 <strong>X 矩阵</strong> ：</p>

<ol>
	<li>矩阵对角线上的所有元素都 <strong>不是 0</strong></li>
	<li>矩阵中所有其他元素都是 <strong>0</strong></li>
</ol>

<p>给你一个大小为 <code>n x n</code> 的二维整数数组 <code>grid</code> ，表示一个正方形矩阵。如果<em> </em><code>grid</code><em> </em>是一个 <strong>X 矩阵 </strong>，返回 <code>true</code> ；否则，返回 <code>false</code> 。</p>

<p>&nbsp;</p>

<p><strong>示例 1：</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2022/05/03/ex1.jpg" style="width: 311px; height: 320px;">
<pre><strong>输入：</strong>grid = [[2,0,0,1],[0,3,1,0],[0,5,2,0],[4,0,0,2]]
<strong>输出：</strong>true
<strong>解释：</strong>矩阵如上图所示。
X 矩阵应该满足：绿色元素（对角线上）都不是 0 ，红色元素都是 0 。
因此，grid 是一个 X 矩阵。
</pre>

<p><strong>示例 2：</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2022/05/03/ex2.jpg" style="width: 238px; height: 246px;">
<pre><strong>输入：</strong>grid = [[5,7,0],[0,3,1],[0,5,0]]
<strong>输出：</strong>false
<strong>解释：</strong>矩阵如上图所示。
X 矩阵应该满足：绿色元素（对角线上）都不是 0 ，红色元素都是 0 。
因此，grid 不是一个 X 矩阵。
</pre>

<p>&nbsp;</p>

<p><strong>提示：</strong></p>

<ul>
	<li><code>n == grid.length == grid[i].length</code></li>
	<li><code>3 &lt;= n &lt;= 100</code></li>
	<li><code>0 &lt;= grid[i][j] &lt;= 10<sup>5</sup></code></li>
</ul>
