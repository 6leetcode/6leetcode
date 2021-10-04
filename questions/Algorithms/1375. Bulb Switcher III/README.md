### [Bulb Switcher III](https://leetcode.com/problems/bulb-switcher-iii)

<p>There is a room with <code>n</code> bulbs, numbered from <code>1</code> to <code>n</code>, arranged in a row from left to right. Initially, all the bulbs are turned off.</p>

<p>At moment <code>k</code> (for <code>k</code> from <code>0</code> to <code>n - 1</code>), we turn on the <code>light[k]</code> bulb. A bulb <strong>changes color to blue</strong> only if it is on and all the previous bulbs (to the left) are turned on too.</p>

<p>Return the number of moments in which <strong>all turned-on</strong> bulbs <strong>are blue.</strong></p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2020/02/29/sample_2_1725.png" style="width: 575px; height: 300px;" />
<pre>
<strong>Input:</strong> light = [2,1,3,5,4]
<strong>Output:</strong> 3
<strong>Explanation:</strong> All bulbs turned on, are blue at the moment 1, 2 and 4.
</pre>

<p><strong>Example 2:</strong></p>

<pre>
<strong>Input:</strong> light = [3,2,4,1,5]
<strong>Output:</strong> 2
<strong>Explanation:</strong> All bulbs turned on, are blue at the moment 3, and 4 (index-0).
</pre>

<p><strong>Example 3:</strong></p>

<pre>
<strong>Input:</strong> light = [4,1,2,3]
<strong>Output:</strong> 1
<strong>Explanation:</strong> All bulbs turned on, are blue at the moment 3 (index-0).
Bulb 4th changes to blue at the moment 3.
</pre>

<p><strong>Example 4:</strong></p>

<pre>
<strong>Input:</strong> light = [2,1,4,3,6,5]
<strong>Output:</strong> 3
</pre>

<p><strong>Example 5:</strong></p>

<pre>
<strong>Input:</strong> light = [1,2,3,4,5,6]
<strong>Output:</strong> 6
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>n == light.length</code></li>
	<li><code>1 &lt;= n &lt;= 5 * 10<sup>4</sup></code></li>
	<li><code>light</code> is a permutation of the numbers in the range <code>[1, n]</code></li>
</ul>
