### [Grumpy Bookstore Owner](https://leetcode.com/problems/grumpy-bookstore-owner)

<p>Today, the bookstore owner has a store open for <code>customers.length</code> minutes.&nbsp; Every minute, some number of customers (<code>customers[i]</code>) enter the store, and all those customers leave after the end of that minute.</p>

<p>On some minutes, the bookstore owner is grumpy.&nbsp; If the bookstore owner is grumpy on the i-th minute, <code>grumpy[i] = 1</code>, otherwise <code>grumpy[i] = 0</code>.&nbsp; When the bookstore owner is grumpy, the customers of that minute are not satisfied, otherwise they are satisfied.</p>

<p>The bookstore owner knows a secret technique to keep themselves&nbsp;not grumpy for <code>minutes</code>&nbsp;minutes straight, but can only use it once.</p>

<p>Return the maximum number of customers that can be satisfied throughout the day.</p>

<p>&nbsp;</p>

<p><strong>Example 1:</strong></p>

<pre>
<strong>Input: </strong>customers = [1,0,1,2,1,1,7,5], grumpy = [0,1,0,1,0,1,0,1], minutes = 3
<strong>Output: </strong>16
<strong>Explanation:</strong>&nbsp;The bookstore owner keeps themselves&nbsp;not grumpy for the last 3 minutes. 
The maximum number of customers that can be satisfied = 1 + 1 + 1 + 1 + 7 + 5 = 16.
</pre>

<p>&nbsp;</p>

<p><strong>Note:</strong></p>

<ul>
	<li><code>1 &lt;= minutes &lt;=&nbsp;customers.length ==&nbsp;grumpy.length &lt;= 20000</code></li>
	<li><code>0 &lt;=&nbsp;customers[i] &lt;= 1000</code></li>
	<li><code>0 &lt;=&nbsp;grumpy[i] &lt;= 1</code></li>
</ul>
