### [最小化去加油站的最大距离](https://leetcode-cn.com/problems/minimize-max-distance-to-gas-station)

<p>假设我们在一条水平数轴上，列表 <code>stations</code>&nbsp;来表示各个加油站的位置，加油站分别在&nbsp;<code>stations[0], stations[1], ..., stations[N-1]</code>&nbsp;的位置上，其中 <code>N = stations.length</code>。</p>

<p>现在我们希望增加 <code>K</code> 个新的加油站，使得相邻两个加油站的距离 <strong>D</strong> 尽可能的最小，请你返回&nbsp;<strong>D </strong>可能的最小值。</p>

<p><strong>示例：</strong></p>

<pre><strong>输入：</strong>stations = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10], K = 9
<strong>输出：</strong>0.500000
</pre>

<p><strong>注：</strong></p>

<ol>
	<li><code>stations.length</code>&nbsp;是在范围&nbsp;<code>[10, 2000]</code>&nbsp;内的整数</li>
	<li><code>stations[i]</code> 是在范围&nbsp;<code>[0, 10^8]</code>&nbsp;内的整数</li>
	<li><code>K</code> 是在范围&nbsp;<code>[1, 10^6]</code>&nbsp;内的整数</li>
	<li>在&nbsp;<code>10^-6</code>&nbsp;以内的正确值会被视为正确的答案</li>
</ol>
