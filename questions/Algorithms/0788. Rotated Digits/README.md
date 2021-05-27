### [Rotated Digits](https://leetcode.com/problems/rotated-digits)

<p><code>x</code> is a good number if after rotating each digit individually by 180 degrees, we get a valid number that is different from <code>x</code>. Each digit must be rotated - we cannot choose to leave it alone.</p>

<p>A number is valid if each digit remains a digit after rotation. 0, 1, and 8 rotate to themselves; 2 and 5 rotate to each other (on this case they are rotated in a different direction, in other words 2 or 5 gets mirrored); 6 and 9 rotate to each other, and the rest of the numbers do not rotate to any other number and become invalid.</p>

<p>Now given a positive number <code>n</code>, how many numbers <code>x</code> from <code>1</code> to <code>n</code> are good?</p>

<pre>
<strong>Example:</strong>
<strong>Input:</strong> 10
<strong>Output:</strong> 4
<strong>Explanation:</strong> 
There are four good numbers in the range [1, 10] : 2, 5, 6, 9.
Note that 1 and 10 are not good numbers, since they remain unchanged after rotating.
</pre>

<p><strong>Note:</strong></p>

<ul>
	<li><code>n</code> will be in range <code>[1, 10000]</code>.</li>
</ul>
