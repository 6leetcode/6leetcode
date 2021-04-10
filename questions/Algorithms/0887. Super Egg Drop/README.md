### [Super Egg Drop](https://leetcode.com/problems/super-egg-drop)

<p>You are given <code>k</code> eggs, and you have access to a building with <code>n</code> floors labeled from <code>1</code> to <code>n</code>.</p>

<p>Each egg is identical in function, and if an egg breaks, you cannot drop it again.</p>

<p>You know that there exists a floor <code>f</code> with <code>0 &lt;= f &lt;= n</code> such that any egg dropped at a floor higher than <code>f</code> will break, and any egg dropped at or below floor <code>f</code> will not break.</p>

<p>Each move, you may take an egg (if you have an unbroken one) and drop it from any floor <code>x</code> (with <code>1 &lt;= x &lt;= n</code>).</p>

<p>Your goal is to know with certainty what the value of <code>f</code> is.</p>

<p>Return <em>the minimum number of moves that you need to know with certainty the value of</em> <code>f</code>.</p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>

<pre>
<strong>Input:</strong> k = 1, n = 2
<strong>Output:</strong> 2
<strong>Explanation: </strong>
Drop the egg from floor 1. If it breaks, we know with certainty that f = 0.
Otherwise, drop the egg from floor 2. If it breaks, we know with certainty that f = 1.
If it did not break, then we know with certainty f = 2.
Hence, we needed 2 moves in the worst case to know what f is with certainty.
</pre>

<p><strong>Example 2:</strong></p>

<pre>
<strong>Input:</strong> k = 2, n = 6
<strong>Output:</strong> 3
</pre>

<p><strong>Example 3:</strong></p>

<pre>
<strong>Input:</strong> k = 3, n = 14
<strong>Output:</strong> 4
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= k &lt;= 100</code></li>
	<li><code>1 &lt;= n &lt;= 10<sup>4</sup></code></li>
</ul>
