### [Shortest Path in a Hidden Grid](https://leetcode.com/problems/shortest-path-in-a-hidden-grid)

<p>This is an <strong>interactive problem</strong>.</p>

<p>There is a robot in a hidden grid, and you are trying to get it from its starting cell to the target cell in this grid. The grid is of size <code>m x n</code>, and each cell in the grid is either empty or blocked. It is <strong>guaranteed</strong> that the starting cell and the target cell are different, and neither of them is blocked.</p>

<p>You want to find the minimum distance to the target cell. However, you <strong>do not know</strong> the grid&#39;s dimensions, the starting cell, nor the target cell. You are only allowed to ask queries to the <code>GridMaster</code> object.</p>

<p>Thr <code>GridMaster</code> class has the following functions:</p>

<ul>
	<li><code>boolean canMove(char direction)</code> Returns <code>true</code> if the robot can move in that direction. Otherwise, it returns <code>false</code>.</li>
	<li><code>void move(char direction)</code> Moves the robot in that direction. If this move would move the robot to a blocked cell or off the grid, the move will be <strong>ignored</strong>, and the robot will remain in the same position.</li>
	<li><code>boolean isTarget()</code> Returns <code>true</code> if the robot is currently on the target cell. Otherwise, it returns <code>false</code>.</li>
</ul>

<p>Note that <code>direction</code> in the above functions should be a character from <code>{&#39;U&#39;,&#39;D&#39;,&#39;L&#39;,&#39;R&#39;}</code>, representing the directions up, down, left, and right, respectively.</p>

<p>Return <em>the <strong>minimum distance</strong> between the robot&#39;s initial starting cell and the target cell. If there is no valid path between the cells, return </em><code>-1</code>.</p>

<p><strong>Custom testing:</strong></p>

<p>The test input is read as a 2D matrix <code>grid</code> of size <code>m x n</code> where:</p>

<ul>
	<li><code>grid[i][j] == -1</code> indicates that the robot is in cell <code>(i, j)</code> (the starting cell).</li>
	<li><code>grid[i][j] == 0</code> indicates that the cell <code>(i, j)</code> is blocked.</li>
	<li><code>grid[i][j] == 1</code> indicates that the cell <code>(i, j)</code> is empty.</li>
	<li><code>grid[i][j] == 2</code> indicates that the cell <code>(i, j)</code> is the target cell.</li>
</ul>

<p>There is exactly one <code>-1</code> and <code>2</code> in <code>grid</code>. Remember that you will <strong>not</strong> have this information in your code.</p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>

<pre>
<strong>Input:</strong> grid = [[1,2],[-1,0]]
<strong>Output:</strong> 2
<strong>Explanation:</strong> One possible interaction is described below:
The robot is initially standing on cell (1, 0), denoted by the -1.
- master.canMove(&#39;U&#39;) returns true.
- master.canMove(&#39;D&#39;) returns false.
- master.canMove(&#39;L&#39;) returns false.
- master.canMove(&#39;R&#39;) returns false.
- master.move(&#39;U&#39;) moves the robot to the cell (0, 0).
- master.isTarget() returns false.
- master.canMove(&#39;U&#39;) returns false.
- master.canMove(&#39;D&#39;) returns true.
- master.canMove(&#39;L&#39;) returns false.
- master.canMove(&#39;R&#39;) returns true.
- master.move(&#39;R&#39;) moves the robot to the cell (0, 1).
- master.isTarget() returns true. 
We now know that the target is the cell (0, 1), and the shortest path to the target cell is 2.
</pre>

<p><strong>Example 2:</strong></p>

<pre>
<strong>Input:</strong> grid = [[0,0,-1],[1,1,1],[2,0,0]]
<strong>Output:</strong> 4
<strong>Explanation:</strong>&nbsp;The minimum distance between the robot and the target cell is 4.</pre>

<p><strong>Example 3:</strong></p>

<pre>
<strong>Input:</strong> grid = [[-1,0],[0,2]]
<strong>Output:</strong> -1
<strong>Explanation:</strong>&nbsp;There is no path from the robot to the target cell.</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= n, m &lt;= 500</code></li>
	<li><code>m == grid.length</code></li>
	<li><code>n == grid[i].length</code></li>
	<li><code>grid[i][j]</code> is either <code>-1</code>, <code>0</code>, <code>1</code>, or <code>2</code>.</li>
	<li>There is <strong>exactly one</strong> <code>-1</code> in <code>grid</code>.</li>
	<li>There is <strong>exactly one</strong> <code>2</code> in <code>grid</code>.</li>
</ul>
