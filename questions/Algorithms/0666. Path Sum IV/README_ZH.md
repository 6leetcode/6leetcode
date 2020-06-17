### [路径和 IV](https://leetcode-cn.com/problems/path-sum-iv)

<p>对于一棵深度小于&nbsp;<code>5</code>&nbsp;的树，可以用一组三位十进制整数来表示。</p>

<p>对于每个整数：</p>

<ol>
	<li>百位上的数字表示这个节点的深度 <code>D</code>，<code>1 &lt;= D &lt;= 4</code>。</li>
	<li>十位上的数字表示这个节点在当前层所在的位置 <code>P</code>， <code>1 &lt;= P &lt;= 8</code>。位置编号与一棵满二叉树的位置编号相同。</li>
	<li>个位上的数字表示这个节点的权值 <code>V</code>，<code>0 &lt;= V &lt;= 9</code>。</li>
</ol>

<p>给定一个包含三位整数的<code>升序</code>数组，表示一棵深度小于 5 的二叉树，请你返回从根到所有叶子结点的路径之和。</p>

<p><strong>样例 1:</strong></p>

<pre><strong>输入:</strong> [113, 215, 221]
<strong>输出:</strong> 12
<strong>解释:</strong> 
这棵树形状如下:
    3
   / \
  5   1

路径和 = (3 + 5) + (3 + 1) = 12.
</pre>

<p>&nbsp;</p>

<p><strong>样例 2:</strong></p>

<pre><strong>输入:</strong> [113, 221]
<strong>输出:</strong> 4
<strong>解释:</strong> 
这棵树形状如下: 
    3
     \
      1

路径和 = (3 + 1) = 4.
</pre>

<p>&nbsp;</p>
