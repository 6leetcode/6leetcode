### [任务调度器](https://leetcode-cn.com/problems/task-scheduler)

<p>给定一个用字符数组表示的 CPU 需要执行的任务列表。其中包含使用大写的 A - Z 字母表示的26 种不同种类的任务。任务可以以任意顺序执行，并且每个任务都可以在 1 个单位时间内执行完。CPU 在任何一个单位时间内都可以执行一个任务，或者在待命状态。</p>

<p>然而，两个<strong>相同种类</strong>的任务之间必须有长度为<strong>&nbsp;n </strong>的冷却时间，因此至少有连续 n 个单位时间内 CPU 在执行不同的任务，或者在待命状态。</p>

<p>你需要计算完成所有任务所需要的<strong>最短时间</strong>。</p>

<p>&nbsp;</p>

<p><strong>示例 ：</strong></p>

<pre><strong>输入：</strong>tasks = [&quot;A&quot;,&quot;A&quot;,&quot;A&quot;,&quot;B&quot;,&quot;B&quot;,&quot;B&quot;], n = 2
<strong>输出：</strong>8
<strong>解释：</strong>A -&gt; B -&gt; (待命) -&gt; A -&gt; B -&gt; (待命) -&gt; A -&gt; B.
     在本示例中，两个相同类型任务之间必须间隔长度为 n = 2 的冷却时间，而执行一个任务只需要一个单位时间，所以中间出现了（待命）状态。 </pre>

<p>&nbsp;</p>

<p><strong>提示：</strong></p>

<ol>
	<li>任务的总个数为&nbsp;<code>[1, 10000]</code>。</li>
	<li><code>n</code> 的取值范围为 <code>[0, 100]</code>。</li>
</ol>
