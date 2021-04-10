### [Most Stones Removed with Same Row or Column](https://leetcode.com/problems/most-stones-removed-with-same-row-or-column)

<p>On a 2D plane, we place <code>stones</code> at some integer coordinate points. Each coordinate point may have at most one stone.</p>

<p>A <strong>move</strong> consists of removing a stone&nbsp;that shares a column or row with another stone on the grid.</p>

<p>Given an array <code>stones</code> where <code>stones[i] = [x<sub>i</sub>, y<sub>i</sub>]</code>,&nbsp;return <em>the largest possible number of moves we can make</em>.</p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>

<pre>
<strong>Input:</strong> stones = [[0,0],[0,1],[1,0],[1,2],[2,1],[2,2]]
<strong>Output:</strong> 5
</pre>

<p><strong>Example 2:</strong></p>

<pre>
<strong>Input:</strong> stones = [[0,0],[0,2],[1,1],[2,0],[2,2]]
<strong>Output:</strong> 3
</pre>

<p><strong>Example 3:</strong></p>

<pre>
<strong>Input:</strong> stones = [[0,0]]
<strong>Output:</strong> 0
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= stones.length &lt;= 1000</code></li>
	<li><code>0 &lt;= x<sub>i</sub>, y<sub>i</sub> &lt; 10<sup>4</sup></code></li>
	<li><code>stones</code> contains unique values.</li>
</ul>
