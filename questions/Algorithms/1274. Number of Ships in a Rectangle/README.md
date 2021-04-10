### [Number of Ships in a Rectangle](https://leetcode.com/problems/number-of-ships-in-a-rectangle)

<p><em>(This problem is an&nbsp;<strong>interactive problem</strong>.)</em></p>

<p>On the sea represented by a cartesian plane, each ship is located at an integer point, and each integer point may contain at most 1 ship.</p>

<p>You have a function <code>Sea.hasShips(topRight, bottomLeft)</code> which takes two points&nbsp;as arguments and returns <code>true</code>&nbsp;if and only if there is at least one ship in the rectangle represented by the two points, including on the boundary.</p>

<p>Given two points, which are the top right and bottom left corners of a rectangle, return the number of ships present in that rectangle.&nbsp;&nbsp;It is guaranteed that there are <strong>at most 10 ships</strong> in that rectangle.</p>

<p>Submissions making <strong>more than 400 calls</strong> to&nbsp;<code>hasShips</code>&nbsp;will be judged <em>Wrong Answer</em>.&nbsp; Also, any solutions that attempt to circumvent the judge&nbsp;will result in disqualification.</p>

<p>&nbsp;</p>
<p><strong>Example :</strong></p>

<p><img alt="" src="https://assets.leetcode.com/uploads/2019/07/26/1445_example_1.PNG" style="width: 400px; height: 404px;" /></p>

<pre>
<strong>Input:</strong> 
ships = [[1,1],[2,2],[3,3],[5,5]], topRight = [4,4], bottomLeft = [0,0]
<strong>Output:</strong> 3
<strong>Explanation:</strong> From [0,0] to [4,4] we can count 3 ships within the range.
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li>On the input <code>ships</code> is only given to initialize the map internally.&nbsp;You must solve this problem &quot;blindfolded&quot;. In other words, you must find the answer using the given <code>hasShips</code> API, without knowing the <code>ships</code>&nbsp;position.</li>
	<li><code>0 &lt;=&nbsp;bottomLeft[0]&nbsp;&lt;= topRight[0]&nbsp;&lt;= 1000</code></li>
	<li><code>0 &lt;=&nbsp;bottomLeft[1]&nbsp;&lt;= topRight[1]&nbsp;&lt;= 1000</code></li>
</ul>
