### [滑动谜题](https://leetcode-cn.com/problems/sliding-puzzle)

<p>在一个 <code>2 x 3</code> 的板上（<code>board</code>）有 5 块砖瓦，用数字 <code>1~5</code> 来表示, 以及一块空缺用&nbsp;<code>0</code>&nbsp;来表示。一次 <strong>移动</strong> 定义为选择&nbsp;<code>0</code>&nbsp;与一个相邻的数字（上下左右）进行交换.</p>

<p>最终当板&nbsp;<code>board</code>&nbsp;的结果是&nbsp;<code>[[1,2,3],[4,5,0]]</code>&nbsp;谜板被解开。</p>

<p>给出一个谜板的初始状态&nbsp;<code>board</code>&nbsp;，返回最少可以通过多少次移动解开谜板，如果不能解开谜板，则返回 <code>-1</code> 。</p>

<p>&nbsp;</p>

<p><strong>示例 1：</strong></p>

<p><img src="https://assets.leetcode.com/uploads/2021/06/29/slide1-grid.jpg" /></p>

<pre>
<strong>输入：</strong>board = [[1,2,3],[4,0,5]]
<strong>输出：</strong>1
<strong>解释：</strong>交换 0 和 5 ，1 步完成
</pre>

<p><strong>示例 2:</strong></p>

<p><img src="https://assets.leetcode.com/uploads/2021/06/29/slide2-grid.jpg" /></p>

<pre>
<strong>输入：</strong>board = [[1,2,3],[5,4,0]]
<strong>输出：</strong>-1
<strong>解释：</strong>没有办法完成谜板
</pre>

<p><strong>示例 3:</strong></p>

<p><img alt="" src="https://assets.leetcode.com/uploads/2021/06/29/slide3-grid.jpg" /></p>

<pre>
<strong>输入：</strong>board = [[4,1,2],[5,0,3]]
<strong>输出：</strong>5
<strong>解释：</strong>
最少完成谜板的最少移动次数是 5 ，
一种移动路径:
尚未移动: [[4,1,2],[5,0,3]]
移动 1 次: [[4,1,2],[0,5,3]]
移动 2 次: [[0,1,2],[4,5,3]]
移动 3 次: [[1,0,2],[4,5,3]]
移动 4 次: [[1,2,0],[4,5,3]]
移动 5 次: [[1,2,3],[4,5,0]]
</pre>

<p>&nbsp;</p>

<p><strong>提示：</strong></p>

<ul>
	<li><code>board.length == 2</code></li>
	<li><code>board[i].length == 3</code></li>
	<li><code>0 &lt;= board[i][j] &lt;= 5</code></li>
	<li><code>board[i][j]</code>&nbsp;中每个值都 <strong>不同</strong></li>
</ul>
