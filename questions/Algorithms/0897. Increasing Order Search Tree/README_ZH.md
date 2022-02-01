### [递增顺序搜索树](https://leetcode-cn.com/problems/increasing-order-search-tree)

<p>给你一棵二叉搜索树的<meta charset="UTF-8" />&nbsp;<code>root</code>&nbsp;，请你 <strong>按中序遍历</strong> 将其重新排列为一棵递增顺序搜索树，使树中最左边的节点成为树的根节点，并且每个节点没有左子节点，只有一个右子节点。</p>

<p>&nbsp;</p>

<p><strong>示例 1：</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2020/11/17/ex1.jpg" style="height: 350px; width: 600px;" />
<pre>
<strong>输入：</strong>root = [5,3,6,2,4,null,8,1,null,null,null,7,9]
<strong>输出：</strong>[1,null,2,null,3,null,4,null,5,null,6,null,7,null,8,null,9]
</pre>

<p><strong>示例 2：</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2020/11/17/ex2.jpg" style="height: 114px; width: 300px;" />
<pre>
<strong>输入：</strong>root = [5,1,7]
<strong>输出：</strong>[1,null,5,null,7]
</pre>

<p>&nbsp;</p>

<p><strong>提示：</strong></p>

<ul>
	<li>树中节点数的取值范围是 <code>[1, 100]</code></li>
	<li><code>0 &lt;= Node.val &lt;= 1000</code></li>
</ul>
