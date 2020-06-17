### [判断三角形](https://leetcode-cn.com/problems/triangle-judgement)

<p>一个小学生 Tim 的作业是判断三条线段是否能形成一个三角形。</p>

<p>&nbsp;</p>

<p>然而，这个作业非常繁重，因为有几百组线段需要判断。</p>

<p>&nbsp;</p>

<p>假设表 <code>triangle</code>&nbsp;保存了所有三条线段的三元组 x, y, z ，你能帮 Tim 写一个查询语句，来判断每个三元组是否可以组成一个三角形吗？</p>

<p>&nbsp;</p>

<pre>| x  | y  | z  |
|----|----|----|
| 13 | 15 | 30 |
| 10 | 20 | 15 |
</pre>

<p>对于如上样例数据，你的查询语句应该返回如下结果：</p>

<pre>| x  | y  | z  | triangle |
|----|----|----|----------|
| 13 | 15 | 30 | No       |
| 10 | 20 | 15 | Yes      |
</pre>
