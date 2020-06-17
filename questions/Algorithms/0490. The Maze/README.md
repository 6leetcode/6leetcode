### [The Maze](https://leetcode.com/problems/the-maze)

<p>There is a <b>ball</b> in a maze with empty spaces and walls. The ball can go through empty spaces by rolling <b>up</b>, <b>down</b>, <b>left</b> or <b>right</b>, but it won&#39;t stop rolling until hitting a wall. When the ball stops, it could choose the next direction.</p>

<p>Given the ball&#39;s <b>start position</b>, the <b>destination</b> and the <b>maze</b>, determine whether the ball could stop at the destination.</p>

<p>The maze is represented by a binary 2D array. 1 means the wall and 0 means the empty space. You may assume that the borders of the maze are all walls. The start and destination coordinates are represented by row and column indexes.</p>

<p>&nbsp;</p>

<p><b>Example 1:</b></p>

<pre>
<b>Input 1:</b> a maze represented by a 2D array

0 0 1 0 0
0 0 0 0 0
0 0 0 1 0
1 1 0 1 1
0 0 0 0 0

<b>Input 2:</b> start coordinate (rowStart, colStart) = (0, 4)
<b>Input 3:</b> destination coordinate (rowDest, colDest) = (4, 4)

<b>Output:</b> true

<b>Explanation:</b> One possible way is : left -&gt; down -&gt; left -&gt; down -&gt; right -&gt; down -&gt; right.
<img src="https://assets.leetcode.com/uploads/2018/10/12/maze_1_example_1.png" style="width: 100%; max-width:350px;" />
</pre>

<p><b>Example 2:</b></p>

<pre>
<b>Input 1:</b> a maze represented by a 2D array

0 0 1 0 0
0 0 0 0 0
0 0 0 1 0
1 1 0 1 1
0 0 0 0 0

<b>Input 2:</b> start coordinate (rowStart, colStart) = (0, 4)
<b>Input 3:</b> destination coordinate (rowDest, colDest) = (3, 2)

<b>Output:</b> false

<b>Explanation:</b> There is no way for the ball to stop at the destination.
<img src="https://assets.leetcode.com/uploads/2018/10/13/maze_1_example_2.png" style="width: 100%; max-width:350px;" />
</pre>

<p>&nbsp;</p>

<p><b>Note:</b></p>

<ol>
	<li>There is only one ball and one destination in the maze.</li>
	<li>Both the ball and the destination exist on an empty space, and they will not be at the same position initially.</li>
	<li>The given maze does not contain border (like the red rectangle in the example pictures), but you could assume the border of the maze are all walls.</li>
	<li>The maze contains at least 2 empty spaces, and both the width and height of the maze won&#39;t exceed 100.</li>
</ol>
