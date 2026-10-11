### [Minimize the Maximum Waiting Time at Synchronized Traffic Lights](https://leetcode.com/problems/minimize-the-maximum-waiting-time-at-synchronized-traffic-lights)

<p>You are given an integer <code>period</code> and an integer array <code>lights</code>, where <code>lights[i]</code> is the duration, in seconds, of the green phase of the <code>i<sup>th</sup></code> traffic light.</p>

<p>At time 0, every traffic light starts at the beginning of its green phase. Their cycles are synchronized: every traffic light starts a new cycle at the same time, and every cycle lasts <strong>exactly</strong> <code>period</code> seconds. Therefore, the red phase of the <code>i<sup>th</sup></code> traffic light lasts for <code>period - lights[i]</code> seconds.</p>

<p>You are also given an integer array <code>arrivalTime</code>, where <code>arrivalTime[j]</code> is the arrival time, in seconds, of the <code>j<sup>th</sup></code> car.</p>

<p>Each car must be assigned to <strong>exactly</strong> one traffic light. Multiple cars may be assigned to the same traffic light. Any number of cars may cross the same traffic light simultaneously while it is green. Cars do not block or delay one another.</p>

<p>For a car <code>j</code> assigned to the <code>i<sup>th</sup></code> traffic light, let <code>r = arrivalTime[j] % period</code>. If <code>r &lt; lights[i]</code>, its waiting time is 0. Otherwise, its waiting time is <code>period - r</code>.</p>

<p>The <strong>penalty</strong> of an assignment is the <strong>maximum</strong> waiting time among all cars.</p>

<p>Return an integer denoting the <strong>minimum possible penalty</strong>.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<div class="example-block">
<p><strong>Input:</strong> <span class="example-io">period = 8, lights = [2,3], arrivalTime = [2,5,8,11]</span></p>

<p><strong>Output:</strong> <span class="example-io">5</span></p>

<p><strong>Explanation:</strong></p>

<p>One optimal solution is:</p>

<ul>
	<li>Assign <code>arrivalTime[0]</code> to the traffic light with <code>lights[1] = 3</code>. Here, <code>r = 2 % 8 = 2</code>. Since <code>2 &lt; 3</code>, the waiting time is 0.</li>
	<li>Assign <code>arrivalTime[1]</code> to the traffic light with <code>lights[0] = 2</code>. Here, <code>r = 5 % 8 = 5</code>. Since <code>5 &gt;= 2</code>, the waiting time is <code>8 - 5 = 3</code>.</li>
	<li>Assign <code>arrivalTime[2]</code> to the traffic light with <code>lights[0] = 2</code>. Here, <code>r = 8 % 8 = 0</code>. Since <code>0 &lt; 2</code>, the waiting time is 0.</li>
	<li>Assign <code>arrivalTime[3]</code> to the traffic light with <code>lights[0] = 2</code>. Here, <code>r = 11 % 8 = 3</code>. Since <code>3 &gt;= 2</code>, the waiting time is <code>8 - 3 = 5</code>.</li>
</ul>

<p>The penalty of this assignment is 5, which is the minimum possible. Other optimal assignments may exist.</p>
</div>

<p><strong class="example">Example 2:</strong></p>

<div class="example-block">
<p><strong>Input:</strong> <span class="example-io">period = 10, lights = [3,6,8], arrivalTime = [4,9,15]</span></p>

<p><strong>Output:</strong> <span class="example-io">1</span></p>

<p><strong>Explanation:</strong></p>

<p>One optimal solution is:</p>

<ul>
	<li>Assign <code>arrivalTime[0]</code> to the traffic light with <code>lights[2] = 8</code>. Here, <code>r = 4 % 10 = 4</code>. Since <code>4 &lt; 8</code>, the waiting time is 0.</li>
	<li>Assign <code>arrivalTime[1]</code> to the traffic light with <code>lights[2] = 8</code>. Here, <code>r = 9 % 10 = 9</code>. Since <code>9 &gt;= 8</code>, the waiting time is <code>10 - 9 = 1</code>.</li>
	<li>Assign <code>arrivalTime[2]</code> to the traffic light with <code>lights[2] = 8</code>. Here, <code>r = 15 % 10 = 5</code>. Since <code>5 &lt; 8</code>, the waiting time is 0.</li>
</ul>

<p>The penalty of this assignment is 1, which is the minimum possible.</p>
</div>

<p><strong class="example">Example 3:</strong></p>

<div class="example-block">
<p><strong>Input:</strong> <span class="example-io">period = 5, lights = [2], arrivalTime = [2,3,4,5,6]</span></p>

<p><strong>Output:</strong> <span class="example-io">3</span></p>

<p><strong>Explanation:</strong></p>

<p>One optimal solution is:</p>

<ul>
	<li>Assign <code>arrivalTime[0]</code> to the traffic light with <code>lights[0] = 2</code>. Here, <code>r = 2 % 5 = 2</code>. Since <code>2 &gt;= 2</code>, the waiting time is <code>5 - 2 = 3</code>.</li>
	<li>Assign <code>arrivalTime[1]</code> to the traffic light with <code>lights[0] = 2</code>. Here, <code>r = 3 % 5 = 3</code>. Since <code>3 &gt;= 2</code>, the waiting time is <code>5 - 3 = 2</code>.</li>
	<li>Assign <code>arrivalTime[2]</code> to the traffic light with <code>lights[0] = 2</code>. Here, <code>r = 4 % 5 = 4</code>. Since <code>4 &gt;= 2</code>, the waiting time is <code>5 - 4 = 1</code>.</li>
	<li>Assign <code>arrivalTime[3]</code> to the traffic light with <code>lights[0] = 2</code>. Here, <code>r = 5 % 5 = 0</code>. Since <code>0 &lt; 2</code>, the waiting time is 0.</li>
	<li>Assign <code>arrivalTime[4]</code> to the traffic light with <code>lights[0] = 2</code>. Here, <code>r = 6 % 5 = 1</code>. Since <code>1 &lt; 2</code>, the waiting time is 0.</li>
</ul>

<p>The penalty of this assignment is 3, which is the minimum possible.</p>
</div>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>2 &lt;= period &lt;= 10<sup>9</sup></code></li>
	<li><code>1 &lt;= lights.length &lt;= 10<sup>4</sup></code></li>
	<li><code>1 &lt;= lights[i] &lt;= period - 1</code></li>
	<li><code>1 &lt;= arrivalTime.length &lt;= 10<sup>5</sup></code></li>
	<li><code>1 &lt;= arrivalTime[i] &lt;= 10<sup>9</sup></code></li>
</ul>
