### [Count Robot Groups](https://leetcode.com/problems/count-robot-groups)

<p>You are given a <span data-keyword="strictly-increasing-array">strictly increasing</span> integer array <code>position</code>, where <code>position[i]</code> is the initial position of the <code>i<sup>th</sup></code> robot at time <code>t = 0</code>.</p>

<p>You are also given an integer array <code>speed</code>, where <code>speed[i]</code> is the constant speed of the <code>i<sup>th</sup></code> robot in units per second, and an integer <code>distance</code>.</p>

<p>Time is <strong>continuous</strong> and measured in seconds. A robot or group with speed <code>v</code> moves <code>v * t</code> units to the right over any interval of <code>t</code> seconds.</p>

<p>Whenever the distance between two robots or groups becomes at most <code>distance</code>, they merge into a single group.</p>

<p>If multiple robots or groups satisfy the merging condition at the same time, all merges happen <strong>simultaneously</strong>. In particular, every connected collection of robots or groups whose consecutive positions differ by at most <code>distance</code> merges into one group.</p>

<p>After a merge, the resulting group takes the current position and speed of the <strong>rightmost robot</strong> in that group. Once merged, robots never separate.</p>

<p>Return the number of groups remaining after all possible merges have occurred.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<div class="example-block">
<p><strong>Input:</strong> <span class="example-io">position = [1,5,6,20], speed = [4,3,2,3], distance = 1</span></p>

<p><strong>Output:</strong> <span class="example-io">2</span></p>

<p><strong>Explanation:</strong></p>

<p><strong><img alt="" src="https://assets.leetcode.com/uploads/2026/08/09/c4drawio.png" style="width: 500px; height: 397px;" /></strong></p>

<ul>
	<li>Initially, the groups are {R<sub>1</sub>}, {R<sub>2</sub>}, {R<sub>3</sub>}, and {R<sub>​​​​​​​4</sub>}.</li>
	<li>At <code>t = 0</code>, the robots R<sub>2</sub> and R<sub>3</sub> at positions 5 and 6, respectively, merge because they are 1 unit apart. The resulting group moves with the position and speed of the rightmost robot R<sub>3</sub>. The groups are now {R<sub>1</sub>}, {R<sub>2</sub>, R<sub>3</sub>}, and {R<sub>​4</sub>}.</li>
	<li>Later at <code>t = 2</code>, the robot R<sub>1</sub> catches up to the group {R<sub>2</sub>, R<sub>3</sub>} and merges with it. The groups are now {R<sub>1</sub>, R<sub>2</sub>, R<sub>3</sub>} and {R<sub>​4</sub>}.</li>
</ul>

<p>Thus, the answer is 2.</p>
</div>

<p><strong class="example">Example 2:</strong></p>

<div class="example-block">
<p><strong>Input:</strong> <span class="example-io">position = [1,5,9], speed = [3,2,2], distance = 2</span></p>

<p><strong>Output:</strong> <span class="example-io">2</span></p>

<p><strong>Explanation:</strong></p>

<p><strong><img alt="" src="https://assets.leetcode.com/uploads/2026/08/09/c5.png" style="width: 500px; height: 310px;" /></strong></p>

<ul>
	<li>Initially, the groups are {R<sub>1</sub>}, {R<sub>2</sub>}, and {R<sub>3</sub>}.</li>
	<li>At <code>t = 2</code>, the robot R<sub>1</sub> catches up to the robot R<sub>2</sub> and merges with it. The resulting group moves with the position and speed of the rightmost robot R<sub>2</sub>. The groups are now {R<sub>1</sub>, R<sub>2</sub>} and {R<sub>3</sub>}.</li>
</ul>

<p>Thus, the answer is 2.</p>
</div>

<p><strong class="example">Example 3:</strong></p>

<div class="example-block">
<p><strong>Input:</strong> <span class="example-io">position = [9], speed = [8], distance = 5</span></p>

<p><strong>Output:</strong> <span class="example-io">1</span></p>

<p><strong>Explanation:</strong></p>

<p>Initially, there is only one group. Therefore, the answer is 1.</p>
</div>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= position.length == speed.length &lt;= 10<sup>5</sup></code></li>
	<li><code>1 &lt;= position[i], speed[i], distance &lt;= 10<sup>9</sup></code></li>
	<li><code>position</code> is strictly increasing.</li>
</ul>
