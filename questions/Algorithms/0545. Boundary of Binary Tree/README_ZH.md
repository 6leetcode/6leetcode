### [二叉树的边界](https://leetcode-cn.com/problems/boundary-of-binary-tree)

<p>二叉树的边界是按顺序包括 <strong>左边界</strong> 、<strong>叶节点</strong> 和 <strong>右边界</strong> 而 <strong>不包括重复的节点</strong> 。</p>

<p><strong>左边界 </strong>的定义是从根到<strong> 最左侧</strong> 节点的路径。<strong>右边界 </strong>的定义是从根到<strong> 最右侧</strong> 节点的路径。</p>

<p><strong>最左侧 </strong>节点的定义是：在左子树存在时总是优先访问，如果不存在左子树则访问右子树。重复以上操作，首先抵达的节点就是 <strong>最左侧</strong> 节点。</p>

<p><strong>最右侧</strong> 节点的定义方式相同，只是将左替换成右。</p>

<p>注意，根节点可能是 <strong>最左侧</strong> 和/或 <strong>最右侧</strong> 的节点。</p>

<p>给定一棵二叉树的根节点 <code>root</code> ，以 <strong>逆时针</strong> 顺序从根开始返回其 <strong>边界</strong> 。</p>

<p> </p>

<p><strong>示例 1：</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2020/11/11/boundary1.jpg" style="width: 299px; height: 290px;" />
<pre>
<strong>输入：</strong>root = [1,null,2,3,4]
<strong>输出：</strong>[1,3,4,2]
<b>解释：</b>
左边界是 [1,2,3]
右边界是 [1,2,4]
叶节点是 [3,4]
合并在一起得到 [1,2,3,4]，按逆时针排序得 [1,3,4,2]
</pre>

<p><strong>示例 2：</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2020/11/11/boundary2.jpg" style="width: 599px; height: 411px;" />
<pre>
<strong>输入：</strong>root = [1,2,3,4,5,6,null,null,null,7,8,9,10]
<strong>输出：</strong>[1,2,4,7,8,9,10,6,3]
<b>解释：</b>
左边界是 [1,2,4]（根据定义，4 是最左侧结点）
右边界是 [1,3,6,10]
叶节点是 [4,7,8,9,10]
合并在一起得到 [1,2,3,4,6,7,8,9,10]，按逆时针排序得 [1,2,4,7,8,9,10,6,3]
</pre>

<p> </p>

<p><strong>提示：</strong></p>

<ul>
	<li>树中节点的数目在范围 <code>[0, 10<sup>4</sup>]</code> 内</li>
	<li><code>-1000 <= Node.val <= 1000</code></li>
</ul>
