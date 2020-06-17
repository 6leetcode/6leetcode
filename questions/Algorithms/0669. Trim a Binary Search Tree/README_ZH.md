### [修剪二叉搜索树](https://leetcode-cn.com/problems/trim-a-binary-search-tree)

<p>给定一个二叉搜索树，同时给定最小边界<code>L</code>&nbsp;和最大边界&nbsp;<code>R</code>。通过修剪二叉搜索树，使得所有节点的值在<code>[L, R]</code>中 (R&gt;=L) 。你可能需要改变树的根节点，所以结果应当返回修剪好的二叉搜索树的新的根节点。</p>

<p><strong>示例 1:</strong></p>

<pre>
<strong>输入:</strong> 
    1
   / \
  0   2

  L = 1
  R = 2

<strong>输出:</strong> 
    1
      \
       2
</pre>

<p><strong>示例 2:</strong></p>

<pre>
<strong>输入:</strong> 
    3
   / \
  0   4
   \
    2
   /
  1

  L = 1
  R = 3

<strong>输出:</strong> 
      3
     / 
   2   
  /
 1
</pre>
