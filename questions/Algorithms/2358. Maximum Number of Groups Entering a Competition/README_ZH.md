### [分组的最大数量](https://leetcode-cn.com/problems/maximum-number-of-groups-entering-a-competition)

<p>给你一个正整数数组 <code>grades</code> ，表示大学中一些学生的成绩。你打算将 <strong>所有</strong> 学生分为一些 <strong>有序</strong> 的非空分组，其中分组间的顺序满足以下全部条件：</p>

<ul>
	<li>第 <code>i</code> 个分组中的学生总成绩 <strong>小于</strong> 第 <code>(i + 1)</code> 个分组中的学生总成绩，对所有组均成立（除了最后一组）。</li>
	<li>第 <code>i</code> 个分组中的学生总数 <strong>小于</strong> 第 <code>(i + 1)</code> 个分组中的学生总数，对所有组均成立（除了最后一组）。</li>
</ul>

<p>返回可以形成的 <strong>最大</strong> 组数。</p>

<p>&nbsp;</p>

<p><strong>示例 1：</strong></p>

<pre><strong>输入：</strong>grades = [10,6,12,7,3,5]
<strong>输出：</strong>3
<strong>解释：</strong>下面是形成 3 个分组的一种可行方法：
- 第 1 个分组的学生成绩为 grades = [12] ，总成绩：12 ，学生数：1
- 第 2 个分组的学生成绩为 grades = [6,7] ，总成绩：6 + 7 = 13 ，学生数：2
- 第 3 个分组的学生成绩为 grades = [10,3,5] ，总成绩：10 + 3 + 5 = 18 ，学生数：3 
可以证明无法形成超过 3 个分组。
</pre>

<p><strong>示例 2：</strong></p>

<pre><strong>输入：</strong>grades = [8,8]
<strong>输出：</strong>1
<strong>解释：</strong>只能形成 1 个分组，因为如果要形成 2 个分组的话，会导致每个分组中的学生数目相等。
</pre>

<p>&nbsp;</p>

<p><strong>提示：</strong></p>

<ul>
	<li><code>1 &lt;= grades.length &lt;= 10<sup>5</sup></code></li>
	<li><code>1 &lt;= grades[i] &lt;= 10<sup>5</sup></code></li>
</ul>
