### [Filter Occupied Intervals](https://leetcode.com/problems/filter-occupied-intervals)

<p>You are given a 2D integer array <code>occupiedIntervals</code>, where <code>occupiedIntervals[i] = [start<sub>i</sub>, end<sub>i</sub>]</code> represents a time interval during which you are occupied. Each interval starts at <code>start<sub>i</sub></code> and ends at <code>end<sub>i</sub></code>, <strong>inclusive</strong>. These intervals may <strong>overlap</strong>.</p>

<p>You are also given two integers <code>freeStart</code> and <code>freeEnd</code>, which define a free time interval from <code>freeStart</code> to <code>freeEnd</code>, inclusive.</p>

<p>Your task is to merge <strong>all</strong> occupied intervals that overlap or touch, then remove <strong>all</strong> integer points in the free interval from the merged occupied intervals.</p>

<p>Two intervals touch if the second interval starts <strong>immediately after</strong> the first one ends. For example, <code>[1, 1]</code> and <code>[2, 2]</code> touch and should be merged into <code>[1, 2]</code>.</p>

<p>Return the <strong>remaining</strong> occupied intervals in <strong>sorted</strong> order. The returned intervals must be <strong>non-overlapping</strong> and must contain the <strong>minimum</strong> number of intervals possible. If there are no remaining occupied points, return an empty list.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<div class="example-block">
<p><strong>Input:</strong> <span class="example-io">occupiedIntervals = [[2,6],[4,8],[10,10],[10,12],[14,16]], freeStart = 7, freeEnd = 11</span></p>

<p><strong>Output:</strong> <span class="example-io">[[2,6],[12,12],[14,16]]</span></p>

<p><strong>Explanation:</strong></p>

<ul>
	<li>After merging, the occupied intervals are <code>[2, 8]</code>, <code>[10, 12]</code>, and <code>[14, 16]</code>.</li>
	<li>Excluding the free interval <code>[7, 11]</code> results in <code>[2, 6]</code>, <code>[12, 12]</code>, and <code>[14, 16]</code>.</li>
</ul>
</div>

<p><strong class="example">Example 2:</strong></p>

<div class="example-block">
<p><strong>Input:</strong> <span class="example-io">occupiedIntervals = [[1,5],[2,3]], freeStart = 3, freeEnd = 8</span></p>

<p><strong>Output:</strong> <span class="example-io">[[1,2]]</span></p>

<p><strong>Explanation:</strong></p>

<ul>
	<li>After merging, the occupied interval is <code>[1, 5]</code>.</li>
	<li>Excluding the free interval <code>[3, 8]</code> results in <code>[1, 2]</code>.</li>
</ul>
</div>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= occupiedIntervals.length &lt;= 5 * 10<sup>4</sup></code></li>
	<li><code>occupiedIntervals[i].length == 2</code></li>
	<li><code>1 &lt;= start<sub>i</sub> &lt;= end<sub>i</sub> &lt;= 10<sup>9</sup></code></li>
	<li><code>1 &lt;= freeStart &lt;= freeEnd &lt;= 10<sup>9</sup></code></li>
</ul>
