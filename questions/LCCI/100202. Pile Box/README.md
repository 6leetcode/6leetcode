### [Pile Box](https://leetcode.com/problems/pile-box-lcci)

<p>You have a stack of n boxes, with widths wi, depths di, and heights hi. The boxes cannot be rotated and can only be stacked on top of one another if each box in the stack is strictly larger than the box above it in width, height, and depth. Implement a method to compute the height of the tallest possible stack. The height of a stack is the sum of the heights of each box.</p>

<p>The input use <code>[wi, di, hi]</code>&nbsp;to represents each box.</p>

<p><strong>Example1:</strong></p>

<pre>
<strong> Input</strong>: box = [[1, 1, 1], [2, 2, 2], [3, 3, 3]]
<strong> Output</strong>: 6
</pre>

<p><strong>Example2:</strong></p>

<pre>
<strong> Input</strong>: box = [[1, 1, 1], [2, 3, 4], [2, 6, 7], [3, 4, 5]]
<strong> Output</strong>: 10
</pre>

<p><strong>Note:</strong></p>

<ol>
	<li><code>box.length &lt;= 3000</code></li>
</ol>
