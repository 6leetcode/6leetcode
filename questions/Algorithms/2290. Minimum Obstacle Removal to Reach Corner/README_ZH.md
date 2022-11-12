### [到达角落需要移除障碍物的最小数目](https://leetcode-cn.com/problems/minimum-obstacle-removal-to-reach-corner)

<p>给你一个下标从 <strong>0</strong> 开始的二维整数数组 <code>grid</code> ，数组大小为 <code>m x n</code> 。每个单元格都是两个值之一：</p>

<ul>
	<li><code>0</code> 表示一个 <strong>空</strong> 单元格，</li>
	<li><code>1</code> 表示一个可以移除的 <strong>障碍物</strong> 。</li>
</ul>

<p>你可以向上、下、左、右移动，从一个空单元格移动到另一个空单元格。</p>

<p>现在你需要从左上角&nbsp;<code>(0, 0)</code> 移动到右下角 <code>(m - 1, n - 1)</code> ，返回需要移除的障碍物的 <strong>最小</strong> 数目。</p>

<p>&nbsp;</p>

<p><strong>示例 1：</strong></p>

<p><img alt="" src="https://assets.leetcode.com/uploads/2022/04/06/example1drawio-1.png" style="width: 605px; height: 246px;" /></p>

<pre>
<strong>输入：</strong>grid = [[0,1,1],[1,1,0],[1,1,0]]
<strong>输出：</strong>2
<strong>解释：</strong>可以移除位于 (0, 1) 和 (0, 2) 的障碍物来创建从 (0, 0) 到 (2, 2) 的路径。
可以证明我们至少需要移除两个障碍物，所以返回 2 。
注意，可能存在其他方式来移除 2 个障碍物，创建出可行的路径。
</pre>

<p><strong>示例 2：</strong></p>

<p><img alt="" src="https://assets.leetcode.com/uploads/2022/04/06/example1drawio.png" style="width: 405px; height: 246px;" /></p>

<pre>
<strong>输入：</strong>grid = [[0,1,0,0,0],[0,1,0,1,0],[0,0,0,1,0]]
<strong>输出：</strong>0
<strong>解释：</strong>不移除任何障碍物就能从 (0, 0) 到 (2, 4) ，所以返回 0 。
</pre>

<p>&nbsp;</p>

<p><strong>提示：</strong></p>

<ul>
	<li><code>m == grid.length</code></li>
	<li><code>n == grid[i].length</code></li>
	<li><code>1 &lt;= m, n &lt;= 10<sup>5</sup></code></li>
	<li><code>2 &lt;= m * n &lt;= 10<sup>5</sup></code></li>
	<li><code>grid[i][j]</code> 为 <code>0</code> <strong>或</strong> <code>1</code></li>
	<li><code>grid[0][0] == grid[m - 1][n - 1] == 0</code></li>
</ul>
