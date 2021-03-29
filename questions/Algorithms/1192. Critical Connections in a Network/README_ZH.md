### [查找集群内的「关键连接」](https://leetcode-cn.com/problems/critical-connections-in-a-network)

<p>力扣数据中心有&nbsp;<code>n</code>&nbsp;台服务器，分别按从&nbsp;<code>0</code>&nbsp;到&nbsp;<code>n-1</code>&nbsp;的方式进行了编号。</p>

<p>它们之间以「服务器到服务器」点对点的形式相互连接组成了一个内部集群，其中连接&nbsp;<code>connections</code> 是无向的。</p>

<p>从形式上讲，<code>connections[i] = [a, b]</code>&nbsp;表示服务器 <code>a</code>&nbsp;和 <code>b</code>&nbsp;之间形成连接。任何服务器都可以直接或者间接地通过网络到达任何其他服务器。</p>

<p>「关键连接」是在该集群中的重要连接，也就是说，假如我们将它移除，便会导致某些服务器无法访问其他服务器。</p>

<p>请你以任意顺序返回该集群内的所有 「关键连接」。</p>

<p>&nbsp;</p>

<p><strong>示例 1：</strong></p>

<p><strong><img alt="" src="https://assets.leetcode-cn.com/aliyun-lc-upload/original_images/critical-connections-in-a-network.png" style="width: 150px;"></strong></p>

<pre><strong>输入：</strong>n = 4, connections = [[0,1],[1,2],[2,0],[1,3]]
<strong>输出：</strong>[[1,3]]
<strong>解释：</strong>[[3,1]] 也是正确的。</pre>

<p>&nbsp;</p>

<p><strong>提示：</strong></p>

<ul>
	<li><code>1 &lt;= n &lt;= 10^5</code></li>
	<li><code>n-1 &lt;= connections.length &lt;= 10^5</code></li>
	<li><code>connections[i][0] != connections[i][1]</code></li>
	<li>不存在重复的连接</li>
</ul>
