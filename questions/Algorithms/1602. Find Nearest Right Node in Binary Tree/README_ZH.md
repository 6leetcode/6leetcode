### [找到二叉树中最近的右侧节点](https://leetcode-cn.com/problems/find-nearest-right-node-in-binary-tree)

<p>给定一棵二叉树的根节点 <code>root</code> 和树中的一个节点 <code>u</code> ，返回与 <code>u</code> <strong>所在层</strong>中<strong>距离最近</strong>的<strong>右侧</strong>节点，当 <code>u</code> 是所在层中最右侧的节点，返回 <code>null</code> 。</p>

<p><strong>示例 1:</strong></p>

<p><img alt="" src="https://assets.leetcode.com/uploads/2020/09/24/p3.png" style="width: 241px; height: 161px;"></p>

<pre><strong>输入:</strong> root = [1,2,3,null,4,5,6], u = 4
<strong>输出:</strong> 5
<strong>解释: </strong>节点 4 所在层中，最近的右侧节点是节点 5。
</pre>

<p><strong>示例 2:</strong></p>

<p><strong><img alt="" src="https://assets.leetcode.com/uploads/2020/09/23/p2.png" style="width: 101px; height: 161px;"></strong></p>

<pre><strong>输入:</strong> root = [3,null,4,2], u = 2
<strong>输出:</strong> null
<strong>解释: </strong>2 的右侧没有节点。
</pre>

<p><strong>示例 3:</strong></p>

<pre><strong>输入:</strong> root = [1], u = 1
<strong>输出:</strong> null
</pre>

<p><strong>示例 4:</strong></p>

<pre><strong>输入:</strong> root = [3,4,2,null,null,null,1], u = 4
<strong>输出:</strong> 2
</pre>

<p> </p>

<p><strong>提示:</strong></p>

<ul>
	<li>树中节点个数的范围是 <code>[1, 10<sup>5</sup>]</code> 。</li>
	<li><code>1 &lt;= Node.val &lt;= 10<sup>5</sup></code></li>
	<li>树中所有节点的值是<strong>唯一</strong>的。</li>
	<li><code>u</code> 是以 <code>root</code> 为根的二叉树的一个节点。</li>
</ul>
