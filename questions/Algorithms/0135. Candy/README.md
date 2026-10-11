### [Candy](https://leetcode.com/problems/candy)

<p>There are <code>n</code> children standing in a line.</p>

<p>Each child is assigned a rating value given in the integer array <code>ratings</code>.</p>

<p>You are giving candies to these children subjected to the following requirements:</p>

<ul>
	<li>Each child must have <strong>at least</strong> one candy.</li>
	<li>Children with a <strong>higher</strong> rating get more candies than their neighbors.</li>
</ul>

<p>Return the <strong>minimum</strong> number of candies you need to have to distribute the candies to the children.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre>
<strong>Input:</strong> ratings = [1,0,2]
<strong>Output:</strong> 5
<strong>Explanation:</strong> You can allocate to the first, second and third child with 2, 1, 2 candies respectively.
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre>
<strong>Input:</strong> ratings = [1,2,2]
<strong>Output:</strong> 4
<strong>Explanation:</strong> You can allocate to the first, second and third child with 1, 2, 1 candies respectively.
The third child gets 1 candy because it satisfies the above two conditions.
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= n == ratings.length &lt;= 5 * 10<sup>4</sup></code></li>
	<li><code>0 &lt;= ratings[i] &lt;= 5 * 10<sup>4</sup></code></li>
</ul>
