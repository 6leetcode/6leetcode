### [袋子里最少数目的球](https://leetcode-cn.com/problems/minimum-limit-of-balls-in-a-bag)

<p>给你一个整数数组 <code>nums</code> ，其中 <code>nums[i]</code> 表示第 <code>i</code> 个袋子里球的数目。同时给你一个整数 <code>maxOperations</code> 。</p>

<p>你可以进行如下操作至多 <code>maxOperations</code> 次：</p>

<ul>
	<li>选择任意一个袋子，并将袋子里的球分到 2 个新的袋子中，每个袋子里都有 <strong>正整数</strong> 个球。

	<ul>
		<li>比方说，一个袋子里有 <code>5</code> 个球，你可以把它们分到两个新袋子里，分别有 <code>1</code> 个和 <code>4</code> 个球，或者分别有 <code>2</code> 个和 <code>3</code> 个球。</li>
	</ul>
	</li>
</ul>

<p>你的开销是单个袋子里球数目的 <strong>最大值</strong> ，你想要 <strong>最小化</strong> 开销。</p>

<p>请你返回进行上述操作后的最小开销。</p>

<p> </p>

<p><strong>示例 1：</strong></p>

<pre>
<b>输入：</b>nums = [9], maxOperations = 2
<b>输出：</b>3
<b>解释：</b>
- 将装有 9 个球的袋子分成装有 6 个和 3 个球的袋子。[<strong>9</strong>] -> [6,3] 。
- 将装有 6 个球的袋子分成装有 3 个和 3 个球的袋子。[<strong>6</strong>,3] -> [3,3,3] 。
装有最多球的袋子里装有 3 个球，所以开销为 3 并返回 3 。
</pre>

<p><strong>示例 2：</strong></p>

<pre>
<b>输入：</b>nums = [2,4,8,2], maxOperations = 4
<b>输出：</b>2
<strong>解释：</strong>
- 将装有 8 个球的袋子分成装有 4 个和 4 个球的袋子。[2,4,<strong>8</strong>,2] -> [2,4,4,4,2] 。
- 将装有 4 个球的袋子分成装有 2 个和 2 个球的袋子。[2,<strong>4</strong>,4,4,2] -> [2,2,2,4,4,2] 。
- 将装有 4 个球的袋子分成装有 2 个和 2 个球的袋子。[2,2,2,<strong>4</strong>,4,2] -> [2,2,2,2,2,4,2] 。
- 将装有 4 个球的袋子分成装有 2 个和 2 个球的袋子。[2,2,2,2,2,<strong>4</strong>,2] -> [2,2,2,2,2,2,2,2] 。
装有最多球的袋子里装有 2 个球，所以开销为 2 并返回 2 。
</pre>

<p><strong>示例 3：</strong></p>

<pre>
<b>输入：</b>nums = [7,17], maxOperations = 2
<b>输出：</b>7
</pre>

<p> </p>

<p><strong>提示：</strong></p>

<ul>
	<li><code>1 <= nums.length <= 10<sup>5</sup></code></li>
	<li><code>1 <= maxOperations, nums[i] <= 10<sup>9</sup></code></li>
</ul>
