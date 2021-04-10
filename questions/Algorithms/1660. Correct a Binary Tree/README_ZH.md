### [纠正二叉树](https://leetcode-cn.com/problems/correct-a-binary-tree)

<p>你有一棵二叉树，这棵二叉树有个小问题，其中<strong>有且只有一个</strong>无效节点，它的右子节点错误地指向了与其在<strong>同一层</strong>且在其<strong>右侧</strong>的一个其他节点。</p>

<p>给定一棵这样的问题二叉树的根节点 <code>root</code> ，将该无效节点<strong>及其所有子节点移除</strong>（除被错误指向的节点外），然后返回新二叉树的根结点。</p>

<p><b>自定义测试用例：</b></p>

<p>测试用例的输入由三行组成：</p>

<ul>
	<li><code>TreeNode root</code></li>
	<li><code>int fromNode</code> （在<strong> </strong><code>correctBinaryTree</code> 中<strong>不可见</strong>）</li>
	<li><code>int toNode</code> （在<strong> </strong><code>correctBinaryTree</code> 中<strong>不可见</strong>）</li>
</ul>

<p>当以 <code>root</code> 为根的二叉树被解析后，值为 <code>fromNode</code> 的节点 <code>TreeNode</code> 将其右子节点指向值为 <code>toNode</code> 的节点 <code>TreeNode</code> 。然后， <code>root</code> 传入 <code>correctBinaryTree</code> 的参数中。</p>

<p> </p>

<p><b>示例 1:</b></p>

<p><strong><img alt="" src="https://assets.leetcode.com/uploads/2020/10/22/ex1v2.png" style="width: 250px; height: 177px;" /></strong></p>

<pre>
<strong>输入:</strong> root = [1,2,3], fromNode = 2, toNode = 3
<strong>输出:</strong> [1,null,3]
<strong>解释:</strong> 值为 2 的节点是无效的，所以移除之。
</pre>

<p><strong>示例 2:</strong></p>

<p><strong><img alt="" src="https://assets.leetcode.com/uploads/2020/10/22/ex2v3.png" style="width: 350px; height: 255px;" /></strong></p>

<pre>
<strong>输入:</strong> root = [8,3,1,7,null,9,4,2,null,null,null,5,6], fromNode = 7, toNode = 4
<strong>输出:</strong> [8,3,1,null,null,9,4,null,null,5,6]
<strong>解释:</strong> 值为 7 的节点是无效的，所以移除这个节点及其子节点 2。
</pre>

<p> </p>

<p><strong>提示:</strong></p>

<ul>
	<li>树中节点个数的范围是 <code>[3, 10<sup>4</sup>]</code> 。</li>
	<li><code>-10<sup>9</sup> <= Node.val <= 10<sup>9</sup></code></li>
	<li>所有的 <code>Node.val</code> 都是<strong>互不相同</strong>的。</li>
	<li><code>fromNode != toNode</code></li>
	<li><code>fromNode</code> 和 <code>toNode</code> 将出现在树中的同一层。</li>
	<li><code>toNode</code> 在 <code>fromNode</code> 的右侧。</li>
	<li><code>fromNode.right</code> 在测试用例的树中建立后为 <code>null</code> 。</li>
</ul>
