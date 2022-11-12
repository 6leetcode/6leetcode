### [到达终点数字](https://leetcode-cn.com/problems/reach-a-number)

<p>在一根无限长的数轴上，你站在<code>0</code>的位置。终点在<code>target</code>的位置。</p>

<p>你可以做一些数量的移动 <code>numMoves</code> :</p>

<ul>
	<li>每次你可以选择向左或向右移动。</li>
	<li>第 <code>i</code>&nbsp;次移动（从 &nbsp;<code>i == 1</code>&nbsp;开始，到&nbsp;<code>i == numMoves</code> ），在选择的方向上走 <code>i</code>&nbsp;步。</li>
</ul>

<p>给定整数&nbsp;<code>target</code> ，返回 <em>到达目标所需的 <strong>最小&nbsp;</strong>移动次数(即最小 <code>numMoves</code> )&nbsp;</em>。</p>

<p>&nbsp;</p>

<p><strong>示例 1:</strong></p>

<pre>
<strong>输入:</strong> target = 2
<strong>输出:</strong> 3
<strong>解释:</strong>
第一次移动，从 0 到 1 。
第二次移动，从 1 到 -1 。
第三次移动，从 -1 到 2 。
</pre>

<p><strong>示例 2:</strong></p>

<pre>
<strong>输入:</strong> target = 3
<strong>输出:</strong> 2
<strong>解释:</strong>
第一次移动，从 0 到 1 。
第二次移动，从 1 到 3 。
</pre>

<p>&nbsp;</p>

<p><strong>提示:</strong></p>

<ul>
	<li><code>-10<sup>9</sup>&nbsp;&lt;= target &lt;= 10<sup>9</sup></code></li>
	<li><code>target != 0</code></li>
</ul>
