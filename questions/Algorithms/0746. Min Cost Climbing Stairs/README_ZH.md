### [使用最小花费爬楼梯](https://leetcode-cn.com/problems/min-cost-climbing-stairs)

<p>数组的每个下标作为一个阶梯，第 <code>i</code> 个阶梯对应着一个非负数的体力花费值 <code>cost[i]</code>（下标从 <code>0</code> 开始）。</p>

<p>每当你爬上一个阶梯你都要花费对应的体力值，一旦支付了相应的体力值，你就可以选择向上爬一个阶梯或者爬两个阶梯。</p>

<p>请你找出达到楼层顶部的最低花费。在开始时，你可以选择从下标为 0 或 1 的元素作为初始阶梯。</p>

<p> </p>

<p><strong>示例 1：</strong></p>

<pre>
<strong>输入：</strong>cost = [10, 15, 20]
<strong>输出：</strong>15
<strong>解释：</strong>最低花费是从 cost[1] 开始，然后走两步即可到阶梯顶，一共花费 15 。
</pre>

<p><strong> 示例 2：</strong></p>

<pre>
<strong>输入：</strong>cost = [1, 100, 1, 1, 1, 100, 1, 1, 100, 1]
<strong>输出：</strong>6
<strong>解释：</strong>最低花费方式是从 cost[0] 开始，逐个经过那些 1 ，跳过 cost[3] ，一共花费 6 。
</pre>

<p> </p>

<p><strong>提示：</strong></p>

<ul>
	<li><code>cost</code> 的长度范围是 <code>[2, 1000]</code>。</li>
	<li><code>cost[i]</code> 将会是一个整型数据，范围为 <code>[0, 999]</code> 。</li>
</ul>
