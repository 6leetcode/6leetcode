### [祖父节点值为偶数的节点和](https://leetcode-cn.com/problems/sum-of-nodes-with-even-valued-grandparent)

<p>给你一棵二叉树，请你返回满足以下条件的所有节点的值之和：</p>

<ul>
	<li>该节点的祖父节点的值为偶数。（一个节点的祖父节点是指该节点的父节点的父节点。）</li>
</ul>

<p>如果不存在祖父节点值为偶数的节点，那么返回&nbsp;<code>0</code> 。</p>

<p>&nbsp;</p>

<p><strong>示例：</strong></p>

<p><strong><img alt="" src="https://assets.leetcode-cn.com/aliyun-lc-upload/uploads/2020/01/10/1473_ex1.png" style="height: 214px; width: 350px;"></strong></p>

<pre><strong>输入：</strong>root = [6,7,8,2,7,1,3,9,null,1,4,null,null,null,5]
<strong>输出：</strong>18
<strong>解释：</strong>图中红色节点的祖父节点的值为偶数，蓝色节点为这些红色节点的祖父节点。
</pre>

<p>&nbsp;</p>

<p><strong>提示：</strong></p>

<ul>
	<li>树中节点的数目在&nbsp;<code>1</code> 到&nbsp;<code>10^4</code>&nbsp;之间。</li>
	<li>每个节点的值在&nbsp;<code>1</code> 到&nbsp;<code>100</code> 之间。</li>
</ul>
