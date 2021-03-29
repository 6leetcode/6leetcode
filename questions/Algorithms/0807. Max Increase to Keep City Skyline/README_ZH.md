### [保持城市天际线](https://leetcode-cn.com/problems/max-increase-to-keep-city-skyline)

<p>在二维数组<code>grid</code>中，<code>grid[i][j]</code>代表位于某处的建筑物的高度。 我们被允许增加任何数量（不同建筑物的数量可能不同）的建筑物的高度。 高度 0 也被认为是建筑物。</p>

<p>最后，从新数组的所有四个方向（即顶部，底部，左侧和右侧）观看的&ldquo;天际线&rdquo;必须与原始数组的天际线相同。 城市的天际线是从远处观看时，由所有建筑物形成的矩形的外部轮廓。 请看下面的例子。</p>

<p>建筑物高度可以增加的最大总和是多少？</p>

<pre>
<strong>例子：</strong>
<strong>输入：</strong> grid = [[3,0,8,4],[2,4,5,7],[9,2,6,3],[0,3,1,0]]
<strong>输出：</strong> 35
<strong>解释：</strong> 
The grid is:
[ [3, 0, 8, 4], 
  [2, 4, 5, 7],
  [9, 2, 6, 3],
  [0, 3, 1, 0] ]

从数组竖直方向（即顶部，底部）看&ldquo;天际线&rdquo;是：[9, 4, 8, 7]
从水平水平方向（即左侧，右侧）看&ldquo;天际线&rdquo;是：[8, 7, 9, 3]

在不影响天际线的情况下对建筑物进行增高后，新数组如下：

gridNew = [ [8, 4, 8, 7],
            [7, 4, 7, 7],
            [9, 4, 8, 7],
            [3, 3, 3, 3] ]
</pre>

<p><strong>说明: </strong></p>

<ul>
	<li><code>1 &lt; grid.length = grid[0].length &lt;= 50</code>。</li>
	<li>&nbsp;<code>grid[i][j]</code> 的高度范围是： <code>[0, 100]</code>。</li>
	<li>一座建筑物占据一个<code>grid[i][j]</code>：换言之，它们是 <code>1 x 1 x grid[i][j]</code> 的长方体。</li>
</ul>
