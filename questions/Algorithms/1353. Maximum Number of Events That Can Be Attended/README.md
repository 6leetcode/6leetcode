### [Maximum Number of Events That Can Be Attended](https://leetcode.com/problems/maximum-number-of-events-that-can-be-attended)

<p>Given an array of <code>events</code> where <code>events[i] = [startDay<sub>i</sub>, endDay<sub>i</sub>]</code>. Every event <code>i</code> starts at&nbsp;<code>startDay<sub>i</sub></code><sub>&nbsp;</sub>and ends at&nbsp;<code>endDay<sub>i</sub></code>.</p>

<p>You can attend an event <code>i</code>&nbsp;at any day&nbsp;<code>d</code> where&nbsp;<code>startTime<sub>i</sub>&nbsp;&lt;= d &lt;= endTime<sub>i</sub></code>. Notice that you can only attend one event at any time <code>d</code>.</p>

<p>Return <em>the maximum number of events&nbsp;</em>you can attend.</p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2020/02/05/e1.png" style="width: 660px; height: 440px;" />
<pre>
<strong>Input:</strong> events = [[1,2],[2,3],[3,4]]
<strong>Output:</strong> 3
<strong>Explanation:</strong> You can attend all the three events.
One way to attend them all is as shown.
Attend the first event on day 1.
Attend the second event on day 2.
Attend the third event on day 3.
</pre>

<p><strong>Example 2:</strong></p>

<pre>
<strong>Input:</strong> events= [[1,2],[2,3],[3,4],[1,2]]
<strong>Output:</strong> 4
</pre>

<p><strong>Example 3:</strong></p>

<pre>
<strong>Input:</strong> events = [[1,4],[4,4],[2,2],[3,4],[1,1]]
<strong>Output:</strong> 4
</pre>

<p><strong>Example 4:</strong></p>

<pre>
<strong>Input:</strong> events = [[1,100000]]
<strong>Output:</strong> 1
</pre>

<p><strong>Example 5:</strong></p>

<pre>
<strong>Input:</strong> events = [[1,1],[1,2],[1,3],[1,4],[1,5],[1,6],[1,7]]
<strong>Output:</strong> 7
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= events.length &lt;= 10^5</code></li>
	<li><code>events[i].length == 2</code></li>
	<li><code>1 &lt;= events[i][0] &lt;= events[i][1] &lt;= 10^5</code></li>
</ul>
