### [完成所有任务需要的最少轮数](https://leetcode-cn.com/problems/minimum-rounds-to-complete-all-tasks)

<p>给你一个下标从 <strong>0</strong> 开始的整数数组 <code>tasks</code> ，其中 <code>tasks[i]</code> 表示任务的难度级别。在每一轮中，你可以完成 2 个或者 3 个 <strong>相同难度级别</strong> 的任务。</p>

<p>返回完成所有任务需要的 <strong>最少</strong> 轮数，如果无法完成所有任务，返回<em> </em><code>-1</code><em> </em>。</p>

<p>&nbsp;</p>

<p><strong>示例 1：</strong></p>

<pre><strong>输入：</strong>tasks = [2,2,3,3,2,4,4,4,4,4]
<strong>输出：</strong>4
<strong>解释：</strong>要想完成所有任务，一个可能的计划是：
- 第一轮，完成难度级别为 2 的 3 个任务。 
- 第二轮，完成难度级别为 3 的 2 个任务。 
- 第三轮，完成难度级别为 4 的 3 个任务。 
- 第四轮，完成难度级别为 4 的 2 个任务。 
可以证明，无法在少于 4 轮的情况下完成所有任务，所以答案为 4 。
</pre>

<p><strong>示例 2：</strong></p>

<pre><strong>输入：</strong>tasks = [2,3,3]
<strong>输出：</strong>-1
<strong>解释：</strong>难度级别为 2 的任务只有 1 个，但每一轮执行中，只能选择完成 2 个或者 3 个相同难度级别的任务。因此，无法完成所有任务，答案为 -1 。
</pre>

<p>&nbsp;</p>

<p><strong>提示：</strong></p>

<ul>
	<li><code>1 &lt;= tasks.length &lt;= 10<sup>5</sup></code></li>
	<li><code>1 &lt;= tasks[i] &lt;= 10<sup>9</sup></code></li>
</ul>
