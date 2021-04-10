### [Lonely Pixel I](https://leetcode.com/problems/lonely-pixel-i)

<p>Given an <code>m x n</code> <code>picture</code> consisting of black <code>&#39;B&#39;</code> and white <code>&#39;W&#39;</code> pixels, return <em>the number of <b>black</b> lonely pixels</em>.</p>

<p>A black lonely pixel is a character <code>&#39;B&#39;</code> that located at a specific position where the same row and same column don&#39;t have <strong>any other</strong> black pixels.</p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2020/11/11/pixel1.jpg" style="width: 242px; height: 242px;" />
<pre>
<strong>Input:</strong> picture = [[&quot;W&quot;,&quot;W&quot;,&quot;B&quot;],[&quot;W&quot;,&quot;B&quot;,&quot;W&quot;],[&quot;B&quot;,&quot;W&quot;,&quot;W&quot;]]
<strong>Output:</strong> 3
<strong>Explanation:</strong> All the three &#39;B&#39;s are black lonely pixels.
</pre>

<p><strong>Example 2:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2020/11/11/pixel2.jpg" style="width: 242px; height: 242px;" />
<pre>
<strong>Input:</strong> picture = [[&quot;B&quot;,&quot;B&quot;,&quot;B&quot;],[&quot;B&quot;,&quot;B&quot;,&quot;B&quot;],[&quot;B&quot;,&quot;B&quot;,&quot;B&quot;]]
<strong>Output:</strong> 0
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>m ==&nbsp;picture.length</code></li>
	<li><code>n ==&nbsp;picture[i].length</code></li>
	<li><code>1 &lt;= m, n &lt;= 500</code></li>
	<li><code>picture[i][j]</code> is <code>&#39;W&#39;</code> or <code>&#39;B&#39;</code>.</li>
</ul>
