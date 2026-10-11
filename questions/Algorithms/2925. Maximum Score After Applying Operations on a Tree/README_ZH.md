### [在树上执行操作以后得到的最大分数](https://leetcode.cn/problems/maximum-score-after-applying-operations-on-a-tree)

<p>有一棵 <code>n</code>&nbsp;个节点的无向树，节点编号为 0&nbsp;到 <code>n - 1</code>&nbsp;，根节点编号为 0&nbsp;。给你一个长度为 <code>n - 1</code>&nbsp;的二维整数数组&nbsp;<code>edges</code>&nbsp;表示这棵树，其中&nbsp;<code>edges[i] = [a<sub>i</sub>, b<sub>i</sub>]</code>&nbsp;表示树中节点&nbsp;<code>a<sub>i</sub></code>&nbsp;和&nbsp;<code>b<sub>i</sub></code>&nbsp;有一条边。</p>

<p>同时给你一个长度为 <code>n</code>&nbsp;下标从 <strong>0</strong>&nbsp;开始的整数数组&nbsp;<code>values</code>&nbsp;，其中&nbsp;<code>values[i]</code>&nbsp;表示第 <code>i</code>&nbsp;个节点的值。</p>

<p>一开始你的分数为 0。在一次操作中，你选择一个节点 <code>i</code>，将 <code>values[i]</code> 的值 <strong>加</strong> 到你的得分上，然后将 <code>values[i]</code> <strong>设置</strong> 为 0。这三个步骤作为一个单一操作同时发生。</p>

<p>如果从根节点出发，到 <strong>任意</strong> 叶子节点经过的路径上的节点值之和都 <strong>不等于</strong> 0 ，那么我们称这棵树是 <strong>健康的</strong>&nbsp;。</p>

<p>你可以对这棵树执行任意次操作，但要求执行完所有操作以后树是&nbsp;<strong>健康的</strong>&nbsp;，请你返回你可以获得的 <strong>最大分数</strong>&nbsp;。</p>

<p>&nbsp;</p>

<p><strong class="example">示例 1：</strong></p>

<p><img alt="" src="https://assets.leetcode.com/uploads/2023/10/11/graph-13-1.png" style="width: 515px; height: 443px;" /></p>

<pre>
<b>输入：</b>edges = [[0,1],[0,2],[0,3],[2,4],[4,5]], values = [5,2,5,2,1,1]
<b>输出：</b>11
<b>解释：</b>我们对节点 1、2、3、4 和 5 进行操作，因此值变为 [5,0,0,0,0,0]。叶子节点是节点 1、3 和 5。
- 从 0 到 1 的路径上值的总和等于 5。
- 从 0 到 3 的路径上值的总和等于 5。
- 从 0 到 5 的路径上值的总和等于 5。
每个叶子节点都有非零的路径和，所以树是健康的。得分是所选节点的原始值的总和：2 + 5 + 2 + 1 + 1 = 11。
可以证明 11 是通过在树上执行任何数量的操作所能获得的最大分数。
</pre>

<p><strong class="example">示例 2：</strong></p>

<p><img alt="" src="https://assets.leetcode.com/uploads/2023/10/11/graph-14-2.png" style="width: 522px; height: 245px;" /></p>

<pre>
<b>输入：</b>edges = [[0,1],[0,2],[1,3],[1,4],[2,5],[2,6]], values = [20,10,9,7,4,3,5]
<b>输出：</b>40
<b>解释：</b>我们对节点 0、2、3 和 4 进行操作，因此值变为 [0,10,0,0,0,3,5]。叶子节点是节点 3、4、5 和 6。
- 从 0 到 3 的路径上值的总和等于 10。
- 从 0 到 4 的路径上值的总和等于 10。
- 从 0 到 5 的路径上值的总和等于 3。
- 从 0 到 6 的路径上值的总和等于 5。
每个叶子节点都有非零的路径和，所以树是健康的。得分是所选节点原始值的总和：20 + 9 + 7 + 4 = 40。
可以证明 40 是通过在树上执行任何数量的操作所能获得的最高分数。</pre>

<p>&nbsp;</p>

<p><strong>提示：</strong></p>

<ul>
	<li><code>2 &lt;= n &lt;= 2 * 10<sup>4</sup></code></li>
	<li><code>edges.length == n - 1</code></li>
	<li><code>edges[i].length == 2</code></li>
	<li><code>0 &lt;= a<sub>i</sub>, b<sub>i</sub> &lt; n</code></li>
	<li><code>values.length == n</code></li>
	<li><code>1 &lt;= values[i] &lt;= 10<sup>9</sup></code></li>
	<li>输入保证&nbsp;<code>edges</code>&nbsp;构成一棵合法的树。</li>
</ul>
