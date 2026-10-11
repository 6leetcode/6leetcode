### [Nearest Available Drone](https://leetcode.com/problems/nearest-available-drone)

<p>You are given a 2D integer array <code>drones</code>, where <code>drones[i] = [x<sub>i</sub>, y<sub>i</sub>, range<sub>i</sub>]</code> represents the x-coordinate, y-coordinate, and travel range of the <code>i<sup>th</sup></code> drone.</p>

<p>You are also given an integer array <code>target = [tx, ty]</code>, representing the coordinates of the target.</p>

<p>A drone <code>drones[i]</code> can reach the target if the <span data-keyword="manhattan-distance">Manhattan distance</span> between its coordinates and the target coordinates is <strong>less than or equal</strong> to its <code>range<sub>i</sub></code>.</p>

<p>Return the <strong>index</strong> of the reachable drone with the <strong>minimum Manhattan distance</strong> to the target. If there is a tie, return the <strong>smallest index</strong>. If no drone can reach the target, return <code>-1</code>.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<div class="example-block">
<p><strong>Input:</strong> <span class="example-io">drones = [[0,0,8],[2,2,9]], target = [3,4]</span></p>

<p><strong>Output:</strong> <span class="example-io">1</span></p>

<p><strong>Explanation:</strong></p>

<ul>
	<li>The distance between <code>drones[0]</code> and <code>target</code> is <code>|0 - 3| + |0 - 4| = 7</code>, which is within its range of 8.</li>
	<li>The distance between <code>drones[1]</code> and <code>target</code> is <code>|2 - 3| + |2 - 4| = 3</code>, which is within its range of 9.</li>
	<li>Since <code>drones[1]</code> is the nearest drone, the answer is 1.</li>
</ul>
</div>

<p><strong class="example">Example 2:</strong></p>

<div class="example-block">
<p><strong>Input:</strong> <span class="example-io">drones = [[2,1,5],[4,4,5],[6,6,8]], target = [5,5]</span></p>

<p><strong>Output:</strong> <span class="example-io">1</span></p>

<p><strong>Explanation:</strong></p>

<ul>
	<li>The distance between <code>drones[0]</code> and <code>target</code> is <code>|2 - 5| + |1 - 5| = 7</code>, which is greater than its range of 5.</li>
	<li>The distance between <code>drones[1]</code> and <code>target</code> is <code>|4 - 5| + |4 - 5| = 2</code>, which is within its range of 5.</li>
	<li>The distance between <code>drones[2]</code> and <code>target</code> is <code>|6 - 5| + |6 - 5| = 2</code>, which is within its range of 8.</li>
	<li>Both <code>drones[1]</code> and <code>drones[2]</code> are the nearest drones. Since we should return the smallest index, the answer is 1.</li>
</ul>
</div>

<p><strong class="example">Example 3:</strong></p>

<div class="example-block">
<p><strong>Input:</strong> <span class="example-io">drones = [[4,4,5]], target = [8,6]</span></p>

<p><strong>Output:</strong> <span class="example-io">-1</span></p>

<p><strong>Explanation:</strong></p>

<ul>
	<li>The distance between <code>drones[0]</code> and <code>target</code> is <code>|4 - 8| + |4 - 6| = 6</code>, which is greater than its range of 5.</li>
	<li>No drone can reach the target, so the answer is -1.</li>
</ul>
</div>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= drones.length &lt;= 100</code></li>
	<li><code>drones[i] = [x<sub>i</sub>, y<sub>i</sub>, range<sub>i</sub>]</code></li>
	<li><code>target = [tx, ty]</code></li>
	<li><code>-25 &lt;= x<sub>i</sub>, y<sub>i</sub>, tx, ty &lt;= 25</code></li>
	<li><code>1 &lt;= range<sub>i</sub> &lt;= 100</code></li>
</ul>
