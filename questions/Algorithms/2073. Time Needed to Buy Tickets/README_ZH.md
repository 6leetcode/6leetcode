### [买票需要的时间](https://leetcode-cn.com/problems/time-needed-to-buy-tickets)

<p>有 <code>n</code> 个人前来排队买票，其中第 <code>0</code> 人站在队伍 <strong>最前方</strong> ，第 <code>(n - 1)</code> 人站在队伍 <strong>最后方</strong> 。</p>

<p>给你一个下标从 <strong>0</strong> 开始的整数数组 <code>tickets</code> ，数组长度为 <code>n</code> ，其中第 <code>i</code> 人想要购买的票数为 <code>tickets[i]</code> 。</p>

<p>每个人买票都需要用掉 <strong>恰好 1 秒</strong> 。一个人 <strong>一次只能买一张票</strong> ，如果需要购买更多票，他必须走到&nbsp; <strong>队尾</strong> 重新排队（<strong>瞬间 </strong>发生，不计时间）。如果一个人没有剩下需要买的票，那他将会 <strong>离开</strong> 队伍。</p>

<p>返回位于位置 <code>k</code>（下标从 <strong>0</strong> 开始）的人完成买票需要的时间（以秒为单位）。</p>

<p>&nbsp;</p>

<p><strong>示例 1：</strong></p>

<pre><strong>输入：</strong>tickets = [2,3,2], k = 2
<strong>输出：</strong>6
<strong>解释：</strong> 
- 第一轮，队伍中的每个人都买到一张票，队伍变为 [1, 2, 1] 。
- 第二轮，队伍中的每个都又都买到一张票，队伍变为 [0, 1, 0] 。
位置 2 的人成功买到 2 张票，用掉 3 + 3 = 6 秒。
</pre>

<p><strong>示例 2：</strong></p>

<pre><strong>输入：</strong>tickets = [5,1,1,1], k = 0
<strong>输出：</strong>8
<strong>解释：</strong>
- 第一轮，队伍中的每个人都买到一张票，队伍变为 [4, 0, 0, 0] 。
- 接下来的 4 轮，只有位置 0 的人在买票。
位置 0 的人成功买到 5 张票，用掉 4 + 1 + 1 + 1 + 1 = 8 秒。
</pre>

<p>&nbsp;</p>

<p><strong>提示：</strong></p>

<ul>
	<li><code>n == tickets.length</code></li>
	<li><code>1 &lt;= n &lt;= 100</code></li>
	<li><code>1 &lt;= tickets[i] &lt;= 100</code></li>
	<li><code>0 &lt;= k &lt; n</code></li>
</ul>
