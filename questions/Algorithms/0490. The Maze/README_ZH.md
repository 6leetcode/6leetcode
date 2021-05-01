### [迷宫](https://leetcode-cn.com/problems/the-maze)

由空地（用 <code>0</code> 表示）和墙（用 <code>1</code> 表示）组成的迷宫 <code>maze</code> 中有一个球。球可以途经空地向<strong> 上、下、左、右 </strong>四个方向滚动，且在遇到墙壁前不会停止滚动。当球停下时，可以选择向下一个方向滚动。
<div class="top-view__1vxA">
<div class="original__bRMd">
<div>
<p>给你一个大小为 <code>m x n</code> 的迷宫 <code>maze</code> ，以及球的初始位置 <code>start</code> 和目的地 <code>destination</code> ，其中 <code>start = [start<sub>row</sub>, start<sub>col</sub>]</code> 且 <code>destination = [destination<sub>row</sub>, destination<sub>col</sub>]</code> 。请你判断球能否在目的地停下：如果可以，返回 <code>true</code> ；否则，返回 <code>false</code> 。</p>

<p>你可以 <strong>假定迷宫的边缘都是墙壁</strong>（参考示例）。</p>

<p> </p>

<p><strong>示例 1：</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2021/03/31/maze1-1-grid.jpg" style="width: 573px; height: 573px;" />
<pre>
<strong>输入：</strong>maze = [[0,0,1,0,0],[0,0,0,0,0],[0,0,0,1,0],[1,1,0,1,1],[0,0,0,0,0]], start = [0,4], destination = [4,4]
<strong>输出：</strong>true
<strong>解释：</strong>一种可能的路径是 : 左 -> 下 -> 左 -> 下 -> 右 -> 下 -> 右。
</pre>

<p><strong>示例 2：</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2021/03/31/maze1-2-grid.jpg" style="width: 573px; height: 573px;" />
<pre>
<strong>输入：</strong>maze = [[0,0,1,0,0],[0,0,0,0,0],[0,0,0,1,0],[1,1,0,1,1],[0,0,0,0,0]], start = [0,4], destination = [3,2]
<strong>输出：</strong>false
<strong>解释：</strong>不存在能够使球停在目的地的路径。注意，球可以经过目的地，但无法在那里停驻。
</pre>

<p><strong>示例 3：</strong></p>

<pre>
<strong>输入：</strong>maze = [[0,0,0,0,0],[1,1,0,0,1],[0,0,0,0,0],[0,1,0,0,1],[0,1,0,0,0]], start = [4,3], destination = [0,1]
<strong>输出：</strong>false
</pre>

<p> </p>

<p><strong>提示：</strong></p>

<ul>
	<li><code>m == maze.length</code></li>
	<li><code>n == maze[i].length</code></li>
	<li><code>1 <= m, n <= 100</code></li>
	<li><code>maze[i][j]</code> is <code>0</code> or <code>1</code>.</li>
	<li><code>start.length == 2</code></li>
	<li><code>destination.length == 2</code></li>
	<li><code>0 <= start<sub>row</sub>, destination<sub>row</sub> <= m</code></li>
	<li><code>0 <= start<sub>col</sub>, destination<sub>col</sub> <= n</code></li>
	<li>球和目的地都在空地上，且初始时它们不在同一位置</li>
	<li>迷宫 <strong>至少包括 2 块空地</strong></li>
</ul>
</div>
</div>
</div>
