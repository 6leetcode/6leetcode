### [Check If Two Expression Trees are Equivalent](https://leetcode.com/problems/check-if-two-expression-trees-are-equivalent)

<p>A <strong><a href="https://en.wikipedia.org/wiki/Binary_expression_tree" target="_blank">binary expression tree</a></strong> is a kind of binary tree used to represent arithmetic expressions. Each node of a binary expression tree has either zero or two children. Leaf nodes (nodes with 0 children) correspond to operands (variables), and internal nodes (nodes with two children) correspond to the operators. In this problem, we only consider the <code>&#39;+&#39;</code> operator (i.e. addition).</p>

<p>You are given the roots of two binary expression trees, <code>root1</code> and <code>root2</code>. Return <code>true</code><em> if the two binary expression trees are equivalent</em>. Otherwise, return <code>false</code>.</p>

<p>Two binary expression trees are equivalent if they <strong>evaluate to the same value</strong> regardless of what the variables are set to.</p>

<p><strong>Follow up:</strong> What will you change in your solution if the tree also supports the <code>&#39;-&#39;</code> operator (i.e. subtraction)?</p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>

<pre>
<strong>Input:</strong> root1 = [x], root2 = [x]
<strong>Output:</strong> true
</pre>

<p><strong>Example 2:</strong></p>

<p><strong><img alt="" src="https://assets.leetcode.com/uploads/2020/10/04/tree1.png" style="width: 211px; height: 131px;" /></strong></p>

<pre>
<strong>Input:</strong> root1 = [+,a,+,null,null,b,c], root2 = [+,+,b,c,a]
<strong>Output:</strong> true
<strong>Explaination:</strong> <code>a + (b + c) == (b + c) + a</code></pre>

<p><strong>Example 3:</strong></p>

<p><strong><img alt="" src="https://assets.leetcode.com/uploads/2020/10/04/tree2.png" style="width: 211px; height: 131px;" /></strong></p>

<pre>
<strong>Input:</strong> root1 = [+,a,+,null,null,b,c], root2 = [+,+,b,d,a]
<strong>Output:</strong> false
<strong>Explaination:</strong> <code>a + (b + c) != (b + d) + a</code>
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li>The number of nodes in both trees are equal, odd and, in the range <code>[1, 4999]</code>.</li>
	<li><code>Node.val</code> is <code>&#39;+&#39;</code> or a lower-case English letter.</li>
	<li>It&#39;s <strong>guaranteed</strong> that the tree given is a valid binary expression tree.</li>
</ul>
