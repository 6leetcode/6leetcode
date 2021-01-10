### [Walking Robot Simulation](https://leetcode.com/problems/walking-robot-simulation)

<p>A robot on an infinite grid starts at point <code>(0, 0)</code> and faces north. The robot can receive one of three possible types of <code>commands</code>:</p>

<ul>
	<li><code>-2</code>: turn left <code>90</code> degrees,</li>
	<li><code>-1</code>: turn right <code>90</code> degrees, or</li>
	<li><code>1 &lt;= x &lt;= 9</code>: move forward <code>x</code> units</li>
</ul>

<p>Some of the grid squares are <code>obstacles</code>. The <code>i<sup>th</sup></code> obstacle is at grid point <code>obstacles[i] = (x<sub>i</sub>, y<sub>i</sub>)</code>.</p>

<p>If the robot would try to move onto them, the robot stays on the previous grid square instead (but still continues following the rest of the route.)</p>

<p>Return <em>the <strong>square</strong> of the maximum Euclidean distance that the robot will be from the origin</em>.</p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>

<pre>
<strong>Input:</strong> commands = [4,-1,3], obstacles = []
<strong>Output:</strong> 25
<strong>Explanation:</strong> robot will go to (3, 4)
</pre>

<p><strong>Example 2:</strong></p>

<pre>
<strong>Input:</strong> commands = [4,-1,4,-2,4], obstacles = [[2,4]]
<strong>Output:</strong> 65
<strong>Explanation:</strong> robot will be stuck at (1, 4) before turning left and going to (1, 8)
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= commands.length &lt;= 10<sup>4</sup></code></li>
	<li><code>commands[i]</code> is in the list <code>[-2,-1,1,2,3,4,5,6,7,8,9]</code>.</li>
	<li><code>0 &lt;= obstacles.length &lt;= 10<sup>4</sup></code></li>
	<li><code>-3 * 10<sup>4</sup> &lt;= x<sub>i</sub>, y<sub>i</sub> &lt;= 3 * 10<sup>4</sup></code></li>
	<li>The answer is guaranteed to be less than <code>2<sup>31</sup></code>.</li>
</ul>
