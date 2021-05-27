### [Preimage Size of Factorial Zeroes Function](https://leetcode.com/problems/preimage-size-of-factorial-zeroes-function)

<p>Let <code>f(x)</code> be the number of zeroes at the end of <code>x!</code>. (Recall that <code>x! = 1 * 2 * 3 * ... * x</code>, and by convention, <code>0! = 1</code>.)</p>

<p>For example, <code>f(3) = 0</code> because 3! = 6 has no zeroes at the end, while <code>f(11) = 2</code> because 11! = 39916800 has 2 zeroes at the end. Given <code>k</code>, find how many non-negative integers <code>x</code> have the property that <code>f(x) = k</code>.</p>

<pre>
<strong>Example 1:</strong>
<strong>Input:</strong> k = 0
<strong>Output:</strong> 5
<strong>Explanation:</strong> 0!, 1!, 2!, 3!, and 4! end with k = 0 zeroes.

<strong>Example 2:</strong>
<strong>Input:</strong> k = 5
<strong>Output:</strong> 0
<strong>Explanation:</strong> There is no x such that x! ends in k = 5 zeroes.
</pre>

<p><strong>Note:</strong></p>

<ul>
	<li><code>k</code> will be an integer in the range <code>[0, 10<sup>9</sup>]</code>.</li>
</ul>
