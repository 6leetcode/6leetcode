### [首个共同祖先](https://leetcode-cn.com/problems/first-common-ancestor-lcci)

<p>设计并实现一个算法，找出二叉树中某两个节点的第一个共同祖先。不得将其他的节点存储在另外的数据结构中。注意：这不一定是二叉搜索树。</p>

<p>例如，给定如下二叉树: root = [3,5,1,6,2,0,8,null,null,7,4]</p>

<pre>    3
   / \
  5   1
 / \ / \
6  2 0  8
  / \
 7   4
</pre>

<p><strong>示例 1:</strong></p>

<pre><strong>输入:</strong> root = [3,5,1,6,2,0,8,null,null,7,4], p = 5, q = 1
<strong>输出:</strong> 3
<strong>解释:</strong> 节点 5 和节点 1 的最近公共祖先是节点 3。</pre>

<p><strong>示例 2:</strong></p>

<pre><strong>输入:</strong> root = [3,5,1,6,2,0,8,null,null,7,4], p = 5, q = 4
<strong>输出:</strong> 5
<strong>解释:</strong> 节点 5 和节点 4 的最近公共祖先是节点 5。因为根据定义最近公共祖先节点可以为节点本身。</pre>

<p><strong>说明:</strong></p>

<pre>所有节点的值都是唯一的。
p、q 为不同节点且均存在于给定的二叉树中。</pre>
