### [Random Pick with Weight](https://leetcode.com/problems/random-pick-with-weight)

<p>Given an array <code>w</code> of positive integers, where <code>w[i]</code> describes the weight of index <code>i</code>(0-indexed), write a function <code>pickIndex</code>&nbsp;which randomly&nbsp;picks an index&nbsp;in proportion&nbsp;to its weight.</p>

<p><em>For example, given an input list of values [1, 9], when we pick up a number out of it, the chance is that 9 times out of 10 we should pick the number 9 as the answer.</em></p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>

<pre>
<strong>Input</strong>
[&quot;Solution&quot;,&quot;pickIndex&quot;]
[[[1]],[]]
<strong>Output</strong>
[null,0]

<strong>Explanation</strong>
Solution solution = new Solution([1]);
solution.pickIndex(); // return 0. Since there is only one single element on the array the only option is to return the first element.
</pre>

<p><strong>Example 2:</strong></p>

<pre>
<strong>Input</strong>
[&quot;Solution&quot;,&quot;pickIndex&quot;,&quot;pickIndex&quot;,&quot;pickIndex&quot;,&quot;pickIndex&quot;,&quot;pickIndex&quot;]
[[[1,3]],[],[],[],[],[]]
<strong>Output</strong>
[null,1,1,1,1,0]

<strong>Explanation</strong>
Solution solution = new Solution([1, 3]);
solution.pickIndex(); // return 1. It&#39;s returning the second element (index = 1) that has probability of 3/4.
solution.pickIndex(); // return 1
solution.pickIndex(); // return 1
solution.pickIndex(); // return 1
solution.pickIndex(); // return 0. It&#39;s returning the first element (index = 0) that has probability of 1/4.
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= w.length &lt;= 10000</code></li>
	<li><code>1 &lt;= w[i] &lt;= 10^5</code></li>
	<li><code>pickIndex</code>&nbsp;will be called at most <code>10000</code> times.</li>
</ul>
