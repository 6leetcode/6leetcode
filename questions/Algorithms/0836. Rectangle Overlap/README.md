### [Rectangle Overlap](https://leetcode.com/problems/rectangle-overlap)

<p>A rectangle is&nbsp;represented as a&nbsp;list <code>[x1, y1, x2, y2]</code>, where&nbsp;<code>(x1, y1)</code>&nbsp;are the coordinates of its bottom-left corner, and <code>(x2,&nbsp;y2)</code>&nbsp;are the coordinates of its top-right corner.</p>

<p>Two rectangles overlap if the area of their intersection is positive.&nbsp; To be clear, two rectangles that only touch at the corner or edges do not overlap.</p>

<p>Given two (axis-aligned) rectangles, return whether&nbsp;they overlap.</p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>
<pre><strong>Input:</strong> rec1 = [0,0,2,2], rec2 = [1,1,3,3]
<strong>Output:</strong> true
</pre><p><strong>Example 2:</strong></p>
<pre><strong>Input:</strong> rec1 = [0,0,1,1], rec2 = [1,0,2,1]
<strong>Output:</strong> false
</pre><p><strong>Example 3:</strong></p>
<pre><strong>Input:</strong> rec1 = [0,0,1,1], rec2 = [2,2,3,3]
<strong>Output:</strong> false
</pre>
<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>rect1.length == 4</code></li>
	<li><code>rect2.length == 4</code></li>
	<li><code><sup>9</sup> &lt;= rec1[i], rec2[i] &lt;= 10<sup>9</sup></code></li>
	<li><code>rec1[0] &lt;= rec1[2]</code> and <code>rec1[1] &lt;= rec1[3]</code></li>
	<li><code>rec2[0] &lt;= rec2[2]</code> and <code>rec2[1] &lt;= rec2[3]</code></li>
</ul>
