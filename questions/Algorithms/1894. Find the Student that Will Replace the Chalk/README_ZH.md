### [找到需要补充粉笔的学生编号](https://leetcode-cn.com/problems/find-the-student-that-will-replace-the-chalk)

<p>一个班级里有 <code>n</code> 个学生，编号为 <code>0</code> 到 <code>n - 1</code> 。每个学生会依次回答问题，编号为 <code>0</code> 的学生先回答，然后是编号为 <code>1</code> 的学生，以此类推，直到编号为 <code>n - 1</code> 的学生，然后老师会重复这个过程，重新从编号为 <code>0</code> 的学生开始回答问题。</p>

<p>给你一个长度为 <code>n</code> 且下标从 <code>0</code> 开始的整数数组 <code>chalk</code> 和一个整数 <code>k</code> 。一开始粉笔盒里总共有 <code>k</code> 支粉笔。当编号为 <code>i</code> 的学生回答问题时，他会消耗 <code>chalk[i]</code> 支粉笔。如果剩余粉笔数量 <strong>严格小于</strong> <code>chalk[i]</code> ，那么学生 <code>i</code> 需要 <strong>补充</strong> 粉笔。</p>

<p>请你返回需要 <strong>补充</strong> 粉笔的学生 <strong>编号</strong> 。</p>

<p> </p>

<p><strong>示例 1：</strong></p>

<pre><b>输入：</b>chalk = [5,1,5], k = 22
<b>输出：</b>0
<strong>解释：</strong>学生消耗粉笔情况如下：
- 编号为 0 的学生使用 5 支粉笔，然后 k = 17 。
- 编号为 1 的学生使用 1 支粉笔，然后 k = 16 。
- 编号为 2 的学生使用 5 支粉笔，然后 k = 11 。
- 编号为 0 的学生使用 5 支粉笔，然后 k = 6 。
- 编号为 1 的学生使用 1 支粉笔，然后 k = 5 。
- 编号为 2 的学生使用 5 支粉笔，然后 k = 0 。
编号为 0 的学生没有足够的粉笔，所以他需要补充粉笔。</pre>

<p><strong>示例 2：</strong></p>

<pre><b>输入：</b>chalk = [3,4,1,2], k = 25
<b>输出：</b>1
<b>解释：</b>学生消耗粉笔情况如下：
- 编号为 0 的学生使用 3 支粉笔，然后 k = 22 。
- 编号为 1 的学生使用 4 支粉笔，然后 k = 18 。
- 编号为 2 的学生使用 1 支粉笔，然后 k = 17 。
- 编号为 3 的学生使用 2 支粉笔，然后 k = 15 。
- 编号为 0 的学生使用 3 支粉笔，然后 k = 12 。
- 编号为 1 的学生使用 4 支粉笔，然后 k = 8 。
- 编号为 2 的学生使用 1 支粉笔，然后 k = 7 。
- 编号为 3 的学生使用 2 支粉笔，然后 k = 5 。
- 编号为 0 的学生使用 3 支粉笔，然后 k = 2 。
编号为 1 的学生没有足够的粉笔，所以他需要补充粉笔。
</pre>

<p> </p>

<p><strong>提示：</strong></p>

<ul>
	<li><code>chalk.length == n</code></li>
	<li><code>1 &lt;= n &lt;= 10<sup>5</sup></code></li>
	<li><code>1 &lt;= chalk[i] &lt;= 10<sup>5</sup></code></li>
	<li><code>1 &lt;= k &lt;= 10<sup>9</sup></code></li>
</ul>
