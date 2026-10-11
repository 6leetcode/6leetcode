### [Predict the Winner](https://leetcode.com/problems/predict-the-winner)

<p>You are given an integer array <code>nums</code>.</p>

<p>Two players are playing a game with this array: Player 1 and Player 2.</p>

<p>Player 1 and Player 2 take turns, with Player 1 starting first. Both players start the game with a score of 0.</p>

<p>At each turn, the current player takes the number at <strong>either end</strong> of the array (i.e., <code>nums[0]</code> or <code>nums[nums.length - 1]</code>), <strong>removing</strong> it from the array and adding it to their own score. The game ends when there are no more elements in the array.</p>

<p>Return <code>true</code> if Player 1&#39;s final score is <strong>greater than or equal</strong> to Player 2&#39;s final score, and <code>false</code> otherwise.</p>

<p><strong>Note</strong> that a tie counts as a win for Player 1. You may assume that both players play optimally.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<div class="example-block">
<p><strong>Input:</strong> <span class="example-io">nums = [1,5,2]</span></p>

<p><strong>Output:</strong> <span class="example-io">false</span></p>

<p><strong>Explanation:</strong></p>

<ul>
	<li>Player 1 must open by taking either 1 or 2, and both choices lead to the same result.</li>
	<li>If Player 1 takes 1, the array becomes <code>[5,2]</code>. Player 2 takes 5, leaving 2 for Player 1.</li>
	<li>If Player 1 takes 2, the array becomes <code>[1,5]</code>. Player 2 takes 5, leaving 1 for Player 1.</li>
	<li>Either way, Player 1 finishes with <code>1 + 2 = 3</code> and Player 2 finishes with <code>5</code>. Player 1 can never win, so return <code>false</code>.</li>
</ul>
</div>

<p><strong class="example">Example 2:</strong></p>

<div class="example-block">
<p><strong>Input:</strong> <span class="example-io">nums = [1,5,233,7]</span></p>

<p><strong>Output:</strong> <span class="example-io">true</span></p>

<p><strong>Explanation:</strong></p>

<ul>
	<li>Player 1 first takes 1, leaving <code>[5,233,7]</code>. Player 2 must then choose between 5 and 7, and no matter which number Player 2 chooses, Player 1 can take 233 on the next turn.</li>
	<li>Player 1 finishes with a higher score (234) than Player 2 (12), so return <code>true</code>.</li>
</ul>
</div>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= nums.length &lt;= 20</code></li>
	<li><code>0 &lt;= nums[i] &lt;= 10<sup>7</sup></code></li>
</ul>
