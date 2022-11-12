### [K 次操作后最大化顶端元素](https://leetcode-cn.com/problems/maximize-the-topmost-element-after-k-moves)

<p>给你一个下标从 <strong>0</strong>&nbsp;开始的整数数组&nbsp;<code>nums</code>&nbsp;，它表示一个 <strong>栈</strong> ，其中 <code>nums[0]</code>&nbsp;是栈顶的元素。</p>

<p>每一次操作中，你可以执行以下操作 <strong>之一</strong>&nbsp;：</p>

<ul>
	<li>如果栈非空，那么 <strong>删除</strong>&nbsp;栈顶端的元素。</li>
	<li>如果存在 1 个或者多个被删除的元素，你可以从它们中选择任何一个，<b>添加</b>&nbsp;回栈顶，这个元素成为新的栈顶元素。</li>
</ul>

<p>同时给你一个整数&nbsp;<code>k</code>&nbsp;，它表示你总共需要执行操作的次数。</p>

<p>请你返回 <strong>恰好</strong>&nbsp;执行 <code>k</code>&nbsp;次操作以后，栈顶元素的 <strong>最大值</strong>&nbsp;。如果执行完 <code>k</code>&nbsp;次操作以后，栈一定为空，请你返回 <code>-1</code>&nbsp;。</p>

<p>&nbsp;</p>

<p><strong>示例 1：</strong></p>

<pre>
<b>输入：</b>nums = [5,2,2,4,0,6], k = 4
<b>输出：</b>5
<strong>解释：</strong>
4 次操作后，栈顶元素为 5 的方法之一为：
- 第 1 次操作：删除栈顶元素 5 ，栈变为 [2,2,4,0,6] 。
- 第 2 次操作：删除栈顶元素 2 ，栈变为 [2,4,0,6] 。
- 第 3 次操作：删除栈顶元素 2 ，栈变为 [4,0,6] 。
- 第 4 次操作：将 5 添加回栈顶，栈变为 [5,4,0,6] 。
注意，这不是最后栈顶元素为 5 的唯一方式。但可以证明，4 次操作以后 5 是能得到的最大栈顶元素。
</pre>

<p><strong>示例 2：</strong></p>

<pre>
<b>输入：</b>nums = [2], k = 1
<b>输出：</b>-1
<b>解释：</b>
第 1 次操作中，我们唯一的选择是将栈顶元素弹出栈。
由于 1 次操作后无法得到一个非空的栈，所以我们返回 -1 。
</pre>

<p>&nbsp;</p>

<p><strong>提示：</strong></p>

<ul>
	<li><code>1 &lt;= nums.length &lt;= 10<sup>5</sup></code></li>
	<li><code>0 &lt;= nums[i], k &lt;= 10<sup>9</sup></code></li>
</ul>
