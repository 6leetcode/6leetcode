### [Longest Arithmetic Subsequence](https://leetcode.com/problems/longest-arithmetic-subsequence)

<p>Given an array <code>nums</code> of integers, return <em>the length of the longest arithmetic subsequence in</em> <code>nums</code>.</p>

<p><strong>Note</strong> that:</p>

<ul>
	<li>A <strong>subsequence</strong> is an array that can be derived from another array by deleting some or no elements without changing the order of the remaining elements.</li>
	<li>A sequence <code>seq</code> is arithmetic if <code>seq[i + 1] - seq[i]</code> are all the same value (for <code>0 &lt;= i &lt; seq.length - 1</code>).</li>
</ul>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<div class="example-block">
<p><strong>Input:</strong> <span class="example-io">nums = [3, 6, 9, 12]</span></p>

<p><strong>Output:</strong> <span class="example-io">4</span></p>

<p><strong>Explanation:</strong> The whole array is already an arithmetic sequence with a common difference of 3, so the longest arithmetic subsequence is <code>[3, 6, 9, 12]</code>, of length 4.</p>
</div>

<p><strong class="example">Example 2:</strong></p>

<div class="example-block">
<p><strong>Input:</strong> <span class="example-io">nums = [9, 4, 7, 2, 10]</span></p>

<p><strong>Output:</strong> <span class="example-io">3</span></p>

<p><strong>Explanation:</strong> The longest arithmetic subsequence is <code>[4, 7, 10]</code> (indices <code>1</code>, <code>2</code>, <code>4</code>), with a common difference of 3. There is no arithmetic subsequence of length 4.</p>
</div>

<p><strong class="example">Example 3:</strong></p>

<div class="example-block">
<p><strong>Input:</strong> <span class="example-io">nums = [20, 1, 15, 3, 10, 5, 8]</span></p>

<p><strong>Output:</strong> <span class="example-io">4</span></p>

<p><strong>Explanation:</strong> The longest arithmetic subsequence is <code>[20, 15, 10, 5]</code> (indices <code>0</code>, <code>2</code>, <code>4</code>, <code>5</code>), with a common difference of -5.</p>
</div>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>2 &lt;= nums.length &lt;= 1500</code></li>
	<li><code>0 &lt;= nums[i] &lt;= 500</code></li>
</ul>
