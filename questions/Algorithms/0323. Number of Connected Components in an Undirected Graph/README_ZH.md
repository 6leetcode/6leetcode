### [无向图中连通分量的数目](https://leetcode-cn.com/problems/number-of-connected-components-in-an-undirected-graph)

<p>给定编号从 <code>0</code> 到 <code>n-1</code> 的 <code>n</code> 个节点和一个无向边列表（每条边都是一对节点），请编写一个函数来计算无向图中连通分量的数目。</p>

<p><strong>示例 1:</strong></p>

<pre><strong>输入: </strong><code>n = 5</code> 和 <code>edges = [[0, 1], [1, 2], [3, 4]]</code>

     0          3
     |          |
     1 --- 2    4 

<strong>输出: </strong>2
</pre>

<p><strong>示例 2:</strong></p>

<pre><strong>输入: </strong><code>n = 5</code> 和 <code>edges = [[0, 1], [1, 2], [2, 3], [3, 4]]</code>

     0           4
     |           |
     1 --- 2 --- 3

<strong>输出:&nbsp;&nbsp;</strong>1
</pre>

<p><strong>注意:</strong><br>
你可以假设在 <code>edges</code> 中不会出现重复的边。而且由于所以的边都是无向边，<code>[0, 1]</code> 与 <code>[1, 0]</code>&nbsp; 相同，所以它们不会同时在 <code>edges</code> 中出现。</p>
