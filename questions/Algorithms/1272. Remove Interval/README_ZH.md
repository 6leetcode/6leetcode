### [删除区间](https://leetcode-cn.com/problems/remove-interval)

<p>实数集合可以表示为若干不相交区间的并集，其中每个区间的形式为 <code>[a, b)</code>（左闭右开），表示满足 <code>a <= x < b</code> 的所有实数  <code>x</code> 的集合。如果某个区间 <code>[a, b)</code> 中包含实数 <code>x</code> ，则称实数 <code>x</code> 在集合中。</p>

<p>给你一个 <strong>有序的</strong> 不相交区间列表 <code>intervals</code> 和一个要删除的区间 <code>toBeRemoved</code> 。<code>intervals</code> 表示一个实数集合，其中每一项 <code>intervals[i] = [a<sub>i</sub>, b<sub>i</sub>]</code> 都表示一个区间 <code>[a<sub>i</sub>, b<sub>i</sub>)</code> 。</p>

<p>请你 <code>intervals</code> 中任意区间与 <code>toBeRemoved</code> 有交集的部分都删除。返回删除所有交集区间后， <code>intervals</code> 剩余部分的 <strong>有序</strong> 列表。换句话说，返回实数集合，并满足集合中的每个实数 <code>x</code> 都在 <code>intervals</code> 中，但不在 <code>toBeRemoved</code> 中。</p>

<p> </p>

<p><strong>示例 1：</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2020/12/24/removeintervalex1.png" style="width: 510px; height: 319px;" />
<pre>
<strong>输入：</strong>intervals = [[0,2],[3,4],[5,7]], toBeRemoved = [1,6]
<strong>输出：</strong>[[0,1],[6,7]]
</pre>

<p><strong>示例 2：</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2020/12/24/removeintervalex2.png" style="width: 410px; height: 318px;" />
<pre>
<strong>输入：</strong>intervals = [[0,5]], toBeRemoved = [2,3]
<strong>输出：</strong>[[0,2],[3,5]]
</pre>

<p><strong>示例 3：</strong></p>

<pre>
<strong>输入：</strong>intervals = [[-5,-4],[-3,-2],[1,2],[3,5],[8,9]], toBeRemoved = [-1,4]
<strong>输出：</strong>[[-5,-4],[-3,-2],[4,5],[8,9]]
</pre>

<p> </p>

<p><strong>提示：</strong></p>

<ul>
	<li><code>1 <= intervals.length <= 10<sup>4</sup></code></li>
	<li><code>-10<sup>9</sup> <= a<sub>i</sub> < b<sub>i</sub> <= 10<sup>9</sup></code></li>
</ul>
