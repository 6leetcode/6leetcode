### [石子游戏 IX](https://leetcode-cn.com/problems/stone-game-ix)

<p>Alice 和 Bob 再次设计了一款新的石子游戏。现有一行 n 个石子，每个石子都有一个关联的数字表示它的价值。给你一个整数数组 <code>stones</code> ，其中 <code>stones[i]</code> 是第 <code>i</code> 个石子的价值。</p>

<p>Alice 和 Bob 轮流进行自己的回合，<strong>Alice</strong> 先手。每一回合，玩家需要从 <code>stones</code>&nbsp;中移除任一石子。</p>

<ul>
	<li>如果玩家移除石子后，导致 <strong>所有已移除石子</strong> 的价值&nbsp;<strong>总和</strong> 可以被 3 整除，那么该玩家就 <strong>输掉游戏</strong> 。</li>
	<li>如果不满足上一条，且移除后没有任何剩余的石子，那么 Bob 将会直接获胜（即便是在 Alice 的回合）。</li>
</ul>

<p>假设两位玩家均采用&nbsp;<strong>最佳</strong> 决策。如果 Alice 获胜，返回 <code>true</code> ；如果 Bob 获胜，返回 <code>false</code> 。</p>

<p>&nbsp;</p>

<p><strong>示例 1：</strong></p>

<pre>
<strong>输入：</strong>stones = [2,1]
<strong>输出：</strong>true
<strong>解释：</strong>游戏进行如下：
- 回合 1：Alice 可以移除任意一个石子。
- 回合 2：Bob 移除剩下的石子。 
已移除的石子的值总和为 1 + 2 = 3 且可以被 3 整除。因此，Bob 输，Alice 获胜。
</pre>

<p><strong>示例 2：</strong></p>

<pre>
<strong>输入：</strong>stones = [2]
<strong>输出：</strong>false
<strong>解释：</strong>Alice 会移除唯一一个石子，已移除石子的值总和为 2 。 
由于所有石子都已移除，且值总和无法被 3 整除，Bob 获胜。
</pre>

<p><strong>示例 3：</strong></p>

<pre>
<strong>输入：</strong>stones = [5,1,2,4,3]
<strong>输出：</strong>false
<strong>解释：</strong>Bob 总会获胜。其中一种可能的游戏进行方式如下：
- 回合 1：Alice 可以移除值为 1 的第 2 个石子。已移除石子值总和为 1 。
- 回合 2：Bob 可以移除值为 3 的第 5 个石子。已移除石子值总和为 = 1 + 3 = 4 。
- 回合 3：Alices 可以移除值为 4 的第 4 个石子。已移除石子值总和为 = 1 + 3 + 4 = 8 。
- 回合 4：Bob 可以移除值为 2 的第 3 个石子。已移除石子值总和为 = 1 + 3 + 4 + 2 = 10.
- 回合 5：Alice 可以移除值为 5 的第 1 个石子。已移除石子值总和为 = 1 + 3 + 4 + 2 + 5 = 15.
Alice 输掉游戏，因为已移除石子值总和（15）可以被 3 整除，Bob 获胜。
</pre>

<p>&nbsp;</p>

<p><strong>提示：</strong></p>

<ul>
	<li><code>1 &lt;= stones.length &lt;= 10<sup>5</sup></code></li>
	<li><code>1 &lt;= stones[i] &lt;= 10<sup>4</sup></code></li>
</ul>
