### [检查子树](https://leetcode-cn.com/problems/check-subtree-lcci)

<p>检查子树。你有两棵非常大的二叉树：T1，有几万个节点；T2，有几万个节点。设计一个算法，判断 T2 是否为 T1 的子树。</p>

<p>如果 T1 有这么一个节点 n，其子树与 T2 一模一样，则 T2 为 T1 的子树，也就是说，从节点 n 处把树砍断，得到的树与 T2 完全相同。</p>

<p><strong>示例1:</strong></p>

<pre><strong> 输入</strong>：t1 = [1, 2, 3], t2 = [2]
<strong> 输出</strong>：true
</pre>

<p><strong>示例2:</strong></p>

<pre><strong> 输入</strong>：t1 = [1, null, 2, 4], t2 = [3, 2]
<strong> 输出</strong>：false
</pre>

<p><strong>提示：</strong></p>

<ol>
	<li>树的节点数目范围为[0, 20000]。</li>
</ol>
