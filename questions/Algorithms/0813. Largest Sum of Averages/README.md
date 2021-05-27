### [Largest Sum of Averages](https://leetcode.com/problems/largest-sum-of-averages)

<p>We partition a row of numbers <code>nums</code>&nbsp;into at most <code>k</code> adjacent (non-empty) groups, then our score is the sum of the average of each group. What is the largest score we can achieve?</p>

<p>Note that our partition must use every number in <code>nums</code>, and that scores are not necessarily integers.</p>

<pre>
<strong>Example:</strong>
<strong>Input:</strong> 
nums = [9,1,2,3,9]
k = 3
<strong>Output:</strong> 20
<strong>Explanation:</strong> 
The best choice is to partition nums into [9], [1, 2, 3], [9]. The answer is 9 + (1 + 2 + 3) / 3 + 9 = 20.
We could have also partitioned nums into [9, 1], [2], [3, 9], for example.
That partition would lead to a score of 5 + 2 + 6 = 13, which is worse.
</pre>

<p>&nbsp;</p>

<p><strong>Note: </strong></p>

<ul>
	<li><code>1 &lt;= nums.length &lt;= 100</code>.</li>
	<li><code>1 &lt;= nums[i] &lt;= 10000</code>.</li>
	<li><code>1 &lt;= k &lt;= nums.length</code>.</li>
	<li>Answers within <code>10<sup>-6</sup></code> of the correct answer will be accepted as correct.</li>
</ul>
