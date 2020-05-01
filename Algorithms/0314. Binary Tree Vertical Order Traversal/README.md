### [Binary Tree Vertical Order Traversal](https://leetcode.com/problems/binary-tree-vertical-order-traversal)

<p>Given a binary tree, return the <i>vertical order</i> traversal of its nodes&#39; values. (ie, from top to bottom, column by column).</p>

<p>If two nodes are in the same row and column, the order should be from <b>left to right</b>.</p>

<p><b>Examples 1:</b></p>

<pre>
<strong>Input:</strong> <code>[3,9,20,null,null,15,7]
</code>
   3
  /\
 /  \
 9  20
    /\
   /  \
  15   7 

<strong>Output:</strong>

[
  [9],
  [3,15],
  [20],
  [7]
]
</pre>

<p><b>Examples 2:</b></p>

<pre>
<strong>Input: </strong><code>[3,9,8,4,0,1,7]

</code>     3
    /\
   /  \
   9   8
  /\  /\
 /  \/  \
 4  01   7 

<strong>Output:</strong>

[
  [4],
  [9],
  [3,0,1],
  [8],
  [7]
]
</pre>

<p><b>Examples 3:</b></p>

<pre>
<strong>Input:</strong> <code>[3,9,8,4,0,1,7,null,null,null,2,5]</code> (0&#39;s right child is 2 and 1&#39;s left child is 5)

     3
    /\
   /  \
   9   8
  /\  /\
 /  \/  \
 4  01   7
    /\
   /  \
   5   2

<strong>Output:</strong>

[
  [4],
  [9,5],
  [3,0,1],
  [8,2],
  [7]
]
</pre>