### [Cut Off Trees for Golf Event](https://leetcode.com/problems/cut-off-trees-for-golf-event)

<p>You are asked to cut off trees in a forest for a golf event. The forest is represented as an <code>m x n</code> map.&nbsp;In this map:</p>

<ol>
	<li><code>0</code> means the obstacle can&#39;t be reached.</li>
	<li><code>1</code> represents the ground can be walked through.</li>
	<li>A place with a number bigger than <code>1</code> represents a tree that can be walked through, and this positive number represents the tree&#39;s height.</li>
</ol>

<p>In one step, you can walk in any of the four directions:&nbsp;top, bottom, left, and right.&nbsp;When standing at a point, which is a tree, you can decide whether to cut off the tree.</p>

<p>You are asked to cut off all the trees in this forest in the order of the tree&#39;s height - always cut off the tree with <strong>the lowest</strong> height first. When you cut a tree, the value at its cell becomes&nbsp;<code>1</code>.</p>

<p>You will start from the point <code>(0, 0)</code>, return <em>the minimum steps you need to walk to cut off all the trees</em>. If you cannot cut off all the trees, return&nbsp;<code>-1</code>.</p>

<p>You are guaranteed that no two trees have the same height, and there is at least one tree needs to be cut off.</p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2020/11/26/trees1.jpg" style="width: 242px; height: 242px;" />
<pre>
<strong>Input:</strong> forest = [[1,2,3],[0,0,4],[7,6,5]]
<strong>Output:</strong> 6
</pre>

<p><strong>Example 2:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2020/11/26/trees2.jpg" style="width: 242px; height: 242px;" />
<pre>
<strong>Input:</strong> forest = [[1,2,3],[0,0,0],[7,6,5]]
<strong>Output:</strong> -1
</pre>

<p><strong>Example 3:</strong></p>

<pre>
<strong>Input:</strong> forest = [[2,3,4],[0,0,5],[8,7,6]]
<strong>Output:</strong> 6
<b>Explanation:</b> You started from the point (0,0) and you can cut off the tree in (0,0) directly without walking.
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>m == forest.length</code></li>
	<li><code>n == forest[i].length</code></li>
	<li><code>1 &lt;= m, n &lt;= 50</code></li>
	<li><code>0 &lt;= forest[i][j] &lt;= 10<sup>9</sup></code></li>
</ul>
