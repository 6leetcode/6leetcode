### [Faulty Sensor](https://leetcode.com/problems/faulty-sensor)

<p>An experiment is being conducted in a lab. To ensure accuracy, there are<strong> two </strong>sensors collecting data simultaneously. You are given 2 arrays <code>sensor1</code> and <code>sensor2</code>, where <code>sensor1[i]</code> and <code>sensor2[i]</code> are the <code>i<sup>th</sup></code> data points collected by the two sensors.</p>

<p>However, this type of sensor has a chance of being defective, which causes <strong>exactly one</strong> data point to be dropped. After the data is dropped, all the data points to the <strong>right</strong> of the dropped data are <strong>shifted</strong> one place to the left, and the last data point is replaced with some <strong>random value</strong>. It is guaranteed that this random value will <strong>not</strong> be equal to the dropped value.</p>

<ul>
	<li>For example, if the correct data is <code>[1,2,<u><strong>3</strong></u>,4,5]</code> and <code>3</code> is dropped, the sensor could return <code>[1,2,4,5,<u><strong>7</strong></u>]</code> (the last position can be <strong>any</strong> value, not just <code>7</code>).</li>
</ul>

<p>We know that there is a defect in <strong>at most one</strong> of the sensors. Return <em>the sensor number (</em><code>1</code><em> or </em><code>2</code><em>) with the defect. If there is <strong>no defect</strong> in either sensor or if it is<strong> impossible</strong> to determine the defective sensor, return </em><code>-1</code><em>.</em></p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>

<pre>
<strong>Input:</strong> sensor1 = [2,3,4,5], sensor2 = [2,1,3,4]
<strong>Output:</strong> 1
<strong>Explanation:</strong> Sensor 2 has the correct values.
The second data point from sensor 2 is dropped, and the last value of sensor 1 is replaced by a 5.
</pre>

<p><strong>Example 2:</strong></p>

<pre>
<strong>Input:</strong> sensor1 = [2,2,2,2,2], sensor2 = [2,2,2,2,5]
<strong>Output:</strong> -1
<strong>Explanation:</strong> It is impossible to determine which sensor has a defect.
Dropping the last value for either sensor could produce the output for the other sensor.
</pre>

<p><strong>Example 3:</strong></p>

<pre>
<strong>Input:</strong> sensor1 = [2,3,2,2,3,2], sensor2 = [2,3,2,3,2,7]
<strong>Output:</strong> 2
<strong>Explanation: </strong>Sensor 1 has the correct values.
The fourth data point from sensor 1 is dropped, and the last value of sensor 1 is replaced by a 7.
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>sensor1.length == sensor2.length</code></li>
	<li><code>1 &lt;= sensor1.length &lt;= 100</code></li>
	<li><code>1 &lt;= sensor1[i], sensor2[i] &lt;= 100</code></li>
</ul>
