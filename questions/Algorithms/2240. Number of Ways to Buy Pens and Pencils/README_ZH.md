### [买钢笔和铅笔的方案数](https://leetcode-cn.com/problems/number-of-ways-to-buy-pens-and-pencils)

<p>给你一个整数&nbsp;<code>total</code>&nbsp;，表示你拥有的总钱数。同时给你两个整数&nbsp;<code>cost1</code> 和&nbsp;<code>cost2</code>&nbsp;，分别表示一支钢笔和一支铅笔的价格。你可以花费你部分或者全部的钱，去买任意数目的两种笔。</p>

<p>请你返回购买钢笔和铅笔的&nbsp;<strong>不同方案数目</strong>&nbsp;。</p>

<p>&nbsp;</p>

<p><strong>示例 1：</strong></p>

<pre><b>输入：</b>total = 20, cost1 = 10, cost2 = 5
<b>输出：</b>9
<b>解释：</b>一支钢笔的价格为 10 ，一支铅笔的价格为 5 。
- 如果你买 0 支钢笔，那么你可以买 0 ，1 ，2 ，3 或者 4 支铅笔。
- 如果你买 1 支钢笔，那么你可以买 0 ，1 或者 2 支铅笔。
- 如果你买 2 支钢笔，那么你没法买任何铅笔。
所以买钢笔和铅笔的总方案数为 5 + 3 + 1 = 9 种。
</pre>

<p><strong>示例 2：</strong></p>

<pre><b>输入：</b>total = 5, cost1 = 10, cost2 = 10
<b>输出：</b>1
<b>解释：</b>钢笔和铅笔的价格都为 10 ，都比拥有的钱数多，所以你没法购买任何文具。所以只有 1 种方案：买 0 支钢笔和 0 支铅笔。
</pre>

<p>&nbsp;</p>

<p><strong>提示：</strong></p>

<ul>
	<li><code>1 &lt;= total, cost1, cost2 &lt;= 10<sup>6</sup></code></li>
</ul>
