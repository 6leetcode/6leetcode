### [寻找图中是否存在路径](https://leetcode-cn.com/problems/find-if-path-exists-in-graph)

<p>有一个具有 <code>n</code>个顶点的 <strong>双向</strong> 图，其中每个顶点标记从 <code>0</code> 到 <code>n - 1</code>（包含 <code>0</code> 和 <code>n - 1</code>）。图中的边用一个二维整数数组 <code>edges</code> 表示，其中 <code>edges[i] = [u<sub>i</sub>, v<sub>i</sub>]</code> 表示顶点 <code>ui</code> 和顶点 <code>vi</code> 之间的双向边。 每个顶点对由 <strong>最多一条</strong> 边连接，并且没有顶点存在与自身相连的边。</p>

<p>请你确定是否存在从顶点 <code>start</code> 开始，到顶点 <code>end</code> 结束的 <strong>有效路径</strong> 。</p>

<p>给你数组 <code>edges</code> 和整数 <code>n</code>、<code>start</code>和<code>end</code>，如果从 <code>start</code> 到 <code>end</code> 存在 <strong>有效路径</strong> ，则返回 <code>true</code>，否则返回 <code>false</code> 。</p>

<p>&nbsp;</p>

<p><strong>示例 1：</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2021/08/14/validpath-ex1.png" style="width: 141px; height: 121px;" />
<pre>
<strong>输入：</strong>n = 3, edges = [[0,1],[1,2],[2,0]], start = 0, end = 2
<strong>输出：</strong>true
<strong>解释：</strong>存在由顶点 0 到顶点 2 的路径:
- 0 → 1 → 2 
- 0 → 2
</pre>

<p><strong>示例 2：</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2021/08/14/validpath-ex2.png" style="width: 281px; height: 141px;" />
<pre>
<strong>输入：</strong>n = 6, edges = [[0,1],[0,2],[3,5],[5,4],[4,3]], start = 0, end = 5
<strong>输出：</strong>false
<strong>解释：</strong>不存在由顶点 0 到顶点 5 的路径.
</pre>

<p>&nbsp;</p>

<p><strong>提示:</strong></p>

<ul>
	<li><code>1 &lt;= n &lt;= 2 * 10<sup>5</sup></code></li>
	<li><code>0 &lt;= edges.length &lt;= 2 * 10<sup>5</sup></code></li>
	<li><code>edges[i].length == 2</code></li>
	<li><code>0 &lt;= u<sub>i</sub>, v<sub>i</sub> &lt;= n - 1</code></li>
	<li><code>u<sub>i</sub> != v<sub>i</sub></code></li>
	<li><code>0 &lt;= start, end &lt;= n - 1</code></li>
	<li>不存在双向边</li>
	<li>不存在指向顶点自身的边</li>
</ul>
