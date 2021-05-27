### [Smallest Rotation with Highest Score](https://leetcode.com/problems/smallest-rotation-with-highest-score)

<p>Given an array <code>nums</code>, we may rotate it by a non-negative integer <code>k</code> so that the array becomes <code>nums[k], nums[k+1], nums[k+2], ... nums[nums.length - 1], nums[0], nums[1], ..., nums[k-1]</code>.&nbsp; Afterward, any entries that are less than or equal to their index are worth 1 point.</p>

<p>For example, if we have <code>[2, 4, 1, 3, 0]</code>, and we rotate by <code>k = 2</code>, it becomes <code>[1, 3, 0, 2, 4]</code>. This is worth 3 points because 1 &gt; 0 [no points], 3 &gt; 1 [no points], 0 &lt;= 2 [one point], 2 &lt;= 3 [one point], 4 &lt;= 4 [one point].</p>

<p>Over all possible rotations, return the rotation index k that corresponds to the highest score we could receive. If there are multiple answers, return the smallest such index k.</p>

<pre>
<strong>Example 1:</strong>
<strong>Input:</strong> [2, 3, 1, 4, 0]
<strong>Output:</strong> 3
<strong>Explanation: </strong> 
Scores for each k are listed below: 
k = 0,  nums = [2,3,1,4,0],    score 2
k = 1,  nums = [3,1,4,0,2],    score 3
k = 2,  nums = [1,4,0,2,3],    score 3
k = 3,  nums = [4,0,2,3,1],    score 4
k = 4,  nums = [0,2,3,1,4],    score 3
</pre>

<p>So we should choose k = 3, which has the highest score.</p>

<p>&nbsp;</p>

<pre>
<strong>Example 2:</strong>
<strong>Input:</strong> [1, 3, 0, 2, 4]
<strong>Output:</strong> 0
<strong>Explanation:</strong> nums will always have 3 points no matter how it shifts.
So we will choose the smallest k, which is 0.
</pre>

<p><strong>Note:</strong></p>

<ul>
	<li><code>nums</code> will have length at most <code>20000</code>.</li>
	<li><code>nums[i]</code> will be in the range <code>[0, nums.length]</code>.</li>
</ul>
