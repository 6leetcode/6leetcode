### [Largest Component Size by Common Factor](https://leetcode.com/problems/largest-component-size-by-common-factor)

<p>Given a non-empty&nbsp;array of unique positive integers <code>nums</code>, consider the following graph:</p>

<ul>
	<li>There are <code>nums.length</code> nodes, labelled <code>nums[0]</code> to <code>nums[nums.length - 1];</code></li>
	<li>There is an edge between <code>nums[i]</code> and <code>nums[j]</code>&nbsp;if and only if&nbsp;<code>nums[i]</code> and <code>nums[j]</code> share a common factor greater than 1.</li>
</ul>

<p>Return the size of the largest connected component in the graph.</p>

<p>&nbsp;</p>

<ol>
</ol>

<div>
<p><strong>Example 1:</strong></p>

<pre>
<strong>Input: </strong>nums = <span id="example-input-1-1">[4,6,15,35]</span>
<strong>Output: </strong><span id="example-output-1">4</span>
<span><img alt="" src="https://assets.leetcode.com/uploads/2018/12/01/ex1.png" style="width: 257px; height: 50px;" /></span>
</pre>

<div>
<p><strong>Example 2:</strong></p>

<pre>
<strong>Input: </strong>nums = <span id="example-input-2-1">[20,50,9,63]</span>
<strong>Output: </strong><span id="example-output-2">2</span>
<span><img alt="" src="https://assets.leetcode.com/uploads/2018/12/01/ex2.png" style="width: 293px; height: 50px;" /></span>
</pre>

<div>
<p><strong>Example 3:</strong></p>

<pre>
<strong>Input: </strong>nums = <span id="example-input-3-1">[2,3,6,7,4,12,21,39]</span>
<strong>Output: </strong><span id="example-output-3">8</span>
<span><img alt="" src="https://assets.leetcode.com/uploads/2018/12/01/ex3.png" style="width: 346px; height: 180px;" /></span>
</pre>

<p><strong>Note:</strong></p>

<ol>
	<li><code>1 &lt;= nums.length &lt;= 20000</code></li>
	<li><code>1 &lt;= nums[i] &lt;= 100000</code></li>
</ol>
</div>
</div>
</div>
