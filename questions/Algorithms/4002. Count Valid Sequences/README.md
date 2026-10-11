### [Count Valid Sequences](https://leetcode.com/problems/count-valid-sequences)

<p>You are given two <strong>positive</strong> integers <code>n</code> and <code>k</code>.</p>

<p>A <strong>valid sequence</strong> is a sequence of <code>k</code> positive integers such that:</p>

<ul>
	<li>The <strong>sum</strong> of all integers in the sequence is equal to <code>n</code>.</li>
	<li>The <strong>product</strong> of all integers in the sequence is <strong>even</strong>.</li>
</ul>

<p>Return the number of valid sequences. Since the answer may be very large, return it <strong>modulo</strong> <code>10<sup>9</sup>​​​​​​​ + 7</code>.</p>

<p>Two sequences are considered <strong>different</strong> if they differ at any index. For example, <code>[1, 1, 2]</code> and <code>[1, 2, 1]</code> are considered different sequences.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<div class="example-block">
<p><strong>Input:</strong> <span class="example-io">n = 5, k = 3</span></p>

<p><strong>Output:</strong> <span class="example-io">3</span></p>

<p><strong>Explanation:</strong></p>

<p>The sequences of length <code>k = 3</code> whose sum is 5 are:</p>

<table style="border: 1px solid black;">
	<tbody>
		<tr>
			<th style="border: 1px solid black;">Sequence</th>
			<th style="border: 1px solid black;">Product</th>
			<th style="border: 1px solid black;">Parity</th>
		</tr>
		<tr>
			<td style="border: 1px solid black;"><code>[1, 1, 3]</code></td>
			<td style="border: 1px solid black;"><code>1 * 1 * 3 = 3</code></td>
			<td style="border: 1px solid black;">Odd</td>
		</tr>
		<tr>
			<td style="border: 1px solid black;"><code>[1, 2, 2]</code></td>
			<td style="border: 1px solid black;"><code>1 * 2 * 2 = 4</code></td>
			<td style="border: 1px solid black;">Even</td>
		</tr>
		<tr>
			<td style="border: 1px solid black;"><code>[2, 1, 2]</code></td>
			<td style="border: 1px solid black;"><code>2 * 1 * 2 = 4</code></td>
			<td style="border: 1px solid black;">Even</td>
		</tr>
		<tr>
			<td style="border: 1px solid black;"><code>[2, 2, 1]</code></td>
			<td style="border: 1px solid black;"><code>2 * 2 * 1 = 4</code></td>
			<td style="border: 1px solid black;">Even</td>
		</tr>
		<tr>
			<td style="border: 1px solid black;"><code>[1, 3, 1]</code></td>
			<td style="border: 1px solid black;"><code>1 * 3 * 1 = 3</code></td>
			<td style="border: 1px solid black;">Odd</td>
		</tr>
		<tr>
			<td style="border: 1px solid black;"><code>[3, 1, 1]</code></td>
			<td style="border: 1px solid black;"><code>3 * 1 * 1 = 3</code></td>
			<td style="border: 1px solid black;">Odd</td>
		</tr>
	</tbody>
</table>

<p>There are 3 sequences with an even product, thus the answer is 3.</p>
</div>

<p><strong class="example">Example 2:</strong></p>

<div class="example-block">
<p><strong>Input:</strong> <span class="example-io">n = 3, k = 2</span></p>

<p><strong>Output:</strong> <span class="example-io">2</span></p>

<p><strong>Explanation:</strong></p>

<p>The sequences of length <code>k = 2</code> whose sum is 3 are:</p>

<table style="border: 1px solid black;">
	<tbody>
		<tr>
			<th style="border: 1px solid black;">Sequence</th>
			<th style="border: 1px solid black;">Product</th>
			<th style="border: 1px solid black;">Parity</th>
		</tr>
		<tr>
			<td style="border: 1px solid black;"><code>[1, 2]</code></td>
			<td style="border: 1px solid black;"><code>1 * 2 = 2</code></td>
			<td style="border: 1px solid black;">Even</td>
		</tr>
		<tr>
			<td style="border: 1px solid black;"><code>[2, 1]</code></td>
			<td style="border: 1px solid black;"><code>2 * 1 = 2</code></td>
			<td style="border: 1px solid black;">Even</td>
		</tr>
	</tbody>
</table>

<p>There are 2 sequences with an even product, thus the answer is 2.</p>
</div>

<p><strong class="example">Example 3:</strong></p>

<div class="example-block">
<p><strong>Input:</strong> <span class="example-io">n = 5, k = 5</span></p>

<p><strong>Output:</strong> <span class="example-io">0</span></p>

<p><strong>Explanation:</strong></p>

<p>The only possible sequence of length <code>k = 5</code> whose sum is 5 is <code>[1, 1, 1, 1, 1]</code>, which has an odd product. Thus, the answer is 0.</p>
</div>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= n &lt;= 5 * 10<sup>5</sup></code></li>
	<li><code>1 &lt;= k &lt;= n</code></li>
</ul>
