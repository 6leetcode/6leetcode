### [被列覆盖的最多行数](https://leetcode-cn.com/problems/maximum-rows-covered-by-columns)

<p>给你一个下标从 <strong>0</strong>&nbsp;开始的&nbsp;<code>m x n</code>&nbsp;二进制矩阵&nbsp;<code>mat</code>&nbsp;和一个整数&nbsp;<code>cols</code>&nbsp;，表示你需要选出的列数。</p>

<p>如果一行中，所有的 <code>1</code> 都被你选中的列所覆盖，那么我们称这一行 <strong>被覆盖</strong>&nbsp;了。</p>

<p>请你返回在选择 <code>cols</code>&nbsp;列的情况下，<strong>被覆盖</strong>&nbsp;的行数 <strong>最大</strong>&nbsp;为多少。</p>

<p>&nbsp;</p>

<p><strong>示例 1：</strong></p>

<p><strong><img alt="" src="https://assets.leetcode.com/uploads/2022/07/14/rowscovered.png" style="width: 250px; height: 417px;"></strong></p>

<pre><b>输入：</b>mat = [[0,0,0],[1,0,1],[0,1,1],[0,0,1]], cols = 2
<b>输出：</b>3
<strong>解释：</strong>
如上图所示，覆盖 3 行的一种可行办法是选择第 0 和第 2 列。
可以看出，不存在大于 3 行被覆盖的方案，所以我们返回 3 。
</pre>

<p><strong>示例 2：</strong></p>

<p><strong><img alt="" src="https://assets.leetcode.com/uploads/2022/07/14/rowscovered2.png" style="width: 83px; height: 247px;"></strong></p>

<pre><b>输入：</b>mat = [[1],[0]], cols = 1
<b>输出：</b>2
<strong>解释：</strong>
选择唯一的一列，两行都被覆盖了，原因是整个矩阵都被覆盖了。
所以我们返回 2 。
</pre>

<p>&nbsp;</p>

<p><strong>提示：</strong></p>

<ul>
	<li><code>m == mat.length</code></li>
	<li><code>n == mat[i].length</code></li>
	<li><code>1 &lt;= m, n &lt;= 12</code></li>
	<li><code>mat[i][j]</code>&nbsp;要么是&nbsp;<code>0</code>&nbsp;要么是&nbsp;<code>1</code>&nbsp;。</li>
	<li><code>1 &lt;= cols &lt;= n</code></li>
</ul>
