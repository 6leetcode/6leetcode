### [Distribute Candies](https://leetcode.com/problems/distribute-candies)

<p>You have <code>n</code>&nbsp;<code>candies</code>, the <code>i<sup>th</sup></code> candy is of type <code>candies[i]</code>.</p>

<p>You want to distribute the candies equally between a sister and a brother so that each of them gets <code>n / 2</code>&nbsp;candies (<code>n</code> is even). The sister loves to collect different types of candies, so you want to give her the <strong>maximum number of different types</strong> of candies.</p>

<p>Return <em>the maximum number of different types</em> of candies you can give to the sister.</p>

<ol>
</ol>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>

<pre>
<strong>Input:</strong> candies = [1,1,2,2,3,3]
<strong>Output:</strong> 3
<strong>Explanation:</strong>
There are three different kinds of candies (1, 2 and 3), and two candies for each kind.
Optimal distribution: The sister has candies [1,2,3] and the brother has candies [1,2,3], too. 
The sister has three different kinds of candies. 
</pre>

<p><strong>Example 2:</strong></p>

<pre>
<strong>Input:</strong> candies = [1,1,2,3]
<strong>Output:</strong> 2
<strong>Explanation:</strong> For example, the sister has candies [2,3] and the brother has candies [1,1]. 
The sister has two different kinds of candies, the brother has only one kind of candies.
</pre>

<p><strong>Example 3:</strong></p>

<pre>
<strong>Input:</strong> candies = [1,1]
<strong>Output:</strong> 1
</pre>

<p><strong>Example 4:</strong></p>

<pre>
<strong>Input:</strong> candies = [1,11]
<strong>Output:</strong> 1
</pre>

<p><strong>Example 5:</strong></p>

<pre>
<strong>Input:</strong> candies = [2,2]
<strong>Output:</strong> 1
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>n == candies.length</code></li>
	<li><code>2 &lt;= n &lt;= 10^4</code></li>
	<li><code>n</code>&nbsp;is even.</li>
	<li><code>-10^5 &lt;= candies[i] &lt;= 10^5</code></li>
</ul>
