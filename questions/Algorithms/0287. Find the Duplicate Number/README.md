### [Find the Duplicate Number](https://leetcode.com/problems/find-the-duplicate-number)

<p>Given an array of integers <code>nums</code> containing&nbsp;<code>n + 1</code> integers where each integer is in the range <code>[1, n]</code> inclusive.</p>

<p>There is only <strong>one duplicate number</strong> in <code>nums</code>, return <em>this&nbsp;duplicate number</em>.</p>

<p><b>Follow-ups:</b></p>

<ol>
	<li>How can we prove that at least one duplicate number must exist in <code>nums</code>?&nbsp;</li>
	<li>Can you solve the problem <strong>without</strong>&nbsp;modifying&nbsp;the array <code>nums</code>?</li>
	<li>Can you solve the problem using&nbsp;only constant, <code>O(1)</code> extra space?</li>
	<li>Can you solve the problem with runtime complexity less than <code>O(n<sup>2</sup>)</code>?</li>
</ol>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>
<pre><strong>Input:</strong> nums = [1,3,4,2,2]
<strong>Output:</strong> 2
</pre><p><strong>Example 2:</strong></p>
<pre><strong>Input:</strong> nums = [3,1,3,4,2]
<strong>Output:</strong> 3
</pre><p><strong>Example 3:</strong></p>
<pre><strong>Input:</strong> nums = [1,1]
<strong>Output:</strong> 1
</pre><p><strong>Example 4:</strong></p>
<pre><strong>Input:</strong> nums = [1,1,2]
<strong>Output:</strong> 1
</pre>
<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>2 &lt;= n &lt;= 3 * 10<sup>4</sup></code></li>
	<li><code>nums.length == n + 1</code></li>
	<li><code>1 &lt;= nums[i] &lt;= n</code></li>
	<li>All the integers in <code>nums</code> appear only <strong>once</strong> except for <strong>precisely one integer</strong> which appears <strong>two or more</strong> times.</li>
</ul>
