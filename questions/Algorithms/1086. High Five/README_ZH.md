### [前五科的均分](https://leetcode-cn.com/problems/high-five)

<p>给你一个不同学生的分数列表，请按&nbsp;<strong>学生的 id&nbsp;顺序&nbsp;</strong>返回每个学生&nbsp;<strong>最高的五科&nbsp;</strong>成绩的&nbsp;<strong>平均分</strong>。</p>

<p>对于每条&nbsp;<code>items[i]</code>&nbsp;记录， <code>items[i][0]</code>&nbsp;为学生的 id，<code>items[i][1]</code>&nbsp;为学生的分数。平均分请采用整数除法计算。</p>

<p>&nbsp;</p>

<p><strong>示例：</strong></p>

<pre><strong>输入：</strong>[[1,91],[1,92],[2,93],[2,97],[1,60],[2,77],[1,65],[1,87],[1,100],[2,100],[2,76]]
<strong>输出：</strong>[[1,87],[2,88]]
<strong>解释：</strong>
id = 1 的学生平均分为 87。
id = 2 的学生平均分为 88.6。但由于整数除法的缘故，平均分会被转换为 88。
</pre>

<p>&nbsp;</p>

<p><strong>提示：</strong></p>

<ol>
	<li><code>1 &lt;= items.length &lt;= 1000</code></li>
	<li><code>items[i].length == 2</code></li>
	<li>学生的 ID 在&nbsp;<code>1</code> 到&nbsp;<code>1000</code>&nbsp;之间</li>
	<li>学生的分数在&nbsp;<code>1</code> 到&nbsp;<code>100</code>&nbsp;之间</li>
	<li>每个学生至少有五个分数</li>
</ol>
