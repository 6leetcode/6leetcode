### [Meeting Scheduler](https://leetcode.com/problems/meeting-scheduler)

<p>Given the availability time slots arrays&nbsp;<code>slots1</code> and <code>slots2</code>&nbsp;of two people and a meeting duration <code>duration</code>, return the <strong>earliest time slot</strong> that works for both of them and is of duration <code>duration</code>.</p>

<p>If there is no common time slot that satisfies the requirements, return an <strong>empty array</strong>.</p>

<p>The format of a time slot is an array of two elements&nbsp;<code>[start, end]</code>&nbsp;representing an inclusive time range from <code>start</code>&nbsp;to <code>end</code>.&nbsp;&nbsp;</p>

<p>It is guaranteed that no two availability slots of the same person intersect with each other. That is, for any two time slots&nbsp;<code>[start1, end1]</code>&nbsp;and&nbsp;<code>[start2, end2]</code>&nbsp;of the same person, either&nbsp;<code>start1 &gt; end2</code>&nbsp;or&nbsp;<code>start2 &gt; end1</code>.</p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>

<pre>
<strong>Input:</strong> slots1 = [[10,50],[60,120],[140,210]], slots2 = [[0,15],[60,70]], duration = 8
<strong>Output:</strong> [60,68]
</pre>

<p><strong>Example 2:</strong></p>

<pre>
<strong>Input:</strong> slots1 = [[10,50],[60,120],[140,210]], slots2 = [[0,15],[60,70]], duration = 12
<strong>Output:</strong> []
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= slots1.length, slots2.length &lt;= 10^4</code></li>
	<li><code>slots1[i].length, slots2[i].length == 2</code></li>
	<li><code>slots1[i][0] &lt; slots1[i][1]</code></li>
	<li><code>slots2[i][0] &lt; slots2[i][1]</code></li>
	<li><code>0 &lt;= slots1[i][j], slots2[i][j] &lt;= 10^9</code></li>
	<li><code>1 &lt;= duration &lt;= 10^6&nbsp;</code></li>
</ul>