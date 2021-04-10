### [岛屿数量 II](https://leetcode-cn.com/problems/number-of-islands-ii)

<p>假设你设计一个游戏，用一个&nbsp;<code>m</code>&nbsp;行&nbsp;<code>n</code>&nbsp;列的&nbsp;2D 网格来存储你的游戏地图。</p>

<p>起始的时候，每个格子的地形都被默认标记为「水」。我们可以通过使用&nbsp;<code>addLand</code>&nbsp;进行操作，将位置 <code>(row, col)</code> 的「水」变成「陆地」。</p>

<p>你将会被给定一个列表，来记录所有需要被操作的位置，然后你需要返回计算出来&nbsp;<strong>每次&nbsp;<em>addLand </em>操作后岛屿的数量</strong>。</p>

<p>注意：一个岛的定义是被「水」包围的「陆地」，通过水平方向或者垂直方向上相邻的陆地连接而成。你可以假设地图网格的四边均被无边无际的「水」所包围。</p>

<p>请仔细阅读下方示例与解析，更加深入了解岛屿的判定。</p>

<p><strong>示例:</strong></p>

<pre><strong>输入:</strong> m = 3, n = 3, positions = [[0,0], [0,1], [1,2], [2,1]]
<strong>输出:</strong> [1,1,2,3]
</pre>

<p><strong>解析:</strong></p>

<p>起初，二维网格&nbsp;<code>grid</code>&nbsp;被全部注入「水」。（0 代表「水」，1 代表「陆地」）</p>

<pre>0 0 0
0 0 0
0 0 0
</pre>

<p>操作&nbsp;#1：<code>addLand(0, 0)</code> 将&nbsp;<code>grid[0][0]</code> 的水变为陆地。</p>

<pre>1 0 0
0 0 0   Number of islands = 1
0 0 0
</pre>

<p>操作&nbsp;#2：<code>addLand(0, 1)</code> 将&nbsp;<code>grid[0][1]</code> 的水变为陆地。</p>

<pre>1 1 0
0 0 0   岛屿的数量为 1
0 0 0
</pre>

<p>操作&nbsp;#3：<code>addLand(1, 2)</code> 将&nbsp;<code>grid[1][2]</code> 的水变为陆地。</p>

<pre>1 1 0
0 0 1   岛屿的数量为 2
0 0 0
</pre>

<p>操作&nbsp;#4：<code>addLand(2, 1)</code> 将&nbsp;<code>grid[2][1]</code> 的水变为陆地。</p>

<pre>1 1 0
0 0 1   岛屿的数量为 3
0 1 0
</pre>

<p><strong>拓展：</strong></p>

<p>你是否能在 O(k log mn) 的时间复杂度程度内完成每次的计算？（k 表示&nbsp;<code>positions</code>&nbsp;的长度）</p>
