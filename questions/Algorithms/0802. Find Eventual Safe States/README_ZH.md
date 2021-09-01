### [找到最终的安全状态](https://leetcode-cn.com/problems/find-eventual-safe-states)

<p>在有向图中，以某个节点为起始节点，从该点出发，每一步沿着图中的一条有向边行走。如果到达的节点是终点（即它没有连出的有向边），则停止。</p>

<p>对于一个起始节点，如果从该节点出发，<strong>无论每一步选择沿哪条有向边行走</strong>，最后必然在有限步内到达终点，则将该起始节点称作是 <strong>安全</strong> 的。</p>

<p>返回一个由图中所有安全的起始节点组成的数组作为答案。答案数组中的元素应当按 <strong>升序</strong> 排列。</p>

<p>该有向图有 <code>n</code> 个节点，按 <code>0</code> 到 <code>n - 1</code> 编号，其中 <code>n</code> 是&nbsp;<code>graph</code>&nbsp;的节点数。图以下述形式给出：<code>graph[i]</code> 是编号 <code>j</code> 节点的一个列表，满足 <code>(i, j)</code> 是图的一条有向边。</p>

<p>&nbsp;</p>

<div class="original__bRMd">
<div>
<p><strong>示例 1：</strong></p>
<img alt="Illustration of graph" src="https://s3-lc-upload.s3.amazonaws.com/uploads/2018/03/17/picture1.png" style="height: 171px; width: 600px;" />
<pre>
<strong>输入：</strong>graph = [[1,2],[2,3],[5],[0],[5],[],[]]
<strong>输出：</strong>[2,4,5,6]
<strong>解释：</strong>示意图如上。
</pre>

<p><strong>示例 2：</strong></p>

<pre>
<strong>输入：</strong>graph = [[1,2,3,4],[1,2],[3,4],[0,4],[]]
<strong>输出：</strong>[4]
</pre>

<p>&nbsp;</p>

<p><strong>提示：</strong></p>

<ul>
	<li><code>n == graph.length</code></li>
	<li><code>1 &lt;= n &lt;= 10<sup>4</sup></code></li>
	<li><code>0 &lt;= graph[i].length &lt;= n</code></li>
	<li><code>graph[i]</code> 按严格递增顺序排列。</li>
	<li>图中可能包含自环。</li>
	<li>图中边的数目在范围 <code>[1, 4 * 10<sup>4</sup>]</code> 内。</li>
</ul>
</div>
</div>
