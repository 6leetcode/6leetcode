### [The Maze](https://leetcode.com/problems/the-maze)

<p>There is a ball in a <code>maze</code> with empty spaces (represented as <code>0</code>) and walls (represented as <code>1</code>). The ball can go through the empty spaces by rolling <strong>up, down, left or right</strong>, but it won&#39;t stop rolling until hitting a wall. When the ball stops, it could choose the next direction.</p>

<p>Given the <code>maze</code>, the ball&#39;s <code>start</code> position and&nbsp;the <code>destination</code>, where <code>start = [start<sub>row</sub>, start<sub>col</sub>]</code> and <code>destination&nbsp;= [destination<sub>row</sub>, destination<sub>col</sub>]</code>, return <code>true</code> if the ball can stop at the destination, otherwise return <code>false</code>.</p>

<p>You may assume that <strong>the borders of the maze are all walls</strong> (see examples).</p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2020/09/01/maze1.png" style="width: 500px; height: 277px;" />
<pre>
<strong>Input:</strong> maze = [[0,0,1,0,0],[0,0,0,0,0],[0,0,0,1,0],[1,1,0,1,1],[0,0,0,0,0]], start = [0,4], destination = [4,4]
<strong>Output:</strong> true
<strong>Explanation:</strong> One possible way is : left -&gt; down -&gt; left -&gt; down -&gt; right -&gt; down -&gt; right.
</pre>

<p><strong>Example 2:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2020/09/01/maze2.png" style="width: 500px; height: 277px;" />
<pre>
<strong>Input:</strong> maze = [[0,0,1,0,0],[0,0,0,0,0],[0,0,0,1,0],[1,1,0,1,1],[0,0,0,0,0]], start = [0,4], destination = [3,2]
<strong>Output:</strong> false
<strong>Explanation:</strong> There is no way for the ball to stop at the destination. Notice that you can pass through the destination but you cannot stop there.
</pre>

<p><strong>Example 3:</strong></p>

<pre>
<strong>Input:</strong> maze = [[0,0,0,0,0],[1,1,0,0,1],[0,0,0,0,0],[0,1,0,0,1],[0,1,0,0,0]], start = [4,3], destination = [0,1]
<strong>Output:</strong> false
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= maze.length, maze[i].length &lt;= 100</code></li>
	<li><code>maze[i][j]</code> is <code>0</code> or <code>1</code>.</li>
	<li><code>start.length == 2</code></li>
	<li><code>destination.length == 2</code></li>
	<li><code>0 &lt;= start<sub>row</sub>,&nbsp;destination<sub>row</sub> &lt;= maze.length</code></li>
	<li><code>0 &lt;= start<sub>col</sub>,&nbsp;destination<sub>col</sub> &lt;= maze[i].length</code></li>
	<li>Both the ball and the destination exist on an empty space, and they will not be at the same position initially.</li>
	<li>The maze contains <strong>at least 2 empty spaces</strong>.</li>
</ul>
