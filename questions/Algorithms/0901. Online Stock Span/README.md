### [Online Stock Span](https://leetcode.com/problems/online-stock-span)

<p>Design an algorithm that collects daily price quotes for some stock and returns <strong>the span</strong> of that stock&#39;s price for the current day.</p>

<p>The <strong>span</strong> of the stock&#39;s price today is defined as the maximum number of consecutive days (starting from today and going backward) for which the stock price was less than or equal to today&#39;s price.</p>

<ul>
	<li>For example, if the price of a stock over the next <code>7</code> days were <code>[100,80,60,70,60,75,85]</code>, then the stock spans would be <code>[1,1,1,2,1,4,6]</code>.</li>
</ul>

<p>Implement the <code>StockSpanner</code> class:</p>

<ul>
	<li><code>StockSpanner()</code> Initializes the object of the class.</li>
	<li><code>int next(int price)</code> Returns the <strong>span</strong> of the stock&#39;s price given that today&#39;s price is <code>price</code>.</li>
</ul>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>

<pre>
<strong>Input</strong>
[&quot;StockSpanner&quot;, &quot;next&quot;, &quot;next&quot;, &quot;next&quot;, &quot;next&quot;, &quot;next&quot;, &quot;next&quot;, &quot;next&quot;]
[[], [100], [80], [60], [70], [60], [75], [85]]
<strong>Output</strong>
[null, 1, 1, 1, 2, 1, 4, 6]

<strong>Explanation</strong>
StockSpanner stockSpanner = new StockSpanner();
stockSpanner.next(100); // return 1
stockSpanner.next(80);  // return 1
stockSpanner.next(60);  // return 1
stockSpanner.next(70);  // return 2
stockSpanner.next(60);  // return 1
stockSpanner.next(75);  // return 4, because the last 4 prices (including today&#39;s price of 75) were less than or equal to today&#39;s price.
stockSpanner.next(85);  // return 6
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= price &lt;= 10<sup>5</sup></code></li>
	<li>At most <code>10<sup>4</sup></code> calls will be made to <code>next</code>.</li>
</ul>
