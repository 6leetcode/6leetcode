### [从叶结点开始的最小字符串](https://leetcode-cn.com/problems/smallest-string-starting-from-leaf)

<p>给定一颗根结点为&nbsp;<code>root</code>&nbsp;的二叉树，树中的每一个结点都有一个&nbsp;<code>[0, 25]</code>&nbsp;范围内的值，分别代表字母&nbsp;<code>'a'</code> 到&nbsp;<code>'z'</code>。</p>

<p>返回 <em><strong>按字典序最小</strong> 的字符串，该字符串从这棵树的一个叶结点开始，到根结点结束</em>。</p>

<blockquote>
<p>注<strong>：</strong>字符串中任何较短的前缀在 <strong>字典序上</strong> 都是 <strong>较小</strong> 的：</p>

<ul>
	<li>例如，在字典序上&nbsp;<code>"ab"</code> 比&nbsp;<code>"aba"</code>&nbsp;要小。叶结点是指没有子结点的结点。&nbsp;</li>
</ul>
</blockquote>

<p>节点的叶节点是没有子节点的节点。</p>

<p>&nbsp;</p>

<ol>
</ol>

<p><strong>示例 1：</strong></p>

<p><strong><img alt="" src="https://assets.leetcode-cn.com/aliyun-lc-upload/uploads/2019/02/02/tree1.png" style="height: 358px; width: 534px;" /></strong></p>

<pre>
<strong>输入：</strong>root = [0,1,2,3,4,3,4]
<strong>输出：</strong>"dba"
</pre>

<p><strong>示例 2：</strong></p>

<p><img src="https://assets.leetcode.com/uploads/2019/01/30/tree2.png" /></p>

<pre>
<strong>输入：</strong>root = [25,1,3,1,3,0,2]
<strong>输出：</strong>"adz"
</pre>

<p><strong>示例 3：</strong></p>

<p><img src="https://assets.leetcode.com/uploads/2019/02/01/tree3.png" style="height: 513px; width: 490px;" /></p>

<pre>
<strong>输入：</strong>root = [2,2,1,null,1,0,null,0]
<strong>输出：</strong>"abc"
</pre>

<p>&nbsp;</p>

<p><strong>提示：</strong></p>

<ul>
	<li>给定树的结点数在&nbsp;<code>[1, 8500]</code> 范围内</li>
	<li><code>0 &lt;= Node.val &lt;= 25</code></li>
</ul>
