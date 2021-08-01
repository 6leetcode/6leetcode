### [二叉树剪枝](https://leetcode-cn.com/problems/binary-tree-pruning)

<p>给定二叉树根结点 <code>root</code> ，此外树的每个结点的值要么是 0，要么是 1。</p>

<p>返回移除了所有不包含 1 的子树的原二叉树。</p>

<p>( 节点 X 的子树为 X 本身，以及所有 X 的后代。)</p>

<pre>
<strong>示例1:</strong>
<strong>输入:</strong> [1,null,0,0,1]
<strong>输出: </strong>[1,null,0,null,1]
 
<strong>解释:</strong> 
只有红色节点满足条件“所有不包含 1 的子树”。
右图为返回的答案。

<img alt="" src="https://s3-lc-upload.s3.amazonaws.com/uploads/2018/04/06/1028_2.png" style="width:450px" />
</pre>

<pre>
<strong>示例2:</strong>
<strong>输入:</strong> [1,0,1,0,0,0,1]
<strong>输出: </strong>[1,null,1,null,1]


<img alt="" src="https://s3-lc-upload.s3.amazonaws.com/uploads/2018/04/06/1028_1.png" style="width:450px" />
</pre>

<pre>
<strong>示例3:</strong>
<strong>输入:</strong> [1,1,0,1,1,0,1,0]
<strong>输出: </strong>[1,1,0,1,1,null,1]


<img alt="" src="https://s3-lc-upload.s3.amazonaws.com/uploads/2018/04/05/1028.png" style="width:450px" />
</pre>

<p><strong>说明: </strong></p>

<ul>
	<li>给定的二叉树最多有 <code>200</code> 个节点。</li>
	<li>每个节点的值只会为 <code>0</code> 或 <code>1</code> 。</li>
</ul>
