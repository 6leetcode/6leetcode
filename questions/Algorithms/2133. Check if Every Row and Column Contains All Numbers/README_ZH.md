### [检查是否每一行每一列都包含全部整数](https://leetcode-cn.com/problems/check-if-every-row-and-column-contains-all-numbers)

<p>对一个大小为 <code>n x n</code> 的矩阵而言，如果其每一行和每一列都包含从 <code>1</code> 到 <code>n</code> 的 <strong>全部</strong> 整数（含 <code>1</code> 和 <code>n</code>），则认为该矩阵是一个 <strong>有效</strong> 矩阵。</p>

<p>给你一个大小为 <code>n x n</code> 的整数矩阵 <code>matrix</code> ，请你判断矩阵是否为一个有效矩阵：如果是，返回 <code>true</code> ；否则，返回 <code>false</code> 。</p>

<p>&nbsp;</p>

<p><strong>示例 1：</strong></p>

<p><img alt="" src="https://assets.leetcode.com/uploads/2021/12/21/example1drawio.png" style="width: 250px; height: 251px;" /></p>

<pre>
<strong>输入：</strong>matrix = [[1,2,3],[3,1,2],[2,3,1]]
<strong>输出：</strong>true
<strong>解释：</strong>在此例中，n = 3 ，每一行和每一列都包含数字 1、2、3 。
因此，返回 true 。
</pre>

<p><strong>示例 2：</strong></p>

<p><img alt="" src="https://assets.leetcode.com/uploads/2021/12/21/example2drawio.png" style="width: 250px; height: 251px;" /></p>

<pre>
<strong>输入：</strong>matrix = [[1,1,1],[1,2,3],[1,2,3]]
<strong>输出：</strong>false
<strong>解释：</strong>在此例中，n = 3 ，但第一行和第一列不包含数字 2 和 3 。
因此，返回 false 。
</pre>

<p>&nbsp;</p>

<p><strong>提示：</strong></p>

<ul>
	<li><code>n == matrix.length == matrix[i].length</code></li>
	<li><code>1 &lt;= n &lt;= 100</code></li>
	<li><code>1 &lt;= matrix[i][j] &lt;= n</code></li>
</ul>
