### [Flower Planting With No Adjacent](https://leetcode.com/problems/flower-planting-with-no-adjacent)

<p>You have <code>n</code> gardens, labeled from&nbsp;<code>1</code> to <code>n</code>, and an array <code>paths</code> where&nbsp;<code>paths[i] = [x<sub>i</sub>, y<sub>i</sub>]</code> describes the existence of a bidirectional path from garden <code>x<sub>i</sub></code> to garden <code>y<sub>i</sub></code>. In each garden, you want to plant one of 4 types of flowers.</p>

<p>There is no garden that has more than three paths coming into or leaving it.</p>

<p>Your task is to choose a flower type for each garden such that,&nbsp;for any two gardens connected by a path, they have different types of flowers.</p>

<p>Return <strong>any</strong> such a choice as an array <code>answer</code>, where&nbsp;<code>answer[i]</code> is the type of flower&nbsp;planted in the <code>(i+1)<sup>th</sup></code> garden.&nbsp; The flower types are denoted&nbsp;<font face="monospace">1</font>, <font face="monospace">2</font>, <font face="monospace">3</font>, or <font face="monospace">4</font>.&nbsp; It is guaranteed an answer exists.</p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>
<pre><strong>Input:</strong> n = 3, paths = [[1,2],[2,3],[3,1]]
<strong>Output:</strong> [1,2,3]
</pre><p><strong>Example 2:</strong></p>
<pre><strong>Input:</strong> n = 4, paths = [[1,2],[3,4]]
<strong>Output:</strong> [1,2,1,2]
</pre><p><strong>Example 3:</strong></p>
<pre><strong>Input:</strong> n = 4, paths = [[1,2],[2,3],[3,4],[4,1],[1,3],[2,4]]
<strong>Output:</strong> [1,2,3,4]
</pre>
<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= n &lt;= 10<sup>4</sup></code></li>
	<li><code>0 &lt;= paths.length &lt;= 2 * 10<sup>4</sup></code></li>
	<li><code>paths[i].length == 2</code></li>
	<li><code>1 &lt;= x<sub>i</sub>, y<sub>i</sub> &lt;= n</code></li>
	<li><code>x<sub>i</sub> != y<sub>i</sub></code></li>
	<li>No garden has <strong>four or more</strong> paths coming into or leaving it.</li>
</ul>
