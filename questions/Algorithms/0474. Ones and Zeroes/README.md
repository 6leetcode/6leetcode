### [Ones and Zeroes](https://leetcode.com/problems/ones-and-zeroes)

<p>Given an array, <code>strs</code>, with strings consisting of only <code>0s</code> and <code>1s</code>. Also two integers <code>m</code> and <code>n</code>.</p>

<p>Now your task is to find the maximum number of strings that you can form with given <b>m</b> <code>0s</code> and <b>n</b> <code>1s</code>. Each <code>0</code> and <code>1</code> can be used at most <b>once</b>.</p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>

<pre>
<strong>Input:</strong> strs = [&quot;10&quot;,&quot;0001&quot;,&quot;111001&quot;,&quot;1&quot;,&quot;0&quot;], m = 5, n = 3
<strong>Output:</strong> 4
<strong>Explanation:</strong> This are totally 4 strings can be formed by the using of 5 0s and 3 1s, which are &quot;10&quot;,&quot;0001&quot;,&quot;1&quot;,&quot;0&quot;.
</pre>

<p><strong>Example 2:</strong></p>

<pre>
<strong>Input:</strong> strs = [&quot;10&quot;,&quot;0&quot;,&quot;1&quot;], m = 1, n = 1
<strong>Output:</strong> 2
<b>Explanation:</b> You could form &quot;10&quot;, but then you&#39;d have nothing left. Better form &quot;0&quot; and &quot;1&quot;.
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= strs.length &lt;= 600</code></li>
	<li><code>1 &lt;= strs[i].length &lt;= 100</code></li>
	<li><code>strs[i]</code> consists only of digits &#39;0&#39; and &#39;1&#39;.</li>
	<li><code>1 &lt;= m, n &lt;= 100</code></li>
</ul>
