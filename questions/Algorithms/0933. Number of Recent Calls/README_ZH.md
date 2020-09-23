### [最近的请求次数](https://leetcode-cn.com/problems/number-of-recent-calls)

<p>写一个&nbsp;<code>RecentCounter</code>&nbsp;类来计算特定时间范围内最近的请求。</p>

<p>请你实现 <code>RecentCounter</code> 类：</p>

<ul>
	<li><code>RecentCounter()</code> 初始化计数器，请求数为 0 。</li>
	<li><code>int ping(int t)</code> 在时间 <code>t</code> 添加一个新请求，其中 <code>t</code> 表示以毫秒为单位的某个时间，并返回过去 3000 毫秒内发生的所有请求数（包括新请求）。确切地说，返回在 <code>[t-3000, t]</code> 内发生的请求数。</li>
</ul>

<p>保证每次对 <code>ping</code> 的调用都使用比之前更大的 <code>t</code> 值。</p>

<p>&nbsp;</p>

<p><strong>示例 1：</strong></p>

<pre><strong>输入：</strong>
[&quot;RecentCounter&quot;, &quot;ping&quot;, &quot;ping&quot;, &quot;ping&quot;, &quot;ping&quot;]
[[], [1], [100], [3001], [3002]]
<strong>输出：</strong>
[null, 1, 2, 3, 3]

<strong>解释：</strong>
RecentCounter recentCounter = new RecentCounter();
recentCounter.ping(1);     // requests = [&lt;u&gt;1&lt;/u&gt;]，范围是 [-2999,1]，返回 1
recentCounter.ping(100);   // requests = [&lt;u&gt;1&lt;/u&gt;, &lt;u&gt;100&lt;/u&gt;]，范围是 [-2900,100]，返回 2
recentCounter.ping(3001);  // requests = [&lt;u&gt;1&lt;/u&gt;, &lt;u&gt;100&lt;/u&gt;, &lt;u&gt;3001&lt;/u&gt;]，范围是 [1,3001]，返回 3
recentCounter.ping(3002);  // requests = [1, &lt;u&gt;100&lt;/u&gt;, &lt;u&gt;3001&lt;/u&gt;, &lt;u&gt;3002&lt;/u&gt;]，范围是 [2,3002]，返回 3
</pre>

<p>&nbsp;</p>

<p><strong>提示：</strong></p>

<ul>
	<li><code>1 &lt;= t &lt;= 10<sup>4</sup></code></li>
	<li>保证每次对 <code>ping</code> 的调用都使用比之前更大的 <code>t</code> 值</li>
	<li>至多调用 <code>ping</code> 方法 <code>10<sup>4</sup></code> 次</li>
</ul>
