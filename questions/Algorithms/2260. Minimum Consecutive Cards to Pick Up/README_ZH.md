### [必须拿起的最小连续卡牌数](https://leetcode-cn.com/problems/minimum-consecutive-cards-to-pick-up)

<p>给你一个整数数组 <code>cards</code> ，其中 <code>cards[i]</code> 表示第 <code>i</code> 张卡牌的 <strong>值</strong> 。如果两张卡牌的值相同，则认为这一对卡牌 <strong>匹配</strong> 。</p>

<p>返回你必须拿起的最小连续卡牌数，以使在拿起的卡牌中有一对匹配的卡牌。如果无法得到一对匹配的卡牌，返回 <code>-1</code> 。</p>

<p>&nbsp;</p>

<p><strong>示例 1：</strong></p>

<pre><strong>输入：</strong>cards = [3,4,2,3,4,7]
<strong>输出：</strong>4
<strong>解释：</strong>拿起卡牌 [3,4,2,3] 将会包含一对值为 3 的匹配卡牌。注意，拿起 [4,2,3,4] 也是最优方案。</pre>

<p><strong>示例 2：</strong></p>

<pre><strong>输入：</strong>cards = [1,0,5,3]
<strong>输出：</strong>-1
<strong>解释：</strong>无法找出含一对匹配卡牌的一组连续卡牌。</pre>

<p>&nbsp;</p>

<p><strong>提示：</strong></p>

<ul>
	<li><code>1 &lt;= cards.length &lt;= 10<sup>5</sup></code></li>
	<li><code>0 &lt;= cards[i] &lt;= 10<sup>6</sup></code></li>
</ul>
