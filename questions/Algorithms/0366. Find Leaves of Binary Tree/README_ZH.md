### [寻找二叉树的叶子节点](https://leetcode-cn.com/problems/find-leaves-of-binary-tree)

<p>给你一棵二叉树，请按以下要求的顺序收集它的全部节点：</p>

<ol>
	<li>依次从左到右，每次收集并删除所有的叶子节点</li>
	<li>重复如上过程直到整棵树为空</li>
</ol>

<p>&nbsp;</p>

<p><strong>示例:</strong></p>

<pre><strong>输入: </strong>[1,2,3,4,5]
&nbsp; 
&nbsp;         1
         / \
        2   3
       / \     
      4   5    

<strong>输出: </strong>[[4,5,3],[2],[1]]
</pre>

<p>&nbsp;</p>

<p><strong>解释:</strong></p>

<p>1. 删除叶子节点&nbsp;<code>[4,5,3]</code> ，得到如下树结构：</p>

<pre>          1
         / 
        2          
</pre>

<p>&nbsp;</p>

<p>2. 现在删去叶子节点&nbsp;<code>[2]</code>&nbsp;，得到如下树结构：</p>

<pre>          1          
</pre>

<p>&nbsp;</p>

<p>3. 现在删去叶子节点&nbsp;<code>[1]</code>&nbsp;，得到空树：</p>

<pre>          []         
</pre>
