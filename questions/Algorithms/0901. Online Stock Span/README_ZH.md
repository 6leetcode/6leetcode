### [股票价格跨度](https://leetcode-cn.com/problems/online-stock-span)

<p>编写一个 <code>StockSpanner</code> 类，它收集某些股票的每日报价，并返回该股票当日价格的跨度。</p>

<p>今天股票价格的跨度被定义为股票价格小于或等于今天价格的最大连续日数（从今天开始往回数，包括今天）。</p>

<p>例如，如果未来7天股票的价格是 <code>[100, 80, 60, 70, 60, 75, 85]</code>，那么股票跨度将是 <code>[1, 1, 1, 2, 1, 4, 6]</code>。</p>

<p>&nbsp;</p>

<p><strong>示例：</strong></p>

<pre><strong>输入：</strong>[&quot;StockSpanner&quot;,&quot;next&quot;,&quot;next&quot;,&quot;next&quot;,&quot;next&quot;,&quot;next&quot;,&quot;next&quot;,&quot;next&quot;], [[],[100],[80],[60],[70],[60],[75],[85]]
<strong>输出：</strong>[null,1,1,1,2,1,4,6]
<strong>解释：</strong>
首先，初始化 S = StockSpanner()，然后：
S.next(100) 被调用并返回 1，
S.next(80) 被调用并返回 1，
S.next(60) 被调用并返回 1，
S.next(70) 被调用并返回 2，
S.next(60) 被调用并返回 1，
S.next(75) 被调用并返回 4，
S.next(85) 被调用并返回 6。

注意 (例如) S.next(75) 返回 4，因为截至今天的最后 4 个价格
(包括今天的价格 75) 小于或等于今天的价格。
</pre>

<p>&nbsp;</p>

<p><strong>提示：</strong></p>

<ol>
	<li>调用&nbsp;<code>StockSpanner.next(int price)</code>&nbsp;时，将有&nbsp;<code>1 &lt;= price &lt;= 10^5</code>。</li>
	<li>每个测试用例最多可以调用&nbsp; <code>10000</code> 次 <code>StockSpanner.next</code>。</li>
	<li>在所有测试用例中，最多调用&nbsp;<code>150000</code>&nbsp;次&nbsp;<code>StockSpanner.next</code>。</li>
	<li>此问题的总时间限制减少了 50%。</li>
</ol>
