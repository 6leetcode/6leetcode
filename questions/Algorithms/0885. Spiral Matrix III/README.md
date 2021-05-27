### [Spiral Matrix III](https://leetcode.com/problems/spiral-matrix-iii)

<p>On a 2 dimensional grid with <code>rows</code> rows and <code>cols</code> columns, we start at <code>(rStart, cStart)</code> facing east.</p>

<p>Here, the north-west corner of the grid is at the&nbsp;first row and column, and the south-east corner of the grid is at the last row and column.</p>

<p>Now, we walk in a clockwise spiral shape to visit every position in this grid.&nbsp;</p>

<p>Whenever we would move outside the boundary of the grid, we continue our walk outside the grid (but may return to the grid boundary later.)&nbsp;</p>

<p>Eventually, we reach all <code>rows * cols</code> spaces of the grid.</p>

<p>Return a list of coordinates representing the positions of the grid in the order they were visited.</p>

<p>&nbsp;</p>

<p><strong>Example 1:</strong></p>

<pre>
<strong>Input: </strong>rows = <span id="example-input-1-1">1</span>, cols = <span id="example-input-1-2">4</span>, rStart = <span id="example-input-1-3">0</span>, cStart = <span id="example-input-1-4">0</span>
<strong>Output: </strong><span id="example-output-1">[[0,0],[0,1],[0,2],[0,3]]</span>

<img alt="" src="https://s3-lc-upload.s3.amazonaws.com/uploads/2018/08/24/example_1.png" style="width: 174px; height: 99px;" />
</pre>

<p>&nbsp;</p>

<p><strong>Example 2:</strong></p>

<pre>
<strong>Input: </strong>rows = <span id="example-input-2-1">5</span>, cols = <span id="example-input-2-2">6</span>, rStart = <span id="example-input-2-3">1</span>, cStart = <span id="example-input-2-4">4</span>
<strong>Output: </strong><span id="example-output-2">[[1,4],[1,5],[2,5],[2,4],[2,3],[1,3],[0,3],[0,4],[0,5],[3,5],[3,4],[3,3],[3,2],[2,2],[1,2],[0,2],[4,5],[4,4],[4,3],[4,2],[4,1],[3,1],[2,1],[1,1],[0,1],[4,0],[3,0],[2,0],[1,0],[0,0]]</span>

<img alt="" src="https://s3-lc-upload.s3.amazonaws.com/uploads/2018/08/24/example_2.png" style="width: 202px; height: 142px;" />
</pre>

<div>
<div>
<p>&nbsp;</p>

<p><strong>Note:</strong></p>

<ol>
	<li><code>1 &lt;= rows &lt;= 100</code></li>
	<li><code>1 &lt;= cols &lt;= 100</code></li>
	<li><code>0 &lt;= rStart &lt; rows</code></li>
	<li><code>0 &lt;= cStart &lt; cols</code></li>
</ol>
</div>
</div>
