### [最大 BST 子树](https://leetcode-cn.com/problems/largest-bst-subtree)

<p>给定一个二叉树，找到其中最大的二叉搜索树（BST）子树，其中最大指的是子树节点数最多的。</p>

<p><strong>注意:</strong><br>
子树必须包含其所有后代。</p>

<p><strong>示例:</strong></p>

<pre><strong>输入: </strong>[10,5,15,1,8,null,7]

   10 
   / \ 
<font color="red">  5</font>  15 
<font color="red"> / \</font>   \ 
<font color="red">1   8</font>   7

<strong>输出:</strong> 3
<strong>解释: </strong>高亮部分为最大的 BST 子树。
     返回值 3 在这个样例中为子树大小。
</pre>

<p><strong>进阶:</strong><br>
你能想出用 O(n) 的时间复杂度解决这个问题吗？</p>
