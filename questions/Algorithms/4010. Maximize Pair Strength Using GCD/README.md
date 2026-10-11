### [Maximize Pair Strength Using GCD](https://leetcode.com/problems/maximize-pair-strength-using-gcd)

<p>You are given an integer array <code>nums</code>.</p>

<p>Choose exactly one pair of distinct indices <code>i</code> and <code>j</code>. The strength of the pair is defined as <code>(nums[i] * nums[j]) / <span data-keyword="gcd-function">gcd(nums[i], nums[j])</span><sup>2</sup></code>.</p>

<p>Return the maximum strength over all possible pairs.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<div class="example-block">
<p><strong>Input:</strong> <span class="example-io">nums = [2,3,5]</span></p>

<p><strong>Output:</strong> <span class="example-io">15</span></p>

<p><strong>Explanation:</strong></p>

<p>Choosing <code>i = 1</code> and <code>j = 2</code> gives strength <code>(3 * 5) / gcd(3, 5)<sup>2</sup> = 15 / 1 = 15</code>, which is the maximum over all pairs.</p>
</div>

<p><strong class="example">Example 2:</strong></p>

<div class="example-block">
<p><strong>Input:</strong> <span class="example-io">nums = [4,6,8]</span></p>

<p><strong>Output:</strong> <span class="example-io">12</span></p>

<p><strong>Explanation:</strong></p>

<p>Choosing <code>i = 1</code> and <code>j = 2</code> gives strength <code>(6 * 8) / gcd(6, 8)<sup>2</sup> = 48 / 4 = 12</code>, which is the maximum over all pairs.</p>
</div>

<p><strong class="example">Example 3:</strong></p>

<div class="example-block">
<p><strong>Input:</strong> <span class="example-io">nums = [3,3]</span></p>

<p><strong>Output:</strong> <span class="example-io">1</span></p>

<p><strong>Explanation:</strong></p>

<p>Choosing <code>i = 0</code> and <code>j = 1</code> gives strength <code>(3 * 3) / gcd(3, 3)<sup>2</sup> = 9 / 9 = 1</code>, the maximum over all pairs.</p>
</div>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>2 &lt;= nums.length &lt;= 2000</code></li>
	<li><code>1 &lt;= nums[i] &lt;= 10<sup>5</sup></code></li>
</ul>
