### [赢得比赛需要的最少训练时长](https://leetcode-cn.com/problems/minimum-hours-of-training-to-win-a-competition)

<p>你正在参加一场比赛，给你两个 <strong>正</strong> 整数 <code>initialEnergy</code> 和 <code>initialExperience</code> 分别表示你的初始精力和初始经验。</p>

<p>另给你两个下标从 <strong>0</strong> 开始的整数数组 <code>energy</code> 和 <code>experience</code>，长度均为 <code>n</code> 。</p>

<p>你将会 <strong>依次</strong> 对上 <code>n</code> 个对手。第 <code>i</code> 个对手的精力和经验分别用 <code>energy[i]</code> 和 <code>experience[i]</code> 表示。当你对上对手时，需要在经验和精力上都 <strong>严格</strong> 超过对手才能击败他们，然后在可能的情况下继续对上下一个对手。</p>

<p>击败第 <code>i</code> 个对手会使你的经验 <strong>增加</strong> <code>experience[i]</code>，但会将你的精力 <strong>减少</strong>&nbsp; <code>energy[i]</code> 。</p>

<p>在开始比赛前，你可以训练几个小时。每训练一个小时，你可以选择将增加经验增加 1 <strong>或者</strong> 将精力增加 1 。</p>

<p>返回击败全部 <code>n</code> 个对手需要训练的 <strong>最少</strong> 小时数目。</p>

<p>&nbsp;</p>

<p><strong>示例 1：</strong></p>

<pre><strong>输入：</strong>initialEnergy = 5, initialExperience = 3, energy = [1,4,3,2], experience = [2,6,3,1]
<strong>输出：</strong>8
<strong>解释：</strong>在 6 小时训练后，你可以将精力提高到 11 ，并且再训练 2 个小时将经验提高到 5 。
按以下顺序与对手比赛：
- 你的精力与经验都超过第 0 个对手，所以获胜。
  精力变为：11 - 1 = 10 ，经验变为：5 + 2 = 7 。
- 你的精力与经验都超过第 1 个对手，所以获胜。
  精力变为：10 - 4 = 6 ，经验变为：7 + 6 = 13 。
- 你的精力与经验都超过第 2 个对手，所以获胜。
  精力变为：6 - 3 = 3 ，经验变为：13 + 3 = 16 。
- 你的精力与经验都超过第 3 个对手，所以获胜。
  精力变为：3 - 2 = 1 ，经验变为：16 + 1 = 17 。
在比赛前进行了 8 小时训练，所以返回 8 。
可以证明不存在更小的答案。
</pre>

<p><strong>示例 2：</strong></p>

<pre><strong>输入：</strong>initialEnergy = 2, initialExperience = 4, energy = [1], experience = [3]
<strong>输出：</strong>0
<strong>解释：</strong>你不需要额外的精力和经验就可以赢得比赛，所以返回 0 。
</pre>

<p>&nbsp;</p>

<p><strong>提示：</strong></p>

<ul>
	<li><code>n == energy.length == experience.length</code></li>
	<li><code>1 &lt;= n &lt;= 100</code></li>
	<li><code>1 &lt;= initialEnergy, initialExperience, energy[i], experience[i] &lt;= 100</code></li>
</ul>
