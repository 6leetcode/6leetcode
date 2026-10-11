### [Count Integers Appearing in a Single Block](https://leetcode.com/problems/count-integers-appearing-in-a-single-block)

<p>You are given an integer array <code>nums</code>.</p>

<p>An integer <code>x</code> is <strong>special</strong> if all occurrences of <code>x</code> in <code>nums</code> appear in a single <strong>contiguous</strong> block.</p>

<p>Return the number of <strong>distinct</strong> special integers in <code>nums</code>.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<div class="example-block">
<p><strong>Input:</strong> <span class="example-io">nums = [1,2,2,1]</span></p>

<p><strong>Output:</strong> <span class="example-io">1</span></p>

<p><strong>Explanation:</strong></p>

<ul>
	<li>1 appears at indices 0 and 3, forming two separate blocks, so it is not special.</li>
	<li>2 appears in a single contiguous block at indices <code>[1, 2]</code>, so it is special.</li>
</ul>

<p>Therefore, there is one special integer.</p>
</div>

<p><strong class="example">Example 2:</strong></p>

<div class="example-block">
<p><strong>Input:</strong> <span class="example-io">nums = [3,3,1,2,2,1]</span></p>

<p><strong>Output:</strong> <span class="example-io">2</span></p>

<p><strong>Explanation:</strong></p>

<ul>
	<li>3 appears in a single contiguous block at indices <code>[0, 1]</code>, so it is special.</li>
	<li>1 appears at indices 2 and 5, forming two separate blocks, so it is not special.</li>
	<li>2 appears in a single contiguous block at indices <code>[3, 4]</code>, so it is special.</li>
</ul>

<p>Therefore, there are two special integers.</p>
</div>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= nums.length &lt;= 100</code></li>
	<li><code>1 &lt;= nums[i] &lt;= 100</code></li>
</ul>
