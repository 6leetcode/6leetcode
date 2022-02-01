### [网格照明](https://leetcode-cn.com/problems/grid-illumination)

<p>在大小为 <code>n x n</code> 的网格 <code>grid</code> 上，每个单元格都有一盏灯，最初灯都处于 <strong>关闭</strong> 状态。</p>

<p>给你一个由灯的位置组成的二维数组&nbsp;<code>lamps</code> ，其中 <code>lamps[i] = [row<sub>i</sub>, col<sub>i</sub>]</code> 表示 <strong>打开</strong> 位于 <code>grid[row<sub>i</sub>][col<sub>i</sub>]</code> 的灯。即便同一盏灯可能在 <code>lamps</code> 中多次列出，不会影响这盏灯处于 <strong>打开</strong> 状态。</p>

<p>当一盏灯处于打开状态，它将会照亮 <strong>自身所在单元格</strong> 以及同一 <strong>行</strong> 、同一 <strong>列</strong> 和两条 <strong>对角线</strong> 上的 <strong>所有其他单元格</strong> 。</p>

<p>另给你一个二维数组 <code>queries</code> ，其中 <code>queries[j] = [row<sub>j</sub>, col<sub>j</sub>]</code> 。对于第 <code>j</code> 个查询，如果单元格 <code>[row<sub>j</sub>, col<sub>j</sub>]</code> 是被照亮的，则查询结果为 <code>1</code> ，否则为 <code>0</code> 。在第 <code>j</code> 次查询之后 [按照查询的顺序] ，<strong>关闭</strong> 位于单元格 <code>grid[row<sub>j</sub>][col<sub>j</sub>]</code> 上及相邻 8 个方向上（与单元格 <code>grid[row<sub>i</sub>][col<sub>i</sub>]</code> 共享角或边）的任何灯。</p>

<p>返回一个整数数组 <code>ans</code> 作为答案， <code>ans[j]</code> 应等于第 <code>j</code> 次查询&nbsp;<code>queries[j]</code>&nbsp;的结果，<code>1</code> 表示照亮，<code>0</code> 表示未照亮。</p>

<p>&nbsp;</p>

<p><strong>示例 1：</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2020/08/19/illu_1.jpg" style="height: 209px; width: 750px;" />
<pre>
<strong>输入：</strong>n = 5, lamps = [[0,0],[4,4]], queries = [[1,1],[1,0]]
<strong>输出：</strong>[1,0]
<strong>解释：</strong>最初所有灯都是关闭的。在执行查询之前，打开位于 [0, 0] 和 [4, 4] 的灯。第 0&nbsp;次查询检查 grid[1][1] 是否被照亮（蓝色方框）。该单元格被照亮，所以 ans[0] = 1 。然后，关闭红色方框中的所有灯。
<img alt="" src="https://assets.leetcode.com/uploads/2020/08/19/illu_step1.jpg" style="height: 218px; width: 500px;" />
第 1&nbsp;次查询检查 grid[1][0] 是否被照亮（蓝色方框）。该单元格没有被照亮，所以 ans[1] = 0 。然后，关闭红色矩形中的所有灯。
<img alt="" src="https://assets.leetcode.com/uploads/2020/08/19/illu_step2.jpg" style="height: 219px; width: 500px;" />
</pre>

<p><strong>示例 2：</strong></p>

<pre>
<strong>输入：</strong>n = 5, lamps = [[0,0],[4,4]], queries = [[1,1],[1,1]]
<strong>输出：</strong>[1,1]
</pre>

<p><strong>示例 3：</strong></p>

<pre>
<strong>输入：</strong>n = 5, lamps = [[0,0],[0,4]], queries = [[0,4],[0,1],[1,4]]
<strong>输出：</strong>[1,1,0]
</pre>

<p>&nbsp;</p>

<p><strong>提示：</strong></p>

<ul>
	<li><code>1 &lt;= n &lt;= 10<sup>9</sup></code></li>
	<li><code>0 &lt;= lamps.length &lt;= 20000</code></li>
	<li><code>0 &lt;= queries.length &lt;= 20000</code></li>
	<li><code>lamps[i].length == 2</code></li>
	<li><code>0 &lt;= row<sub>i</sub>, col<sub>i</sub> &lt; n</code></li>
	<li><code>queries[j].length == 2</code></li>
	<li><code>0 &lt;= row<sub>j</sub>, col<sub>j</sub> &lt; n</code></li>
</ul>
