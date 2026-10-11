### [预测赢家](https://leetcode.cn/problems/predict-the-winner)

<p>给你一个整数数组 <code>nums</code>。</p>

<p>玩家 1 和玩家 2 基于这个数组设计了一个游戏。</p>

<p>玩家 1 和玩家 2 轮流进行自己的回合，玩家 1 先手。开始时，两个玩家的初始分值都是 <code>0</code> 。</p>

<p>每一回合，玩家从数组的 <strong>任意一端</strong> 取一个数字（即，<code>nums[0]</code> 或 <code>nums[nums.length - 1]</code>），取到的数字将会从数组中 <strong>移除</strong>（数组长度减 <code>1</code> ）。玩家选中的数字将会加到他的得分上。当数组中没有剩余数字可取时，游戏结束。</p>

<p>如果玩家 1 能成为赢家，返回 <code>true</code> 。</p>

<p><strong>注意</strong>，如果两个玩家得分相等，同样认为玩家 1 是游戏的赢家。你可以假设每个玩家的玩法都会使他的分数最大化。</p>

<p>&nbsp;</p>

<p><strong>示例 1：</strong></p>

<div class="example-block">
<p><strong>输入：</strong>nums = [1,5,2]</p>

<p><strong>输出：</strong>false</p>

<p><strong>解释：</strong></p>

<ul>
	<li>玩家 1 必须先取 1 或 2，两种选择都会导致相同的结果。</li>
	<li>如果玩家 1 取 1，数组变为&nbsp;<code>[5, 2]</code>。玩家 2 取 5，剩下 2 给玩家 1。</li>
	<li>如果玩家 1 取 2，数组变为&nbsp;<code>[1, 5]</code>。玩家 2 取 5，剩下 1 给玩家 1。</li>
	<li>无论哪种情况，玩家 1 最终得到&nbsp;<code>1 + 2 = 3</code>，玩家 2 得到&nbsp;<code>5</code>。玩家 1 永远无法获胜，所以返回&nbsp;<code>false</code>。</li>
</ul>
</div>

<p><strong>示例 2：</strong></p>

<div class="example-block">
<p><strong>输入：</strong>nums = [1,5,233,7]</p>

<p><strong>输出：</strong>true</p>

<p><strong>解释： </strong></p>

<ul>
	<li>玩家 1 先取 1，剩下&nbsp;<code>[5,233,7]</code>。然后玩家 2 必须在 5 和 7 之间选择，无论玩家 2 选择哪个数字，玩家 1 在下一次回合都可以取 233。</li>
	<li>玩家 1 的得分（234）高于玩家 2（12），所以返回&nbsp;<code>true</code>。</li>
</ul>
</div>

<p>&nbsp;</p>

<p><strong>提示：</strong></p>

<ul>
	<li><code>1 &lt;= nums.length &lt;= 20</code></li>
	<li><code>0 &lt;= nums[i] &lt;= 10<sup>7</sup></code></li>
</ul>
