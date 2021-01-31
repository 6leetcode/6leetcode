### [二叉树的垂序遍历](https://leetcode-cn.com/problems/vertical-order-traversal-of-a-binary-tree)

<p>给你二叉树的根结点 <code>root</code> ，按<em> </em><strong>垂序遍历</strong> 返回其结点值。</p>

<p>对位于 <code>(x, y)</code> 的每个结点而言，其左右子结点分别位于 <code>(x - 1, y - 1)</code> 和 <code>(x + 1, y - 1)</code> 。</p>

<p>二叉树 <strong>垂序遍历</strong> 是由从左到右每个唯一 <code>x</code> 坐标的非空 <strong>报告</strong> 形成的列表，<strong>报告</strong> 是一个包含给定 <code>x</code> 坐标下所有节点的列表，其中节点需要按 <code>y</code> 坐标从最高到最低排序。如果 <strong>报告</strong> 中任意两个节点的 <code>y</code> 坐标相同，则值较小的节点应排在前面。</p>

<p> </p>

<p><strong>示例 1：</strong></p>

<p><img alt="" src="https://assets.leetcode-cn.com/aliyun-lc-upload/uploads/2019/02/02/1236_example_1.PNG" style="height: 186px; width: 201px;" /></p>

<pre>
<strong>输入：</strong>root = [3,9,20,null,null,15,7]
<strong>输出：</strong>[[9],[3,15],[20],[7]]
<strong>解释： </strong>
在不丧失其普遍性的情况下，我们可以假设根结点位于 (0, 0)：
然后，值为 9 的结点出现在 (-1, -1)；
值为 3 和 15 的两个结点分别出现在 (0, 0) 和 (0, -2)；
值为 20 的结点出现在 (1, -1)；
值为 7 的结点出现在 (2, -2)。
</pre>

<p><strong>示例 2：</strong></p>

<p><strong><img alt="" src="https://assets.leetcode-cn.com/aliyun-lc-upload/uploads/2019/02/23/tree2.png" style="height: 150px; width: 236px;" /></strong></p>

<pre>
<strong>输入：</strong>root = [1,2,3,4,5,6,7]
<strong>输出：</strong>[[4],[2],[1,5,6],[3],[7]]
<strong>解释：</strong>
根据给定的方案，值为 5 和 6 的两个结点出现在同一位置。
然而，在报告 "[1,5,6]" 中，结点值 5 排在前面，因为 5 小于 6。
</pre>

<p> </p>

<p><strong>提示：</strong></p>

<ul>
	<li>树中结点数目总数在范围 <code>[1, 1000]</code> 内</li>
	<li><code>0 <= Node.val <= 1000</code></li>
</ul>
