### [翻转等价二叉树](https://leetcode-cn.com/problems/flip-equivalent-binary-trees)

<p>我们可以为二叉树 <strong>T</strong> 定义一个&nbsp;<strong>翻转操作&nbsp;</strong>，如下所示：选择任意节点，然后交换它的左子树和右子树。</p>

<p>只要经过一定次数的翻转操作后，能使 <strong>X</strong> 等于 <strong>Y</strong>，我们就称二叉树 <strong>X</strong> <em>翻转 等价&nbsp;</em>于二叉树 <strong>Y</strong>。</p>

<p>这些树由根节点&nbsp;<code>root1</code> 和 <code>root2</code>&nbsp;给出。如果两个二叉树是否是<em>翻转 等价&nbsp;</em>的函数，则返回 <code>true</code> ，否则返回 <code>false</code> 。</p>

<p>&nbsp;</p>

<p><strong>示例 1：</strong></p>

<p><img alt="Flipped Trees Diagram" src="https://assets.leetcode.com/uploads/2018/11/29/tree_ex.png" /></p>

<pre>
<strong>输入：</strong>root1 = [1,2,3,4,5,6,null,null,null,7,8], root2 = [1,3,2,null,6,4,5,null,null,null,null,8,7]
<strong>输出：</strong>true
<strong>解释：</strong>我们翻转值为 1，3 以及 5 的三个节点。
</pre>

<p><strong>示例&nbsp;2:</strong></p>

<pre>
<strong>输入:</strong> root1 = [], root2 = []
<strong>输出:</strong> true
</pre>

<p><strong>示例 3:</strong></p>

<pre>
<strong>输入:</strong> root1 = [], root2 = [1]
<strong>输出:</strong> false
</pre>

<p>&nbsp;</p>

<p><strong>提示：</strong></p>

<ul>
	<li>每棵树节点数在&nbsp;<code>[0, 100]</code> 范围内</li>
	<li>每棵树中的每个值都是唯一的、在 <code>[0, 99]</code>&nbsp;范围内的整数</li>
</ul>
