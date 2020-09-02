### [Implement Rand10() Using Rand7()](https://leetcode.com/problems/implement-rand10-using-rand7)

<p>Given the <strong>API</strong>&nbsp;<code>rand7</code> which generates a uniform random integer in the range 1 to 7, write a function <code>rand10</code>&nbsp;which generates a uniform random integer in the range 1 to 10. You can only call the API <code>rand7</code>&nbsp;and you shouldn&#39;t call any other API. Please&nbsp;<strong>don&#39;t</strong> use the system&#39;s <code>Math.random()</code>.</p>

<div>
<p><strong>Notice that </strong>Each test case has one argument&nbsp;<code>n</code>, the number of times that your implemented function&nbsp;<code>rand10</code> will be called while testing.&nbsp;</p>

<p><strong>Follow up:</strong></p>

<ol>
	<li>What is the <a href="https://en.wikipedia.org/wiki/Expected_value" target="_blank">expected value</a>&nbsp;for the number of calls to&nbsp;<code>rand7()</code>&nbsp;function?</li>
	<li>Could you minimize the number of calls to <code>rand7()</code>?</li>
</ol>
</div>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>
<pre><strong>Input:</strong> n = 1
<strong>Output:</strong> [2]
</pre><p><strong>Example 2:</strong></p>
<pre><strong>Input:</strong> n = 2
<strong>Output:</strong> [2,8]
</pre><p><strong>Example 3:</strong></p>
<pre><strong>Input:</strong> n = 3
<strong>Output:</strong> [3,8,10]
</pre>
<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= n &lt;= 10<sup>5</sup></code></li>
</ul>
