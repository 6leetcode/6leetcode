### [Color Fill](https://leetcode.com/problems/color-fill-lcci)

<p>Implement the &quot;paint fill&quot; function that one might see on many image editing programs. That is, given a screen (represented by a two-dimensional array of colors), a point, and a new color, fill in the surrounding area until the color changes from the original color.</p>

<p><strong>Example1:</strong></p>

<pre>
<strong>Input</strong>: 
image = [[1,1,1],[1,1,0],[1,0,1]] 
sr = 1, sc = 1, newColor = 2
<strong>Output</strong>: [[2,2,2],[2,2,0],[2,0,1]]
<strong>Explanation</strong>: 
From the center of the image (with position (sr, sc) = (1, 1)), all pixels connected 
by a path of the same color as the starting pixel are colored with the new color.
Note the bottom corner is not colored 2, because it is not 4-directionally connected
to the starting pixel.</pre>

<p><b>Note:</b></p>

<ul>
	<li>The length of&nbsp;<code>image</code>&nbsp;and&nbsp;<code>image[0]</code>&nbsp;will be in the range&nbsp;<code>[1, 50]</code>.</li>
	<li>The given starting pixel will satisfy&nbsp;<code>0 &lt;= sr &lt; image.length</code>&nbsp;and&nbsp;<code>0 &lt;= sc &lt; image[0].length</code>.</li>
	<li>The value of each color in&nbsp;<code>image[i][j]</code>&nbsp;and&nbsp;<code>newColor</code>&nbsp;will be an integer in&nbsp;<code>[0, 65535]</code>.</li>
</ul>
