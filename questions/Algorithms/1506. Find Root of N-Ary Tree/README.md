### [Find Root of N-Ary Tree](https://leetcode.com/problems/find-root-of-n-ary-tree)

<p>Given all the nodes of an <a href="https://leetcode.com/articles/introduction-to-n-ary-trees/">N-ary tree</a> as an array &nbsp;<code>Node[] tree</code>&nbsp;where each&nbsp;node has a&nbsp;<strong>unique value</strong>.</p>

<p>Find and return the <strong>root</strong> of the N-ary tree.</p>

<p>&nbsp;</p>

<p><strong>Follow up:</strong></p>

<p>Could you solve this problem in constant space complexity with a linear time algorithm?</p>

<p>&nbsp;</p>

<p><em>Nary-Tree input serialization&nbsp;is represented in their level order traversal, each group of children is separated by the null value (See examples).</em></p>

<p><img alt="" src="https://assets.leetcode.com/uploads/2019/11/08/sample_4_964.png" style="width: 296px; height: 241px;" /></p>

<p>For example, the above tree is serialized as [1,null,2,3,4,5,null,null,6,7,null,8,null,9,10,null,null,11,null,12,null,13,null,null,14].</p>

<p><br />
<strong>Custom testing:</strong><br />
You should provide the serialization of the input <code>tree</code>.<br />
The Driver code then extracts the nodes from the tree and shuffles them. You shouldn&#39;t&nbsp;care how the extracted nodes are shuffled.<br />
The driver code will provide you with an array of the extracted nodes in random order and you need to find the root of the tree out of these nodes.</p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>

<p><img src="https://assets.leetcode.com/uploads/2018/10/12/narytreeexample.png" style="width: 100%; max-width: 300px;" /></p>

<pre>
<strong>Input:</strong> tree = [1,null,3,2,4,null,5,6]
<strong>Output:</strong> [1,null,3,2,4,null,5,6]
<strong>Explanation:</strong> The input tree is shown above. The driver code first extracts the nodes so we now have an array of all tree nodes [Node(1),Node(3),Node(2),Node(4),Node(5),Node(6)], then the array is randomly shuffled, thus the actual input is [Node(5),Node(4),Node(3),Node(6),Node(2),Node(1)].
The root of the tree is Node(1) and the output is the serialization of the node you return.
</pre>

<p><strong>Example 2:</strong></p>

<p><img alt="" src="https://assets.leetcode.com/uploads/2019/11/08/sample_4_964.png" style="width: 296px; height: 241px;" /></p>

<pre>
<strong>Input:</strong> tree = [1,null,2,3,4,5,null,null,6,7,null,8,null,9,10,null,null,11,null,12,null,13,null,null,14]
<strong>Output:</strong> [1,null,2,3,4,5,null,null,6,7,null,8,null,9,10,null,null,11,null,12,null,13,null,null,14]
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li>The total number of nodes is between <code>[1, 5 * 10^4]</code>.</li>
	<li>Each&nbsp;node has a unique value.</li>
</ul>
