### [Vertical Order Traversal of a Binary Tree](https://leetcode.com/problems/vertical-order-traversal-of-a-binary-tree)

<p>Given the <code>root</code> of a binary tree, return <em>the vertical order traversal of its nodes values</em>.</p>

<p>For each node at position <code>(x, y)</code>, its left and right children respectively will be at positions <code>(x - 1, y - 1)</code> and <code>(x + 1, y - 1)</code>.</p>

<p>Running a vertical line from <code>x = -&infin;</code> to <code>x = +&infin;</code>, whenever the vertical line touches some nodes, we report the values of the nodes in order from top to bottom (decreasing <code>y</code> coordinates).</p>

<p>If two nodes have the same position, then the value of the node that is reported first is the value that is smaller.</p>

<p>Return a list of non-empty reports in order of <code>x</code> coordinate. Every report will have a list of values of nodes.</p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2019/01/31/1236_example_1.PNG" style="width: 201px; height: 186px;" />
<pre>
<strong>Input:</strong> root = [3,9,20,null,null,15,7]
<strong>Output:</strong> [[9],[3,15],[20],[7]]
<strong>Explanation:</strong> Without loss of generality, we can assume the root node is at position (0, 0):
Then, the node with value 9 occurs at position (-1, -1);
The nodes with values 3 and 15 occur at positions (0, 0) and (0, -2);
The node with value 20 occurs at position (1, -1);
The node with value 7 occurs at position (2, -2).</pre>

<p><strong>Example 2:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2019/01/31/tree2.png" style="width: 300px; height: 190px;" />
<pre>
<strong>Input:</strong> root = [1,2,3,4,5,6,7]
<strong>Output:</strong> [[4],[2],[1,5,6],[3],[7]]
<strong>Explanation:</strong> The node with value 5 and the node with value 6 have the same position according to the given scheme.
However, in the report &quot;[1,5,6]&quot;, the node value of 5 comes first since 5 is smaller than 6.</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li>The number of nodes in the tree is in the range <code>[1, 1000]</code>.</li>
	<li><code>0 &lt;= Node.val &lt;= 1000</code></li>
</ul>
