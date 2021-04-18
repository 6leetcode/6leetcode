### [查找用户活跃分钟数](https://leetcode-cn.com/problems/finding-the-users-active-minutes)

<p>给你用户在 LeetCode 的操作日志，和一个整数 <code>k</code> 。日志用一个二维整数数组 <code>logs</code> 表示，其中每个 <code>logs[i] = [ID<sub>i</sub>, time<sub>i</sub>]</code> 表示 ID 为 <code>ID<sub>i</sub></code> 的用户在 <code>time<sub>i</sub></code> 分钟时执行了某个操作。</p>

<p><strong>多个用户 </strong>可以同时执行操作，单个用户可以在同一分钟内执行 <strong>多个操作</strong> 。</p>

<p>指定用户的<strong> 用户活跃分钟数（user active minutes，UAM）</strong> 定义为用户对 LeetCode 执行操作的 <strong>唯一分钟数</strong> 。 即使一分钟内执行多个操作，也只能按一分钟计数。</p>

<p>请你统计用户活跃分钟数的分布情况，统计结果是一个长度为 <code>k</code> 且 <strong>下标从 1 开始计数</strong> 的数组 <code>answer</code> ，对于每个 <code>j</code>（<code>1 <= j <= k</code>），<code>answer[j]</code> 表示 <strong>用户活跃分钟数</strong> 等于 <code>j</code> 的用户数。</p>

<p>返回上面描述的答案数组<i> </i><code>answer</code><i> </i>。</p>

<p> </p>

<p><strong>示例 1：</strong></p>

<pre>
<strong>输入：</strong>logs = [[0,5],[1,2],[0,2],[0,5],[1,3]], k = 5
<strong>输出：</strong>[0,2,0,0,0]
<strong>解释：</strong>
ID=0 的用户执行操作的分钟分别是：5 、2 和 5 。因此，该用户的用户活跃分钟数为 2（分钟 5 只计数一次）
ID=1 的用户执行操作的分钟分别是：2 和 3 。因此，该用户的用户活跃分钟数为 2
2 个用户的用户活跃分钟数都是 2 ，answer[2] 为 2 ，其余 answer[j] 的值都是 0
</pre>

<p><strong>示例 2：</strong></p>

<pre>
<strong>输入：</strong>logs = [[1,1],[2,2],[2,3]], k = 4
<strong>输出：</strong>[1,1,0,0]
<strong>解释：</strong>
ID=1 的用户仅在分钟 1 执行单个操作。因此，该用户的用户活跃分钟数为 1
ID=2 的用户执行操作的分钟分别是：2 和 3 。因此，该用户的用户活跃分钟数为 2
1 个用户的用户活跃分钟数是 1 ，1 个用户的用户活跃分钟数是 2 
因此，answer[1] = 1 ，answer[2] = 1 ，其余的值都是 0
</pre>

<p> </p>

<p><strong>提示：</strong></p>

<ul>
	<li><code>1 <= logs.length <= 10<sup>4</sup></code></li>
	<li><code>0 <= ID<sub>i</sub> <= 10<sup>9</sup></code></li>
	<li><code>1 <= time<sub>i</sub> <= 10<sup>5</sup></code></li>
	<li><code>k</code> 的取值范围是 <code>[用户的最大用户活跃分钟数, 10<sup>5</sup>]</code></li>
</ul>
