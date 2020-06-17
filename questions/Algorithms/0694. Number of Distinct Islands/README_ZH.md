### [不同岛屿的数量](https://leetcode-cn.com/problems/number-of-distinct-islands)

<p>给定一个非空01二维数组表示的网格，一个岛屿由四连通（上、下、左、右四个方向）的 <code>1</code> 组成，你可以认为网格的四周被海水包围。</p>

<p>请你计算这个网格中共有多少个形状不同的岛屿。两个岛屿被认为是相同的，当且仅当一个岛屿可以通过平移变换（不可以旋转、翻转）和另一个岛屿重合。</p>

<p>&nbsp;</p>

<p><strong>样例 1:</strong></p>

<pre>11000
11000
00011
00011
</pre>

<p>给定上图，返回结果 <code>1</code>。</p>

<p>&nbsp;</p>

<p><strong>样例 2:</strong></p>

<pre>11011
10000
00001
11011</pre>

<p>给定上图，返回结果 &lt;font color="#c7254e" face="Menlo, Monaco, Consolas, Courier New, monospace"&gt;<span style="">3</span>&lt;/font&gt;。<br>
<br>
注意:</p>

<pre>11
1
</pre>

<p>和</p>

<pre> 1
11
</pre>

<p>是不同的岛屿，因为我们不考虑旋转、翻转操作。</p>

<p>&nbsp;</p>

<p><strong>注释 :</strong>&nbsp; 二维数组每维的大小都不会超过50。</p>
