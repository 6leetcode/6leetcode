### [反转二叉树的奇数层](https://leetcode-cn.com/problems/reverse-odd-levels-of-binary-tree)

<p>给你一棵 <strong>完美</strong> 二叉树的根节点 <code>root</code> ，请你反转这棵树中每个 <strong>奇数</strong> 层的节点值。</p>

<ul>
	<li>例如，假设第 3 层的节点值是 <code>[2,1,3,4,7,11,29,18]</code> ，那么反转后它应该变成 <code>[18,29,11,7,4,3,1,2]</code> 。</li>
</ul>

<p>反转后，返回树的根节点。</p>

<p><strong>完美</strong> 二叉树需满足：二叉树的所有父节点都有两个子节点，且所有叶子节点都在同一层。</p>

<p>节点的 <strong>层数</strong> 等于该节点到根节点之间的边数。</p>

<p>&nbsp;</p>

<p><strong>示例 1：</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2022/07/28/first_case1.png" style="width: 626px; height: 191px;" />
<pre>
<strong>输入：</strong>root = [2,3,5,8,13,21,34]
<strong>输出：</strong>[2,5,3,8,13,21,34]
<strong>解释：</strong>
这棵树只有一个奇数层。
在第 1 层的节点分别是 3、5 ，反转后为 5、3 。
</pre>

<p><strong>示例 2：</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2022/07/28/second_case3.png" style="width: 591px; height: 111px;" />
<pre>
<strong>输入：</strong>root = [7,13,11]
<strong>输出：</strong>[7,11,13]
<strong>解释：</strong> 
在第 1 层的节点分别是 13、11 ，反转后为 11、13 。 
</pre>

<p><strong>示例 3：</strong></p>

<pre>
<strong>输入：</strong>root = [0,1,2,0,0,0,0,1,1,1,1,2,2,2,2]
<strong>输出：</strong>[0,2,1,0,0,0,0,2,2,2,2,1,1,1,1]
<strong>解释：</strong>奇数层由非零值组成。
在第 1 层的节点分别是 1、2 ，反转后为 2、1 。
在第 3 层的节点分别是 1、1、1、1、2、2、2、2 ，反转后为 2、2、2、2、1、1、1、1 。
</pre>

<p>&nbsp;</p>

<p><strong>提示：</strong></p>

<ul>
	<li>树中的节点数目在范围 <code>[1, 2<sup>14</sup>]</code> 内</li>
	<li><code>0 &lt;= Node.val &lt;= 10<sup>5</sup></code></li>
	<li><code>root</code> 是一棵 <strong>完美</strong> 二叉树</li>
</ul>
