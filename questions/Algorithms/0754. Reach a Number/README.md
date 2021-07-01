### [Reach a Number](https://leetcode.com/problems/reach-a-number)

<p>You are standing at position <code>0</code> on an infinite number line. There is a goal at position <code>target</code>.</p>

<p>On each move, you can either go left or right. During the <code>n<sup>th</sup></code> move (starting from <code>n == 1</code>), you take <code>n</code> steps.</p>

<p>Return <em>the minimum number of steps required to reach the destination</em>.</p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>

<pre>
<strong>Input:</strong> target = 2
<strong>Output:</strong> 3
<strong>Explanation:</strong>
On the first move, we step from 0 to 1.
On the second move, we step  from 1 to -1.
On the third move, we step from -1 to 2.
</pre>

<p><strong>Example 2:</strong></p>

<pre>
<strong>Input:</strong> target = 3
<strong>Output:</strong> 2
<strong>Explanation:</strong>
On the first move, we step from 0 to 1.
On the second step, we step from 1 to 3.
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>-10<sup>9</sup> &lt;= target &lt;= 10<sup>9</sup></code></li>
	<li><code>target != 0</code></li>
</ul>
