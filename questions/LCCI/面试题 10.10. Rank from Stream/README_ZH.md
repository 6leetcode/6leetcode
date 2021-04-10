### [数字流的秩](https://leetcode-cn.com/problems/rank-from-stream-lcci)

<p>假设你正在读取一串整数。每隔一段时间，你希望能找出数字 x 的秩(小于或等于 x 的值的个数)。请实现数据结构和算法来支持这些操作，也就是说：</p>

<p>实现 <code>track(int x)</code>&nbsp;方法，每读入一个数字都会调用该方法；</p>

<p>实现 <code>getRankOfNumber(int x)</code> 方法，返回小于或等于 x 的值的个数。</p>

<p><strong>注意：</strong>本题相对原题稍作改动</p>

<p><strong>示例:</strong></p>

<pre><strong>输入:</strong>
[&quot;StreamRank&quot;, &quot;getRankOfNumber&quot;, &quot;track&quot;, &quot;getRankOfNumber&quot;]
[[], [1], [0], [0]]
<strong>输出:
</strong>[null,0,null,1]
</pre>

<p><strong>提示：</strong></p>

<ul>
	<li><code>x &lt;= 50000</code></li>
	<li><code>track</code>&nbsp;和&nbsp;<code>getRankOfNumber</code> 方法的调用次数均不超过 2000 次</li>
</ul>
