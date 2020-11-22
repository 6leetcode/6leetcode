### [从根到叶的二进制数之和](https://leetcode-cn.com/problems/sum-of-root-to-leaf-binary-numbers)

<p>给出一棵二叉树，其上每个结点的值都是 <code>0</code> 或 <code>1</code> 。每一条从根到叶的路径都代表一个从最高有效位开始的二进制数。例如，如果路径为 <code>0 -> 1 -> 1 -> 0 -> 1</code>，那么它表示二进制数 <code>01101</code>，也就是 <code>13</code> 。</p>

<p>对树上的每一片叶子，我们都要找出从根到该叶子的路径所表示的数字。</p>

<p>返回这些数字之和。题目数据保证答案是一个 <strong>32 位 </strong>整数。</p>

<p> </p>

<p><strong>示例 1：</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2019/04/04/sum-of-root-to-leaf-binary-numbers.png" style="width: 450px; height: 296px;" />
<pre>
<strong>输入：</strong>root = [1,0,1,0,1,0,1]
<strong>输出：</strong>22
<strong>解释：</strong>(100) + (101) + (110) + (111) = 4 + 5 + 6 + 7 = 22
</pre>

<p><strong>示例 2：</strong></p>

<pre>
<strong>输入：</strong>root = [0]
<strong>输出：</strong>0
</pre>

<p><strong>示例 3：</strong></p>

<pre>
<strong>输入：</strong>root = [1]
<strong>输出：</strong>1
</pre>

<p><strong>示例 4：</strong></p>

<pre>
<strong>输入：</strong>root = [1,1]
<strong>输出：</strong>3
</pre>

<p> </p>

<p><strong>提示：</strong></p>

<ul>
	<li>树中的结点数介于 <code>1</code> 和 <code>1000</code> 之间。</li>
	<li><code>Node.val</code> 为 <code>0</code> 或 <code>1</code> 。</li>
</ul>
