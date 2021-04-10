### [寻找所有的独生节点](https://leetcode-cn.com/problems/find-all-the-lonely-nodes)

<p>二叉树中，如果一个节点是其父节点的唯一子节点，则称这样的节点为 &ldquo;<strong>独生节点</strong>&rdquo; 。二叉树的根节点不会是独生节点，因为它没有父节点。</p>

<p>给定一棵二叉树的根节点&nbsp;<code>root</code> ，返回树中<strong> 所有的独生节点的值所构成的数组</strong> 。数组的顺序<strong> 不限 </strong>。</p>

<p>&nbsp;</p>

<p><strong>示例 1：</strong></p>

<p><img alt="" src="https://assets.leetcode.com/uploads/2020/06/03/e1.png" style="height:202px; width:203px" /></p>

<pre>
<strong>输入：</strong>root = [1,2,3,null,4]
<strong>输出：</strong>[4]
<strong>解释：</strong>浅蓝色的节点是唯一的独生节点。
节点 1 是根节点，不是独生的。
节点 2 和 3 有共同的父节点，所以它们都不是独生的。
</pre>

<p><strong>示例 2：</strong></p>

<p><img alt="" src="https://assets.leetcode.com/uploads/2020/06/03/e2.png" style="height:282px; width:442px" /></p>

<pre>
<strong>输入：</strong>root = [7,1,4,6,null,5,3,null,null,null,null,null,2]
<strong>输出：</strong>[6,2]
<strong>输出：</strong>浅蓝色的节点是独生节点。
请谨记，顺序是不限的。 [2,6] 也是一种可接受的答案。
</pre>

<p><strong>示例 3：</strong></p>

<p><strong><img alt="" src="https://assets.leetcode.com/uploads/2020/06/03/tree.png" style="height:202px; width:363px" /> </strong></p>

<pre>
<strong>输入：</strong>root = [11,99,88,77,null,null,66,55,null,null,44,33,null,null,22]
<strong>输出：</strong>[77,55,33,66,44,22]
<strong>解释：</strong>节点 99 和 88 有共同的父节点，节点 11 是根节点。
其他所有节点都是独生节点。</pre>

<p><strong>示例 4：</strong></p>

<pre>
<strong>输入：</strong>root = [197]
<strong>输出：</strong>[]
</pre>

<p><strong>示例 5：</strong></p>

<pre>
<strong>输入：</strong>root = [31,null,78,null,28]
<strong>输出：</strong>[78,28]
</pre>

<p>&nbsp;</p>

<p><strong>提示：</strong></p>

<ul>
	<li>&nbsp;<code>tree</code>&nbsp;中节点个数的取值范围是&nbsp;<code>[1, 1000]</code>。</li>
	<li>每个节点的值的取值范围是&nbsp;<code>[1, 10^6]</code>。</li>
</ul>
