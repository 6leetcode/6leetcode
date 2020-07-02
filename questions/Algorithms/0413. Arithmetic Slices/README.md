### [Arithmetic Slices](https://leetcode.com/problems/arithmetic-slices)

<p>A sequence of numbers is called arithmetic if it consists of at least three elements and if the difference between any two consecutive elements is the same.</p>

<p>For example, these are arithmetic sequences:</p>

<pre>
1, 3, 5, 7, 9
7, 7, 7, 7
3, -1, -5, -9</pre>

<p>The following sequence is not arithmetic.</p>

<pre>
1, 1, 2, 5, 7</pre>
&nbsp;

<p>A zero-indexed array A consisting of N numbers is given. A slice of that array is any pair of integers (P, Q) such that 0 &lt;= P &lt; Q &lt; N.</p>

<p>A slice (P, Q) of the array A is called arithmetic if the sequence:<br />
A[P], A[P&nbsp;+ 1], ..., A[Q - 1], A[Q] is arithmetic. In particular, this means that P + 1 &lt; Q.</p>

<p>The function should return the number of arithmetic slices in the array A.</p>
&nbsp;

<p><b>Example:</b></p>

<pre>
A = [1, 2, 3, 4]

return: 3, for 3 arithmetic slices in A: [1, 2, 3], [2, 3, 4] and [1, 2, 3, 4] itself.
</pre>
