### [所有可能的路径](https://leetcode-cn.com/problems/all-paths-from-source-to-target)

<p>给一个有 <code>n</code> 个结点的有向无环图，找到所有从 <code>0</code> 到 <code>n-1</code> 的路径并输出（不要求按顺序）</p>

<p>二维数组的第 <code>i</code> 个数组中的单元都表示有向图中 <code>i</code> 号结点所能到达的下一些结点（译者注：有向图是有方向的，即规定了 a→b 你就不能从 b→a ）空就是没有下一个结点了。</p>

<p> </p>

<p><strong>示例 1：</strong></p>

<p><img alt="" src="https://assets.leetcode.com/uploads/2020/09/28/all_1.jpg" style="height: 242px; width: 242px;" /></p>

<pre>
<strong>输入：</strong>graph = [[1,2],[3],[3],[]]
<strong>输出：</strong>[[0,1,3],[0,2,3]]
<strong>解释：</strong>有两条路径 0 -> 1 -> 3 和 0 -> 2 -> 3
</pre>

<p><strong>示例 2：</strong></p>

<p><img alt="" src="https://assets.leetcode.com/uploads/2020/09/28/all_2.jpg" style="height: 301px; width: 423px;" /></p>

<pre>
<strong>输入：</strong>graph = [[4,3,1],[3,2,4],[3],[4],[]]
<strong>输出：</strong>[[0,4],[0,3,4],[0,1,3,4],[0,1,2,3,4],[0,1,4]]
</pre>

<p><strong>示例 3：</strong></p>

<pre>
<strong>输入：</strong>graph = [[1],[]]
<strong>输出：</strong>[[0,1]]
</pre>

<p><strong>示例 4：</strong></p>

<pre>
<strong>输入：</strong>graph = [[1,2,3],[2],[3],[]]
<strong>输出：</strong>[[0,1,2,3],[0,2,3],[0,3]]
</pre>

<p><strong>示例 5：</strong></p>

<pre>
<strong>输入：</strong>graph = [[1,3],[2],[3],[]]
<strong>输出：</strong>[[0,1,2,3],[0,3]]
</pre>

<p> </p>

<p><strong>提示：</strong></p>

<ul>
	<li><code>n == graph.length</code></li>
	<li><code>2 <= n <= 15</code></li>
	<li><code>0 <= graph[i][j] < n</code></li>
	<li><code>graph[i][j] != i</code> </li>
	<li>保证输入为有向无环图 <code>(GAD)</code></li>
</ul>
