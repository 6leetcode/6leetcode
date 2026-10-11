### [Aggregate Two Time Series](https://leetcode.com/problems/aggregate-two-time-series)

<p>You are given two 2D integer arrays <code>series1</code> and <code>series2</code>.</p>

<p>Each element in both series is of the form <code>[timestamp, value]</code>, where:</p>

<ul>
	<li><code>timestamp</code> is an integer representing the time.</li>
	<li><code>value</code> is an integer representing the value at that timestamp.</li>
</ul>

<p>Each array is sorted in <span data-keyword="strictly-increasing-array">strictly increasing</span> order of <code>timestamp</code>.</p>

<p>For any timestamp <strong>not present</strong> in a series, its value is taken from the <strong>next available timestamp</strong> in the same series if one exists. Otherwise, its value is considered 0.</p>

<p>The <strong>aggregated series</strong> is formed by summing the corresponding values from both series at every timestamp that appears in either series.</p>

<p>Return the <strong>aggregated series</strong> as a 2D integer array of <code>[timestamp, summedValue]</code> pairs, sorted in <strong>strictly increasing</strong> order of timestamp.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<div class="example-block">
<p><strong>Input:</strong> <span class="example-io">series1 = [[1,3],[4,1]], series2 = [[2,2],[5,2]]</span></p>

<p><strong>Output:</strong> <span class="example-io">[[1,5],[2,3],[4,3],[5,2]]</span></p>

<p><strong>Explanation:</strong></p>

<table style="border: 1px solid black;">
	<tbody>
		<tr>
			<th style="border: 1px solid black;">Timestamp</th>
			<th style="border: 1px solid black;"><code>series1</code></th>
			<th style="border: 1px solid black;"><code>series2</code></th>
			<th style="border: 1px solid black;"><code>summedValue</code></th>
		</tr>
		<tr>
			<td style="border: 1px solid black;">1</td>
			<td style="border: 1px solid black;">3</td>
			<td style="border: 1px solid black;">2</td>
			<td style="border: 1px solid black;">5</td>
		</tr>
		<tr>
			<td style="border: 1px solid black;">2</td>
			<td style="border: 1px solid black;">1</td>
			<td style="border: 1px solid black;">2</td>
			<td style="border: 1px solid black;">3</td>
		</tr>
		<tr>
			<td style="border: 1px solid black;">4</td>
			<td style="border: 1px solid black;">1</td>
			<td style="border: 1px solid black;">2</td>
			<td style="border: 1px solid black;">3</td>
		</tr>
		<tr>
			<td style="border: 1px solid black;">5</td>
			<td style="border: 1px solid black;">0</td>
			<td style="border: 1px solid black;">2</td>
			<td style="border: 1px solid black;">2</td>
		</tr>
	</tbody>
</table>

<p>Thus, the aggregated series is <code>[[1, 5], [2, 3], [4, 3], [5, 2]]</code>.</p>
</div>

<p><strong class="example">Example 2:</strong></p>

<div class="example-block">
<p><strong>Input:</strong> <span class="example-io">series1 = [[1,5],[3,1]], series2 = [[2,2]]</span></p>

<p><strong>Output:</strong> <span class="example-io">[[1,7],[2,3],[3,1]]</span></p>

<p><strong>Explanation:</strong></p>

<table style="border: 1px solid black;">
	<tbody>
		<tr>
			<th style="border: 1px solid black;">Timestamp</th>
			<th style="border: 1px solid black;"><code>series1</code></th>
			<th style="border: 1px solid black;"><code>series2</code></th>
			<th style="border: 1px solid black;"><code>summedValue</code></th>
		</tr>
		<tr>
			<td style="border: 1px solid black;">1</td>
			<td style="border: 1px solid black;">5</td>
			<td style="border: 1px solid black;">2</td>
			<td style="border: 1px solid black;">7</td>
		</tr>
		<tr>
			<td style="border: 1px solid black;">2</td>
			<td style="border: 1px solid black;">1</td>
			<td style="border: 1px solid black;">2</td>
			<td style="border: 1px solid black;">3</td>
		</tr>
		<tr>
			<td style="border: 1px solid black;">3</td>
			<td style="border: 1px solid black;">1</td>
			<td style="border: 1px solid black;">0</td>
			<td style="border: 1px solid black;">1</td>
		</tr>
	</tbody>
</table>

<p>Thus, the aggregated series is <code>[[1, 7], [2, 3], [3, 1]]</code>.</p>
</div>

<p><strong class="example">Example 3:</strong></p>

<div class="example-block">
<p><strong>Input:</strong> <span class="example-io">series1 = [[1,5]], series2 = [[1000000000,2]]</span></p>

<p><strong>Output:</strong> <span class="example-io">[[1,7],[1000000000,2]]</span></p>

<p><strong>Explanation:</strong></p>

<p>At timestamp 1, the next available value in <code>series2</code> is 2 at timestamp 1000000000. At timestamp 1000000000, there is no later timestamp in <code>series1</code>, so its value is 0. Only timestamps that appear in at least one of the two series are included.</p>
</div>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= series1.length, series2.length &lt;= 10<sup>5</sup></code></li>
	<li><code>series1[i].length == series2[i].length == 2</code></li>
	<li><code>1 &lt;= series1[i][0], series2[i][0] &lt;= 10<sup>9</sup></code></li>
	<li><code>1 &lt;= series1[i][1], series2[i][1] &lt;= 10<sup>9</sup></code></li>
	<li>Each series is sorted in strictly increasing order of <code>timestamp</code>.</li>
</ul>
