### [BiNode](https://leetcode-cn.com/problems/binode-lcci)

<p>二叉树数据结构<code>TreeNode</code>可用来表示单向链表（其中<code>left</code>置空，<code>right</code>为下一个链表节点）。实现一个方法，把二叉搜索树转换为单向链表，要求依然符合二叉搜索树的性质，转换操作应是原址的，也就是在原始的二叉搜索树上直接修改。</p>

<p>返回转换后的单向链表的头节点。</p>

<p><strong>注意：</strong>本题相对原题稍作改动</p>

<p>&nbsp;</p>

<p><strong>示例：</strong></p>

<pre><strong>输入：</strong> [4,2,5,1,3,null,6,0]
<strong>输出：</strong> [0,null,1,null,2,null,3,null,4,null,5,null,6]
</pre>

<p><strong>提示：</strong></p>

<ul>
	<li>节点数量不会超过 100000。</li>
</ul>
