### [Insert into a Binary Search Tree](https://leetcode.com/problems/insert-into-a-binary-search-tree)

<p>Given the root node of a binary search tree (BST) and a value to be inserted into the tree,&nbsp;insert the value into the BST. Return the root node of the BST after the insertion. It is guaranteed that the new value does not exist in the original BST.</p>

<p>Note that there may exist&nbsp;multiple valid ways for the&nbsp;insertion, as long as the tree remains a BST after insertion. You can return any of them.</p>

<p>For example,&nbsp;</p>

<pre>
Given the tree:
        4
       / \
      2   7
     / \
    1   3
And the value to insert: 5
</pre>

<p>You can return this binary search tree:</p>

<pre>
         4
       /   \
      2     7
     / \   /
    1   3 5
</pre>

<p>This tree is also valid:</p>

<pre>
         5
       /   \
      2     7
     / \   
    1   3
         \
          4
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li>The number of nodes in the given tree will be between <code>0</code> and <code>10^4</code>.</li>
	<li>Each node will have a unique integer value from <code>0</code>&nbsp;to -<code>10^8</code>, inclusive.</li>
	<li><code>-10^8 &lt;= val &lt;= 10^8</code></li>
	<li>It&#39;s guaranteed that <code>val</code> does not exist in the original BST.</li>
</ul>
