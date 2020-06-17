### [最佳的碰头地点](https://leetcode-cn.com/problems/best-meeting-point)

<p>有一队人（两人或以上）想要在一个地方碰面，他们希望能够最小化他们的总行走距离。</p>

<p>给你一个 2D&nbsp;网格，其中各个格子内的值要么是&nbsp;0，要么是&nbsp;1。</p>

<p>1 表示某个人的家所处的位置。这里，我们将使用&nbsp;<a href="https://baike.baidu.com/item/%E6%9B%BC%E5%93%88%E9%A1%BF%E8%B7%9D%E7%A6%BB" target="_blank">曼哈顿距离</a>&nbsp;来计算，其中&nbsp;distance(p1, p2) = <code>|p2.x - p1.x| + |p2.y - p1.y|</code>。</p>

<p><strong>示例：</strong></p>

<pre><strong>输入:</strong> 

1 - 0 - 0 - 0 - 1
|   |   |   |   |
0 - 0 - 0 - 0 - 0
|   |   |   |   |
0 - 0 - 1 - 0 - 0

<strong>输出: 6 

解析: </strong>给定的三个人分别住在<code>(0,0)<span style="">，</span></code><code>(0,4) </code>和 <code>(2,2)</code>:
&nbsp;    <code>(0,2)</code> 是一个最佳的碰面点，其总行走距离为 2 + 2 + 2 = 6，最小，因此返回 6。</pre>
