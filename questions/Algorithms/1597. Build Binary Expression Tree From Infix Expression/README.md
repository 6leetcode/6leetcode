### [Build Binary Expression Tree From Infix Expression](https://leetcode.com/problems/build-binary-expression-tree-from-infix-expression)

<p>A <strong><a href="https://en.wikipedia.org/wiki/Binary_expression_tree" target="_blank">binary expression tree</a></strong> is a kind of binary tree used to represent arithmetic expressions. Each node of a binary expression tree has either zero or two children. Leaf nodes (nodes with 0 children) correspond to operands (numbers), and internal nodes (nodes with 2 children) correspond to the operators <code>&#39;+&#39;</code> (addition), <code>&#39;-&#39;</code> (subtraction), <code>&#39;*&#39;</code> (multiplication), and <code>&#39;/&#39;</code> (division).</p>

<p>For each internal node with operator <code>o</code>, the <a href="https://en.wikipedia.org/wiki/Infix_notation" target="_blank"><strong>infix expression</strong></a> that it represents is <code>(A o B)</code>, where <code>A</code> is the expression the left subtree represents and <code>B</code> is the expression the right subtree represents.</p>

<p>You are given a string <code>s</code>, an <strong>infix expression</strong> containing operands, the operators described above, and parentheses <code>&#39;(&#39;</code> and <code>&#39;)&#39;</code>.</p>

<p>Return <em>the <strong>binary expression tree</strong>,&nbsp;which its <strong><a href="https://en.wikipedia.org/wiki/Tree_traversal#In-order_(LNR)" target="_blank">in-order traversal</a></strong>&nbsp;reproduce&nbsp;</em><code>s</code><em>.</em></p>

<p><strong>Please note that order of operations applies in </strong><code>s</code><strong>.</strong> That is, expressions in parentheses are evaluated first, and multiplication and division happen before addition and subtraction.</p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>

<p><strong><img alt="" src="https://assets.leetcode.com/uploads/2020/09/20/sample_1_1978.png" style="width: 190px; height: 285px;" /></strong></p>

<pre>
<strong>Input:</strong> s = &quot;2-3/(5*2)+1&quot;
<strong>Output:</strong> [+,-,1,2,/,null,null,null,null,3,*,null,null,5,2]
</pre>

<p><strong>Example 2:</strong></p>

<p><img alt="" src="https://assets.leetcode.com/uploads/2020/09/20/sample_2_1978.png" style="width: 224px; height: 170px;" /></p>

<pre>
<strong>Input:</strong> s = &quot;3*4-2*5&quot;
<strong>Output:</strong> [-,*,*,3,4,2,5]
</pre>

<p><strong>Example 3:</strong></p>

<pre>
<strong>Input:</strong> s = &quot;1+2+3+4+5&quot;
<strong>Output:</strong> [+,+,5,+,4,null,null,+,3,null,null,1,2]
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= s.length &lt;= 10<sup>5</sup></code></li>
	<li><code>s</code> consists of digits and the characters <code>&#39;+&#39;</code>, <code>&#39;-&#39;</code>, <code>&#39;*&#39;</code>, <code>&#39;/&#39;</code>, <code>&#39;(&#39;</code>, and <code>&#39;)&#39;</code>.</li>
	<li>Operands in <code>s</code> are <strong>exactly</strong> 1 digit.</li>
	<li>It is guaranteed that <code>s</code> is a valid expression.</li>
</ul>
