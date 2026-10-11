### [Rectangle Overlap](https://leetcode.com/problems/rectangle-overlap)

<p>An axis-aligned rectangle is represented as a list <code>[x1, y1, x2, y2]</code>, where <code>(x1, y1)</code> is the coordinate of its bottom-left corner, and <code>(x2, y2)</code> is the coordinate of its top-right corner. Its top and bottom edges are parallel to the X-axis, and its left and right edges are parallel to the Y-axis.</p>

<p>Two rectangles overlap if the area of their intersection is <strong>positive</strong>. To be clear, two rectangles that only touch at the corner or edges do not overlap.</p>

<p>Given two axis-aligned rectangles <code>rec1</code> and <code>rec2</code>, return <code>true</code><em> if they overlap, otherwise return </em><code>false</code>.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<div class="example-block">
<p><strong>Input:</strong> <span class="example-io">rec1 = [0,0,2,2], rec2 = [1,1,3,3]</span></p>

<p><strong>Output:</strong> <span class="example-io">true</span></p>

<p><strong>Explanation:</strong></p>

<p>The rectangles overlap in the region with corners at <code>(1,1)</code>, <code>(2,1)</code>, <code>(1,2)</code>, and <code>(2,2)</code>.</p>

<p>This region has positive area, so the rectangles overlap.</p>
</div>

<p><strong class="example">Example 2:</strong></p>

<div class="example-block">
<p><strong>Input:</strong> <span class="example-io">rec1 = [0,0,1,1], rec2 = [1,0,2,1]</span></p>

<p><strong>Output:</strong> <span class="example-io">false</span></p>

<p><strong>Explanation:</strong></p>

<p>The rectangles share the vertical edge where <code>x = 1</code>, but they do not have any common interior region.</p>

<p>Since their intersection has zero area, the rectangles do not overlap.</p>
</div>

<p><strong class="example">Example 3:</strong></p>

<div class="example-block">
<p><strong>Input:</strong> <span class="example-io">rec1 = [0,0,1,1], rec2 = [2,2,3,3]</span></p>

<p><strong>Output:</strong> <span class="example-io">false</span></p>

<p><strong>Explanation:</strong></p>

<p>The rectangles are completely separate. Rectangle <code>rec1</code> ends at <code>x = 1</code> and <code>y = 1</code>, while <code>rec2</code> starts at <code>x = 2</code> and <code>y = 2</code>.</p>

<p>Therefore, they have no common points and do not overlap.</p>
</div>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>rec1.length == 4</code></li>
	<li><code>rec2.length == 4</code></li>
	<li><code>-10<sup>9</sup> &lt;= rec1[i], rec2[i] &lt;= 10<sup>9</sup></code></li>
	<li><code>rec1</code> and <code>rec2</code> represent a valid rectangle with a non-zero area.</li>
</ul>
