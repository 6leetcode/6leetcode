### [Bomb Enemy](https://leetcode.com/problems/bomb-enemy)

<p>Given a 2D grid, each cell is either a wall <code>&#39;W&#39;</code>, an enemy <code>&#39;E&#39;</code> or empty <code>&#39;0&#39;</code> (the number zero), return the maximum enemies you can kill using one bomb.<br />
The bomb kills all the enemies in the same row and column from the planted point until it hits the wall since the wall is too strong to be destroyed.<br />
<strong>Note: </strong>You can only put the bomb at an empty cell.</p>

<p><strong>Example:</strong></p>

<div>
<pre>
<strong>Input: </strong><span id="example-input-1-1">[[&quot;0&quot;,&quot;E&quot;,&quot;0&quot;,&quot;0&quot;],[&quot;E&quot;,&quot;0&quot;,&quot;W&quot;,&quot;E&quot;],[&quot;0&quot;,&quot;E&quot;,&quot;0&quot;,&quot;0&quot;]]</span>
<strong>Output: </strong><span id="example-output-1">3 
<strong>Explanation: </strong></span>For the given grid,

0 E 0 0 
E 0 W E 
0 E 0 0

Placing a bomb at (1,1) kills 3 enemies.
</pre>
</div>