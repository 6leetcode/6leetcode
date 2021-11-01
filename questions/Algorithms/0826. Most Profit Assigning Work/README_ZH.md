### [安排工作以达到最大收益](https://leetcode-cn.com/problems/most-profit-assigning-work)

<p>有一些工作：<code>difficulty[i]</code>&nbsp;表示第 <code>i</code> 个工作的难度，<code>profit[i]</code> 表示第 <code>i</code> 个工作的收益。</p>

<p>现在我们有一些工人。<code>worker[i]</code> 是第 <code>i</code> 个工人的能力，即该工人只能完成难度小于等于 <code>worker[i]</code> 的工作。</p>

<p>每一个工人都最多只能安排一个工作，但是一个工作可以完成多次。</p>

<p>举个例子，如果 3 个工人都尝试完成一份报酬为 1 的同样工作，那么总收益为 $3。如果一个工人不能完成任何工作，他的收益为 $0 。</p>

<p>我们能得到的最大收益是多少？</p>

<p>&nbsp;</p>

<p><strong>示例 1：</strong></p>

<pre>
<strong>输入: </strong>difficulty = [2,4,6,8,10], profit = [10,20,30,40,50], worker = [4,5,6,7]
<strong>输出: </strong>100 
<strong>解释: </strong>工人被分配的工作难度是 [4,4,6,6] ，分别获得 [20,20,30,30] 的收益。</pre>

<p><strong>示例 2:</strong></p>

<pre>
<strong>输入:</strong> difficulty = [85,47,57], profit = [24,66,99], worker = [40,25,25]
<strong>输出:</strong> 0</pre>

<p>&nbsp;</p>

<p><strong>提示:</strong></p>

<ul>
	<li><code>n == difficulty.length</code></li>
	<li><code>n == profit.length</code></li>
	<li><code>m == worker.length</code></li>
	<li><code>1 &lt;= n, m &lt;= 10<sup>4</sup></code></li>
	<li><code>1 &lt;= difficulty[i], profit[i], worker[i] &lt;= 10<sup>5</sup></code></li>
</ul>
