### [Mini Parser](https://leetcode.com/problems/mini-parser)

<p>Given a nested list of integers represented as a string, implement a parser to deserialize it.</p>

<p>Each element is either an integer, or a list -- whose elements may also be integers or other lists.</p>

<p><b>Note:</b> You may assume that the string is well-formed:</p>

<ul>
	<li>String is non-empty.</li>
	<li>String does not contain white spaces.</li>
	<li>String contains only digits <code>0-9</code>, <code>[</code>, <code>-</code> <code>,</code>, <code>]</code>.</li>
</ul>

<p>&nbsp;</p>

<p><b>Example 1:</b></p>

<pre>
Given s = &quot;324&quot;,

You should return a NestedInteger object which contains a single integer 324.
</pre>

<p>&nbsp;</p>

<p><b>Example 2:</b></p>

<pre>
Given s = &quot;[123,[456,[789]]]&quot;,

Return a NestedInteger object containing a nested list with 2 elements:

1. An integer containing value 123.
2. A nested list containing two elements:
    i.  An integer containing value 456.
    ii. A nested list with one element:
         a. An integer containing value 789.
</pre>

<p>&nbsp;</p>
