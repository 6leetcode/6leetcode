### [Longest Continuous Subarray With Absolute Diff Less Than or Equal to Limit](https://leetcode.com/problems/longest-continuous-subarray-with-absolute-diff-less-than-or-equal-to-limit)

<p>You are given an array of integers <code>nums</code> and an integer <code>limit</code>.</p>

<p>Return the size of the <strong>longest non-empty subarray</strong> such that the <strong>absolute</strong> difference between <strong>every pair of elements</strong> in this <strong>subarray</strong> is <strong>less than or equal</strong> to <code>limit</code><em>.</em></p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<div class="example-block">
<p><strong>Input:</strong> <span class="example-io">nums = [8,2,4,7], limit = 4</span></p>

<p><strong>Output:</strong> <span class="example-io">2</span></p>

<p><strong>Explanation:</strong></p>

<p>Checking every subarray, where the absolute difference is taken over all pairs of its elements:<br />
<code>[8]</code> with maximum absolute diff <code>|8-8| = 0 &lt;= 4</code>.<br />
<code>[8,2]</code> with maximum absolute diff <code>|8-2| = 6 &gt; 4</code>.<br />
<code>[8,2,4]</code> with maximum absolute diff <code>|8-2| = 6 &gt; 4</code>.<br />
<code>[8,2,4,7]</code> with maximum absolute diff <code>|8-2| = 6 &gt; 4</code>.<br />
<code>[2]</code> with maximum absolute diff <code>|2-2| = 0 &lt;= 4</code>.<br />
<code>[2,4]</code> with maximum absolute diff <code>|4-2| = 2 &lt;= 4</code>.<br />
<code>[2,4,7]</code> with maximum absolute diff <code>|7-2| = 5 &gt; 4</code>. Note that the pair <code>(2, 7)</code> is not adjacent, but it is still compared.<br />
<code>[4]</code> with maximum absolute diff <code>|4-4| = 0 &lt;= 4</code>.<br />
<code>[4,7]</code> with maximum absolute diff <code>|7-4| = 3 &lt;= 4</code>.<br />
<code>[7]</code> with maximum absolute diff <code>|7-7| = 0 &lt;= 4</code>.<br />
Therefore, the size of the longest subarray is 2.</p>
</div>

<p><strong class="example">Example 2:</strong></p>

<div class="example-block">
<p><strong>Input:</strong> <span class="example-io">nums = [10,1,2,4,7,2], limit = 5</span></p>

<p><strong>Output:</strong> <span class="example-io">4</span></p>

<p><strong>Explanation:</strong></p>

<p>The subarray <code>[2,4,7,2]</code> is valid because every pair of its elements differs by at most <code>5</code>, the largest being <code>|7-2| = 5</code>.</p>

<p>It cannot be extended to the left, since <code>[1,2,4,7,2]</code> contains the pair <code>(1, 7)</code> with <code>|7-1| = 6 &gt; 5</code>. Therefore, the size of the longest subarray is 4.</p>
</div>

<p><strong class="example">Example 3:</strong></p>

<div class="example-block">
<p><strong>Input:</strong> <span class="example-io">nums = [4,2,2,2,4,4,2,2], limit = 0</span></p>

<p><strong>Output:</strong> <span class="example-io">3</span></p>

<p><strong>Explanation:</strong></p>

<p>Since <code>limit = 0</code>, every pair of elements in the subarray must be equal, so only runs of identical values qualify.</p>

<p>The longest such run is <code>[2,2,2]</code>, of size 3.</p>
</div>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= nums.length &lt;= 10<sup>5</sup></code></li>
	<li><code>1 &lt;= nums[i] &lt;= 10<sup>9</sup></code></li>
	<li><code>0 &lt;= limit &lt;= 10<sup>9</sup></code></li>
</ul>
