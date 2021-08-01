### [两数之和 IV - 输入 BST](https://leetcode-cn.com/problems/two-sum-iv-input-is-a-bst)

<p>给定一个二叉搜索树 <code>root</code> 和一个目标结果 <code>k</code>，如果 BST 中存在两个元素且它们的和等于给定的目标结果，则返回 <code>true</code>。</p>

<p> </p>

<p><strong>示例 1：</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2020/09/21/sum_tree_1.jpg" />
<pre>
<strong>输入:</strong> root = [5,3,6,2,4,null,7], k = 9
<strong>输出:</strong> true
</pre>

<p><strong>示例 2：</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2020/09/21/sum_tree_2.jpg" />
<pre>
<strong>输入:</strong> root = [5,3,6,2,4,null,7], k = 28
<strong>输出:</strong> false
</pre>

<p><strong>示例 3：</strong></p>

<pre>
<strong>输入:</strong> root = [2,1,3], k = 4
<strong>输出:</strong> true
</pre>

<p><strong>示例 4：</strong></p>

<pre>
<strong>输入:</strong> root = [2,1,3], k = 1
<strong>输出:</strong> false
</pre>

<p><strong>示例 5：</strong></p>

<pre>
<strong>输入:</strong> root = [2,1,3], k = 3
<strong>输出:</strong> true
</pre>

<p> </p>

<p><strong>提示:</strong></p>

<ul>
	<li>二叉树的节点个数的范围是  <code>[1, 10<sup>4</sup>]</code>.</li>
	<li><code>-10<sup>4</sup> <= Node.val <= 10<sup>4</sup></code></li>
	<li><code>root</code> 为二叉搜索树</li>
	<li><code>-10<sup>5</sup> <= k <= 10<sup>5</sup></code></li>
</ul>
