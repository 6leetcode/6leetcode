### [二叉搜索树序列](https://leetcode-cn.com/problems/bst-sequences-lcci)

<p>从左向右遍历一个数组，通过不断将其中的元素插入树中可以逐步地生成一棵二叉搜索树。</p>

<p>给定一个由<strong>不同节点</strong>组成的二叉搜索树 <code>root</code>，输出所有可能生成此树的数组。</p>

<p>&nbsp;</p>

<p><strong>示例 1:</strong></p>

<pre>
<strong>输入: </strong>root = [2,1,3]
<strong>输出: </strong>[[2,1,3],[2,3,1]]
解释: 数组 [2,1,3]、[2,3,1] 均可以通过从左向右遍历元素插入树中形成以下二叉搜索树
&nbsp;      2 
&nbsp;     / \ 
&nbsp;    1   3
</pre>

<p><meta charset="UTF-8" /></p>

<p><strong>示例</strong><strong>&nbsp;2:</strong></p>

<pre>
<strong>输入: </strong>root = [4,1,null,null,3,2]
<strong>输出: </strong>[[4,1,3,2]]
</pre>

<p>&nbsp;</p>

<p><strong>提示：</strong></p>

<ul>
	<li>二叉搜索树中的节点数在<meta charset="UTF-8" />&nbsp;<code>[0, 1000]</code>&nbsp;的范围内</li>
	<li><code>1 &lt;= 节点值&nbsp;&lt;= 10^6</code></li>
	<li>
	<p>用例保证符合要求的数组数量不超过 <code>5000</code></p>
	</li>
</ul>
