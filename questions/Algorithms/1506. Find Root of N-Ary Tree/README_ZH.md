### [找到 N 叉树的根节点](https://leetcode-cn.com/problems/find-root-of-n-ary-tree)

<p>给定一棵&nbsp;<a href="https://slack-redir.net/link?url=https%3A%2F%2Fleetcode.com%2Farticles%2Fintroduction-to-n-ary-trees" target="_blank">N 叉树</a>&nbsp;的所有节点在一个数组&nbsp;&nbsp;<code>Node[] tree</code>&nbsp;中，树中每个节点都有<strong>唯一的值</strong>。</p>

<p>找到并返回 N 叉树的<strong>根节点</strong>。</p>

<p>&nbsp;</p>

<p><em>N 叉树的输入序列为其层序遍历序列，每组子节点用 null 分隔（见示例）。</em></p>

<p><em><img alt="" src="https://assets.leetcode-cn.com/aliyun-lc-upload/uploads/2020/07/21/sample_4_964.png" style="width:300px" /></em></p>

<p>上图中的 N 叉树的序列化描述为 [1,null,2,3,4,5,null,null,6,7,null,8,null,9,10,null,null,11,null,12,null,13,null,null,14] 。</p>

<p><strong>进阶：</strong>你可以使用 O(1) 额外内存空间找到该树的根节点吗？</p>

<p><strong>备注：</strong></p>

<ul>
	<li>下列输入仅用于测试。</li>
	<li>你会以任意顺序接收到 N 叉树全部节点的列表。</li>
</ul>

<p>&nbsp;</p>

<p><strong>示例 1：</strong></p>

<p><img src="https://assets.leetcode.com/uploads/2018/10/12/narytreeexample.png" style="width:250px" /></p>

<pre>
<strong>输入：</strong>[1,null,3,2,4,null,5,6]
<strong>输出：</strong>[1,null,3,2,4,null,5,6]
</pre>

<p><strong>示例 2：</strong></p>

<p><img alt="" src="https://assets.leetcode.com/uploads/2019/11/08/sample_4_964.png" style="height:241px; width:296px" /></p>

<pre>
<strong>输入：</strong>[1,null,2,3,4,5,null,null,6,7,null,8,null,9,10,null,null,11,null,12,null,13,null,null,14]
<strong>输出：</strong>[1,null,2,3,4,5,null,null,6,7,null,8,null,9,10,null,null,11,null,12,null,13,null,null,14]
</pre>

<p>&nbsp;</p>

<p><strong>提示：</strong></p>

<ul>
	<li>节点的总个数在&nbsp;<code>[1,&nbsp;5*10^4]</code>&nbsp;之间。</li>
	<li>每个节点都有唯一的值。</li>
</ul>
