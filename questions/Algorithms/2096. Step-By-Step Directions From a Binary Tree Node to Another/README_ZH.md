### [从二叉树一个节点到另一个节点每一步的方向](https://leetcode-cn.com/problems/step-by-step-directions-from-a-binary-tree-node-to-another)

<p>给你一棵 <strong>二叉树</strong>&nbsp;的根节点&nbsp;<code>root</code>&nbsp;，这棵二叉树总共有&nbsp;<code>n</code>&nbsp;个节点。每个节点的值为&nbsp;<code>1</code>&nbsp;到&nbsp;<code>n</code>&nbsp;中的一个整数，且互不相同。给你一个整数&nbsp;<code>startValue</code>&nbsp;，表示起点节点 <code>s</code>&nbsp;的值，和另一个不同的整数&nbsp;<code>destValue</code>&nbsp;，表示终点节点&nbsp;<code>t</code>&nbsp;的值。</p>

<p>请找到从节点&nbsp;<code>s</code>&nbsp;到节点 <code>t</code>&nbsp;的 <strong>最短路径</strong>&nbsp;，并以字符串的形式返回每一步的方向。每一步用 <strong>大写</strong>&nbsp;字母&nbsp;<code>'L'</code>&nbsp;，<code>'R'</code>&nbsp;和&nbsp;<code>'U'</code>&nbsp;分别表示一种方向：</p>

<ul>
	<li><code>'L'</code>&nbsp;表示从一个节点前往它的 <strong>左孩子</strong>&nbsp;节点。</li>
	<li><code>'R'</code>&nbsp;表示从一个节点前往它的 <strong>右孩子</strong>&nbsp;节点。</li>
	<li><code>'U'</code>&nbsp;表示从一个节点前往它的 <strong>父</strong>&nbsp;节点。</li>
</ul>

<p>请你返回从 <code>s</code>&nbsp;到 <code>t</code>&nbsp;<strong>最短路径</strong>&nbsp;每一步的方向。</p>

<p>&nbsp;</p>

<p><strong>示例 1：</strong></p>

<p><img alt="" src="https://assets.leetcode.com/uploads/2021/11/15/eg1.png" style="width: 214px; height: 163px;"></p>

<pre><b>输入：</b>root = [5,1,2,3,null,6,4], startValue = 3, destValue = 6
<b>输出：</b>"UURL"
<b>解释：</b>最短路径为：3 → 1 → 5 → 2 → 6 。
</pre>

<p><strong>示例 2：</strong></p>

<p><img alt="" src="https://assets.leetcode.com/uploads/2021/11/15/eg2.png" style="width: 74px; height: 102px;"></p>

<pre><b>输入：</b>root = [2,1], startValue = 2, destValue = 1
<b>输出：</b>"L"
<b>解释：</b>最短路径为：2 → 1 。
</pre>

<p>&nbsp;</p>

<p><strong>提示：</strong></p>

<ul>
	<li>树中节点数目为&nbsp;<code>n</code>&nbsp;。</li>
	<li><code>2 &lt;= n &lt;= 10<sup>5</sup></code></li>
	<li><code>1 &lt;= Node.val &lt;= n</code></li>
	<li>树中所有节点的值 <strong>互不相同</strong>&nbsp;。</li>
	<li><code>1 &lt;= startValue, destValue &lt;= n</code></li>
	<li><code>startValue != destValue</code></li>
</ul>
