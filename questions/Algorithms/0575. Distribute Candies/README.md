### [Distribute Candies](https://leetcode.com/problems/distribute-candies)

<p>Alice has <code>n</code> candies, where the&nbsp;<code>i<sup>th</sup></code> candy is of type <code>candyType[i]</code>. Alice noticed that she started to gain weight, that is why she visited a doctor.</p>

<p>The doctor advised Alice to only eat&nbsp;<code>n / 2</code>&nbsp;of the candies she has (<code>n</code> is always even). Alice likes her candies very much. She wants to eat the maximum number of different types of candies.</p>

<p>Given the integer array <code>candyType</code>&nbsp;of length <code>n</code>,&nbsp;return <em>the maximum number of different types</em> of candies she can eat, achieving the doctor&#39;s advice.</p>

<ol>
</ol>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>

<pre>
<strong>Input:</strong> candyType = [1,1,2,2,3,3]
<strong>Output:</strong> 3
<strong>Explanation:</strong>&nbsp;Alice should eat only 3 candies, she currently has 2 candies of the first type, 2 candies of the second type, and 2 candies of the third type.
Alice will choose to eat 1 candy of each type. This leads her to eat 3 different types of candies and we return 3.
</pre>

<p><strong>Example 2:</strong></p>

<pre>
<strong>Input:</strong> candyType = [1,1,2,3]
<strong>Output:</strong> 2
<strong>Explanation:</strong> Alice can eat 2 candies, and she always has the option to eat them different [1,2], [1,3], or [2,3].
</pre>

<p><strong>Example 3:</strong></p>

<pre>
<strong>Input:</strong> candyType = [6,6,6,6]
<strong>Output:</strong> 1
<strong>Explanation:</strong> Alice has only one type of candies, she will eat only one type i.e., type 6.

</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>n == candyType.length</code></li>
	<li><code>2 &lt;= n &lt;= 10<sup>4</sup></code></li>
	<li><code>n</code>&nbsp;is even.</li>
	<li><code>-10<sup>5</sup> &lt;= candyType[i] &lt;= 10<sup>5</sup></code></li>
</ul>
