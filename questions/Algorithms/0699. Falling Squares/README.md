### [Falling Squares](https://leetcode.com/problems/falling-squares)

<p>On an infinite number line X-axis, we drop given squares in the order they are given.</p>

<p>You are given an array <code>positions</code> where <code>positions[i] = [left<sub>i</sub>, sideLength<sub>i</sub>]</code> represents the i<sup>th</sup> square dropped with the left-most point being <code>left<sub>i</sub></code><sub> </sub>and the sidelength <code>sideLength<sub>i</sub></code>.</p>

<p>The square is dropped with the bottom edge parallel to the number line and from a higher height than all currently landed squares. We wait for each square to stick before dropping the next.</p>

<p>The squares are infinitely sticky on their bottom edge and remain fixed to any positive length surface they touch (either the number line or another square). Squares dropped adjacent to each other will not stick together prematurely.</p>

<p>Return <em>an integer array </em><code>ans</code><em> where </em><code>ans[i]</code><em> represents the current highest height of any square we have dropped, after dropping the </em><code>i<sup>th</sup></code><em> square</em>.</p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2021/04/28/fallingsq1-plane.jpg" style="width: 500px; height: 505px;" />
<pre>
<strong>Input:</strong> positions = [[1,2],[2,3],[6,1]]
<strong>Output:</strong> [2,5,5]
<strong>Explanation:</strong>
After the first drop, the maximum height of any square is 2.
After the second drop, the maximum height of any square is 5. The larger square stays on top of the smaller square despite where its center of gravity is because squares are infinitely sticky on their bottom edge.
After the third drop, the maximum height of any square is still 5.
Thus, we return an answer of [2, 5, 5].
</pre>

<p><strong>Example 2:</strong></p>

<pre>
<strong>Input:</strong> positions = [[100,100],[200,100]]
<strong>Output:</strong> [100,100]
<strong>Explanation:</strong> Adjacent squares don&#39;t get stuck prematurely - only their bottom edge can stick to surfaces.
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;=&nbsp;positions.length &lt;= 1000</code></li>
	<li><code>1 &lt;= left<sub>i</sub> &lt;= 10<sup>8</sup></code></li>
	<li><code>1 &lt;= sideLength<sub>i</sub> &lt;= 10<sup>6</sup></code></li>
</ul>
