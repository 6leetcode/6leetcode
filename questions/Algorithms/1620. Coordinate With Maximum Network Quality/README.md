### [Coordinate With Maximum Network Quality](https://leetcode.com/problems/coordinate-with-maximum-network-quality)

<p>You are given an array of network towers <code>towers</code> and an integer <code>radius</code>, where <code>towers[i] = [x<sub>i</sub>, y<sub>i</sub>, q<sub>i</sub>]</code> denotes the <code>i<sup>th</sup></code> network tower with location <code>(x<sub>i</sub>, y<sub>i</sub>)</code> and quality factor <code>q<sub>i</sub></code>. All the coordinates are <strong>integral coordinates</strong> on the X-Y plane, and the distance between two coordinates is the <strong>Euclidean distance</strong>.</p>

<p>The integer <code>radius</code> denotes the <strong>maximum distance</strong> in which the tower is <strong>reachable</strong>. The tower is <strong>reachable</strong> if the distance is less than or equal to <code>radius</code>. Outside that distance, the signal becomes garbled, and the tower is <strong>not reachable</strong>.</p>

<p>The signal quality of the <code>i<sup>th</sup></code> tower at a coordinate <code>(x, y)</code> is calculated with the formula <code>&lfloor;q<sub>i</sub> / (1 + d)&rfloor;</code>, where <code>d</code> is the distance between the tower and the coordinate. The <strong>network quality</strong> at a coordinate is the sum of the signal qualities from all the <strong>reachable</strong> towers.</p>

<p>Return <em>the integral coordinate where the <strong>network quality</strong> is maximum</em>. If there are multiple coordinates with the same <strong>network quality</strong>, return <em>the lexicographically minimum coordinate</em>.</p>

<p><strong>Note:</strong></p>

<ul>
	<li>A coordinate <code>(x1, y1)</code> is lexicographically smaller than <code>(x2, y2)</code> if either <code>x1 &lt; x2</code> or <code>x1 == x2</code> and <code>y1 &lt; y2</code>.</li>
	<li><code>&lfloor;val&rfloor;</code> is the greatest integer less than or equal to <code>val</code> (the floor function).</li>
</ul>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2020/09/22/untitled-diagram.png" style="width: 176px; height: 176px;" />
<pre>
<strong>Input:</strong> towers = [[1,2,5],[2,1,7],[3,1,9]], radius = 2
<strong>Output:</strong> [2,1]
<strong>Explanation: </strong>
At coordinate (2, 1) the total quality is 13
- Quality of 7 from (2, 1) results in &lfloor;7 / (1 + sqrt(0)&rfloor; = &lfloor;7&rfloor; = 7
- Quality of 5 from (1, 2) results in &lfloor;5 / (1 + sqrt(2)&rfloor; = &lfloor;2.07&rfloor; = 2
- Quality of 9 from (3, 1) results in &lfloor;9 / (1 + sqrt(1)&rfloor; = &lfloor;4.5&rfloor; = 4
No other coordinate has higher quality.</pre>

<p><strong>Example 2:</strong></p>

<pre>
<strong>Input:</strong> towers = [[23,11,21]], radius = 9
<strong>Output:</strong> [23,11]
</pre>

<p><strong>Example 3:</strong></p>

<pre>
<strong>Input:</strong> towers = [[1,2,13],[2,1,7],[0,1,9]], radius = 2
<strong>Output:</strong> [1,2]
</pre>

<p><strong>Example 4:</strong></p>

<pre>
<strong>Input:</strong> towers = [[2,1,9],[0,1,9]], radius = 2
<strong>Output:</strong> [0,1]
<strong>Explanation: </strong>Both (0, 1) and (2, 1) are optimal in terms of quality but (0, 1) is lexicograpically minimal.
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= towers.length &lt;= 50</code></li>
	<li><code>towers[i].length == 3</code></li>
	<li><code>0 &lt;= x<sub>i</sub>, y<sub>i</sub>, q<sub>i</sub> &lt;= 50</code></li>
	<li><code>1 &lt;= radius &lt;= 50</code></li>
</ul>
