### [二叉树的垂直遍历](https://leetcode-cn.com/problems/binary-tree-vertical-order-traversal)

<p>给定一个二叉树，返回其结点&nbsp;<em>垂直方向</em>（从上到下，逐列）遍历的值。</p>

<p>如果两个结点在同一行和列，那么顺序则为&nbsp;<strong>从左到右</strong>。</p>

<p><strong>示例 1：</strong></p>

<pre><strong>输入:</strong> <code>[3,9,20,null,null,15,7]
</code>
   3
  /\
 /  \
9   20
    /\
   /  \
  15   7 

<strong>输出:
</strong>
[
  [9],
  [3,15],
  [20],
  [7]
]
</pre>

<p><strong>示例&nbsp;2:</strong></p>

<pre><strong>输入: </strong><code>[3,9,8,4,0,1,7]

</code>     3
    /\
   /  \
  9    8
  /\   /\
 /  \ /  \
4   0 1   7 

<strong>输出:</strong>

[
  [4],
  [9],
  [3,0,1],
  [8],
  [7]
]
</pre>

<p><strong>示例 3:</strong></p>

<pre><strong>输入:</strong> <code>[3,9,8,4,0,1,7,null,null,null,2,5]（<strong>注意：</strong></code>0 的右侧子节点为 2，1 的左侧子节点为 5）

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

<strong>输出:</strong>

[
  [4],
  [9,5],
  [3,0,1],
  [8,2],
  [7]
]
</pre>
