### [前五科的均分](https://leetcode-cn.com/problems/high-five)

<p>给你一个不同学生的分数列表 <code>items</code>，其中 <code>items[i] = [ID<sub>i</sub>, score<sub>i</sub>]</code> 表示 <code>ID<sub>i</sub></code> 的学生的一科分数，你需要计算每个学生 <strong>最高的五科 </strong>成绩的 <strong>平均分</strong>。</p>

<p>返回答案 <code>result</code> 以数对数组形式给出<em>，</em>其中<em> </em><code>result[j] = [ID<sub>j</sub>, topFiveAverage<sub>j</sub>]</code><em> </em>表示<em> </em><code>ID<sub>j</sub></code><em> </em>的学生和他 <strong>最高的五科 </strong>成绩的 <strong>平均分</strong><em>。</em><code>result</code><em> </em>需要按<em> </em><code>ID<sub>j</sub></code><em>  </em>递增的 <strong>顺序排列</strong> 。</p>

<p>学生 <strong>最高的五科 </strong>成绩的 <strong>平均分 </strong>的计算方法是将最高的五科分数相加，然后用 <strong>整数除法</strong> 除以 5 。</p>

<p> </p>

<p><strong>示例 1：</strong></p>

<pre>
<strong>输入：</strong>items = [[1,91],[1,92],[2,93],[2,97],[1,60],[2,77],[1,65],[1,87],[1,100],[2,100],[2,76]]
<strong>输出：</strong>[[1,87],[2,88]]
<strong>解释：</strong>
ID = 1 的学生分数为 91、92、60、65、87 和 100 。前五科的平均分 (100 + 92 + 91 + 87 + 65) / 5 = 87
ID = 2 的学生分数为 93、97、77、100 和 76 。前五科的平均分 (100 + 97 + 93 + 77 + 76) / 5 = 88.6，但是由于使用整数除法，结果转换为 88
</pre>

<p><strong>示例 2：</strong></p>

<pre>
<strong>输入：</strong>items = [[1,100],[7,100],[1,100],[7,100],[1,100],[7,100],[1,100],[7,100],[1,100],[7,100]]
<strong>输出：</strong>[[1,100],[7,100]]
</pre>

<p> </p>

<p><strong>提示：</strong></p>

<ul>
	<li><code>1 <= items.length <= 1000</code></li>
	<li><code>items[i].length == 2</code></li>
	<li><code>1 <= ID<sub>i</sub> <= 1000</code></li>
	<li><code>0 <= score<sub>i</sub> <= 100</code></li>
	<li>对于每个 <code>ID<sub>i</sub></code>，<strong>至少</strong> 存在五个分数</li>
</ul>
