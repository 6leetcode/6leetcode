### [找出克隆二叉树中的相同节点](https://leetcode-cn.com/problems/find-a-corresponding-node-of-a-binary-tree-in-a-clone-of-that-tree)

<p>给你两棵二叉树，原始树 <code>original</code> 和克隆树 <code>cloned</code>，以及一个位于原始树 <code>original</code>&nbsp;中的目标节点&nbsp;<code>target</code>。</p>

<p>其中，克隆树 <code>cloned</code>&nbsp;是原始树 <code>original</code>&nbsp;的一个<strong> 副本 </strong>。</p>

<p>请找出在树&nbsp;<code>cloned</code>&nbsp;中，与&nbsp;<code>target</code>&nbsp;<strong>相同&nbsp;</strong>的节点，并返回对该节点的引用（在 C/C++ 等有指针的语言中返回 节点指针，其他语言返回节点本身）。</p>

<p>&nbsp;</p>

<p><strong>注意：</strong>你 <strong>不能</strong> 对两棵二叉树，以及 <code>target</code>&nbsp;节点进行更改。<strong>只能</strong> 返回对克隆树&nbsp;<code>cloned</code>&nbsp;中已有的节点的引用。</p>

<ul>
</ul>

<p>&nbsp;</p>

<ul>
</ul>

<p><strong>示例 1:</strong></p>

<p><img alt="" src="https://assets.leetcode.com/uploads/2020/02/21/e1.png" /></p>

<pre>
<strong>输入:</strong> tree = [7,4,3,null,null,6,19], target = 3
<strong>输出:</strong> 3
<strong>解释:</strong> 上图画出了树 original 和 cloned。target 节点在树 original 中，用绿色标记。答案是树 cloned 中的黄颜色的节点（其他示例类似）。</pre>

<p><strong>示例 2:</strong></p>

<p><img alt="" src="https://assets.leetcode.com/uploads/2020/02/21/e2.png" /></p>

<pre>
<strong>输入:</strong> tree = [7], target =  7
<strong>输出:</strong> 7
</pre>

<p><strong>示例 3:</strong></p>

<p><img alt="" src="https://assets.leetcode.com/uploads/2020/02/21/e3.png" /></p>

<pre>
<strong>输入:</strong> tree = [8,null,6,null,5,null,4,null,3,null,2,null,1], target = 4
<strong>输出:</strong> 4
</pre>

<p>&nbsp;</p>

<p><strong>提示：</strong></p>

<ul>
	<li>树中节点的数量范围为<meta charset="UTF-8" />&nbsp;<code>[1, 10<sup>4</sup>]</code>&nbsp;。</li>
	<li>同一棵树中，没有值相同的节点。</li>
	<li><code>target</code>&nbsp;节点是树&nbsp;<code>original</code>&nbsp;中的一个节点，并且不会是&nbsp;<code>null</code>&nbsp;。</li>
</ul>

<p>&nbsp;</p>

<p><strong>进阶：</strong>如果树中允许出现值相同的节点，将如何解答？</p>
