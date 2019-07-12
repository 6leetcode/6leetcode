### [朋友圈](https://leetcode-cn.com/problems/friend-circles)

<p>班上有&nbsp;<strong>N&nbsp;</strong>名学生。其中有些人是朋友，有些则不是。他们的友谊具有是传递性。如果已知 A 是 B&nbsp;的朋友，B 是 C&nbsp;的朋友，那么我们可以认为 A 也是 C&nbsp;的朋友。所谓的朋友圈，是指所有朋友的集合。</p>

<p>给定一个&nbsp;<strong>N * N&nbsp;</strong>的矩阵&nbsp;<strong>M</strong>，表示班级中学生之间的朋友关系。如果M[i][j] = 1，表示已知第 i 个和 j 个学生<strong>互为</strong>朋友关系，否则为不知道。你必须输出所有学生中的已知的朋友圈总数。</p>

<p>&nbsp;</p>

<p><strong>示例 1：</strong></p>

<pre><strong>输入：</strong>
[[1,1,0],
 [1,1,0],
 [0,0,1]]
<strong>输出：</strong>2 
<strong>解释：</strong>已知学生 0 和学生 1 互为朋友，他们在一个朋友圈。
第2个学生自己在一个朋友圈。所以返回 2 。
</pre>

<p><strong>示例 2：</strong></p>

<pre><strong>输入：</strong>
[[1,1,0],
 [1,1,1],
 [0,1,1]]
<strong>输出：</strong>1
<strong>解释：</strong>已知学生 0 和学生 1 互为朋友，学生 1 和学生 2 互为朋友，所以学生 0 和学生 2 也是朋友，所以他们三个在一个朋友圈，返回 1 。
</pre>

<p>&nbsp;</p>

<p><strong>提示：</strong></p>

<ul>
	<li><code>1 &lt;= N &lt;= 200</code></li>
	<li><code>M[i][i] == 1</code></li>
	<li><code>M[i][j] == M[j][i]</code></li>
</ul>
