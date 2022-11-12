### [最大二叉树 II](https://leetcode-cn.com/problems/maximum-binary-tree-ii)

<p><strong>最大树</strong> 定义：一棵树，并满足：其中每个节点的值都大于其子树中的任何其他值。</p>

<p>给你最大树的根节点 <code>root</code> 和一个整数 <code>val</code> 。</p>

<p>就像 <a href="https://leetcode.cn/problems/maximum-binary-tree/" target="_blank">之前的问题</a> 那样，给定的树是利用 <code>Construct(a)</code>&nbsp;例程从列表&nbsp;<code>a</code>（<code>root = Construct(a)</code>）递归地构建的：</p>

<ul>
	<li>如果 <code>a</code> 为空，返回&nbsp;<code>null</code> 。</li>
	<li>否则，令&nbsp;<code>a[i]</code> 作为 <code>a</code> 的最大元素。创建一个值为&nbsp;<code>a[i]</code>&nbsp;的根节点 <code>root</code> 。</li>
	<li><code>root</code>&nbsp;的左子树将被构建为&nbsp;<code>Construct([a[0], a[1], ..., a[i - 1]])</code> 。</li>
	<li><code>root</code>&nbsp;的右子树将被构建为&nbsp;<code>Construct([a[i + 1], a[i + 2], ..., a[a.length - 1]])</code> 。</li>
	<li>返回&nbsp;<code>root</code> 。</li>
</ul>

<p>请注意，题目没有直接给出 <code>a</code> ，只是给出一个根节点&nbsp;<code>root = Construct(a)</code> 。</p>

<p>假设 <code>b</code> 是 <code>a</code> 的副本，并在末尾附加值 <code>val</code>。题目数据保证 <code>b</code> 中的值互不相同。</p>

<p>返回&nbsp;<code>Construct(b)</code> 。</p>

<p>&nbsp;</p>

<p><strong>示例 1：</strong></p>

<p><strong><img alt="" src="https://assets.leetcode-cn.com/aliyun-lc-upload/uploads/2019/02/23/maximum-binary-tree-1-1.png" style="height: 160px; width: 159px;" /><img alt="" src="https://assets.leetcode-cn.com/aliyun-lc-upload/uploads/2019/02/23/maximum-binary-tree-1-2.png" style="height: 160px; width: 169px;" /></strong></p>

<pre>
<strong>输入：</strong>root = [4,1,3,null,null,2], val = 5
<strong>输出：</strong>[5,4,null,1,3,null,null,2]
<strong>解释：</strong>a = [1,4,2,3], b = [1,4,2,3,5]</pre>

<p><strong>示例 2：<br />
<img alt="" src="https://assets.leetcode-cn.com/aliyun-lc-upload/uploads/2019/02/23/maximum-binary-tree-2-1.png" style="height: 160px; width: 180px;" /><img alt="" src="https://assets.leetcode-cn.com/aliyun-lc-upload/uploads/2019/02/23/maximum-binary-tree-2-2.png" style="height: 160px; width: 214px;" /></strong></p>

<pre>
<strong>输入：</strong>root = [5,2,4,null,1], val = 3
<strong>输出：</strong>[5,2,4,null,1,null,3]
<strong>解释：</strong>a = [2,1,5,4], b = [2,1,5,4,3]</pre>

<p><strong>示例 3：<br />
<img alt="" src="https://assets.leetcode-cn.com/aliyun-lc-upload/uploads/2019/02/23/maximum-binary-tree-3-1.png" style="height: 160px; width: 180px;" /><img alt="" src="https://assets.leetcode-cn.com/aliyun-lc-upload/uploads/2019/02/23/maximum-binary-tree-3-2.png" style="height: 160px; width: 201px;" /></strong></p>

<pre>
<strong>输入：</strong>root = [5,2,3,null,1], val = 4
<strong>输出：</strong>[5,2,4,null,1,3]
<strong>解释：</strong>a = [2,1,5,3], b = [2,1,5,3,4]
</pre>

<p>&nbsp;</p>

<p><strong>提示：</strong></p>

<ul>
	<li>树中节点数目在范围 <code>[1, 100]</code> 内</li>
	<li><code>1 &lt;= Node.val &lt;= 100</code></li>
	<li>树中的所有值 <strong>互不相同</strong></li>
	<li><code>1 &lt;= val &lt;= 100</code></li>
</ul>

<p>&nbsp;</p>
