### [找到最终的安全状态](https://leetcode-cn.com/problems/find-eventual-safe-states)

<p>有一个有 <code>n</code> 个节点的有向图，节点按 <code>0</code> 到 <code>n - 1</code> 编号。图由一个 <strong>索引从 0 开始</strong> 的 2D 整数数组&nbsp;<code>graph</code>表示，&nbsp;<code>graph[i]</code>是与节点 <code>i</code> 相邻的节点的整数数组，这意味着从节点 <code>i</code> 到&nbsp;<code>graph[i]</code>中的每个节点都有一条边。</p>

<p>如果一个节点没有连出的有向边，则它是 <strong>终端节点</strong> 。如果没有出边，则节点为终端节点。如果从该节点开始的所有可能路径都通向 <strong>终端节点</strong> ，则该节点为 <strong>安全节点</strong> 。</p>

<p>返回一个由图中所有 <strong>安全节点</strong> 组成的数组作为答案。答案数组中的元素应当按 <strong>升序</strong> 排列。</p>

<p>&nbsp;</p>

<p><strong>示例 1：</strong></p>

<p><img alt="Illustration of graph" src="https://s3-lc-upload.s3.amazonaws.com/uploads/2018/03/17/picture1.png" /></p>

<pre>
<strong>输入：</strong>graph = [[1,2],[2,3],[5],[0],[5],[],[]]
<strong>输出：</strong>[2,4,5,6]
<strong>解释：</strong>示意图如上。
节点 5 和节点 6 是终端节点，因为它们都没有出边。
从节点 2、4、5 和 6 开始的所有路径都指向节点 5 或 6 。
</pre>

<p><strong>示例 2：</strong></p>

<pre>
<strong>输入：</strong>graph = [[1,2,3,4],[1,2],[3,4],[0,4],[]]
<strong>输出：</strong>[4]
<strong>解释:</strong>
只有节点 4 是终端节点，从节点 4 开始的所有路径都通向节点 4 。
</pre>

<p>&nbsp;</p>

<p><strong>提示：</strong></p>

<ul>
	<li><code>n == graph.length</code></li>
	<li><code>1 &lt;= n &lt;= 10<sup>4</sup></code></li>
	<li><code>0 &lt;= graph[i].length &lt;= n</code></li>
	<li><code>0 &lt;= graph[i][j] &lt;= n - 1</code></li>
	<li><code>graph[i]</code> 按严格递增顺序排列。</li>
	<li>图中可能包含自环。</li>
	<li>图中边的数目在范围 <code>[1, 4 * 10<sup>4</sup>]</code> 内。</li>
</ul>
