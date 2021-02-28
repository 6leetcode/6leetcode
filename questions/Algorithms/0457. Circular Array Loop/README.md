### [Circular Array Loop](https://leetcode.com/problems/circular-array-loop)

<p>You are given a <strong>circular</strong> array <code>nums</code> of positive and negative integers where you should:</p>

<ul>
	<li>Move <code>nums[i]</code> steps forward if <code>nums[i]</code> is positive, and</li>
	<li>Move <code>nums[i]</code> steps backward if <code>nums[i]</code> is negative.</li>
</ul>

<p>Since the array is <strong>circular</strong>, you may assume that the last element&#39;s next element is the first element, and the first element&#39;s previous element is the last element.</p>

<p>Return <code>true</code> if there is a loop (or a <strong>cycle</strong>) in <code>nums</code>, and <code>false</code> otherwise.</p>

<p>A <strong>cycle</strong> must start and end at the same index, and the cycle&#39;s length is greater than <code>1</code>. Furthermore, movements in a cycle must all follow a single direction. In other words, a cycle must not consist of both forward and backward movements.</p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>

<pre>
<strong>Input:</strong> nums = [2,-1,1,2,2]
<strong>Output:</strong> true
<strong>Explanation:</strong> There is a cycle, from index 0 -&gt; 2 -&gt; 3 -&gt; 0. The cycle&#39;s length is 3.
</pre>

<p><strong>Example 2:</strong></p>

<pre>
<strong>Input:</strong> nums = [-1,2]
<strong>Output:</strong> false
<strong>Explanation:</strong> The movement from index 1 -&gt; 1 -&gt; 1 ... is not a cycle, because the cycle&#39;s length is 1. By definition the cycle&#39;s length must be greater than 1.
</pre>

<p><strong>Example 3:</strong></p>

<pre>
<strong>Input:</strong> nums = [-2,1,-1,-2,-2]
<strong>Output:</strong> false
<strong>Explanation:</strong> The movement from index 1 -&gt; 2 -&gt; 1 -&gt; ... is not a cycle, because movement from index 1 -&gt; 2 is a forward movement, but movement from index 2 -&gt; 1 is a backward movement. All movements in a cycle must follow a single direction.</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= nums.length &lt;= 5000</code></li>
	<li><code>-1000 &lt;= nums[i] &lt;= 1000</code></li>
	<li><code>nums[i] != 0</code></li>
</ul>

<p>&nbsp;</p>
<p><strong>Follow up:</strong> Could you solve it in <code>O(n)</code> time complexity and <code>O(1)</code> extra space complexity?</p>
