### [根据中缀表达式构造二叉表达式树](https://leetcode-cn.com/problems/build-binary-expression-tree-from-infix-expression)

<p><strong>二叉表达式树</strong><sup>【1】</sup>是一种表达算术表达式的二叉树。二叉表达式树中的每一个节点都有零个或两个子节点。 叶节点（有 0 个子节点的节点）表示操作数，非叶节点（有 2 个子节点的节点）表示运算符： <code>'+'</code> （加）、 <code>'-'</code> （减）、 <code>'*'</code> （乘）和 <code>'/'</code> （除）。</p>

<p>对于每一个非叶节点，对应的<strong> 中缀表达式</strong><sup>【2】</sup>为 <code>(A o B)</code>，其中 <code>A</code> 是左子树所表达的表达式， <code>B</code> 是右子树所表达的表达式，<code>o</code> 是该节点的运算符。</p>

<p>给定一个<strong> 中缀表达式 </strong>字符串 <code>s</code>，其中包含操作数、上面提到的运算符，以及括号 <code>'('</code> 与 <code>')'</code> 。</p>

<p>返回一个<strong>二叉表达式树</strong>，其中的 <strong>中序遍历</strong><sup>【3】</sup>序列对应表达式<em> </em><code>s</code><em> 。</em></p>

<p><strong>注意，表达式的一般解析顺序适用于 </strong><code>s</code>，即优先解析括号内的表达式，然后解析乘除法，最后解析加减法。</p>

<p> </p>

<p><strong>示例 1：</strong></p>

<p><strong><img alt="" src="https://assets.leetcode.com/uploads/2020/09/20/sample_1_1978.png" style="height: 285px; width: 190px;" /></strong></p>

<pre>
<strong>输入：</strong>s = "2-3/(5*2)+1"
<strong>输出：</strong>[+,-,1,2,/,null,null,null,null,3,*,null,null,5,2]
</pre>

<p><strong>示例 2：</strong></p>

<p><img alt="" src="https://assets.leetcode.com/uploads/2020/09/20/sample_2_1978.png" style="height: 170px; width: 224px;" /></p>

<pre>
<strong>输入：</strong>s = "3*4-2*5"
<strong>输出：</strong>[-,*,*,3,4,2,5]
</pre>

<p><strong>示例 3:</strong></p>

<pre>
<strong>输入：</strong>s = "1+2+3+4+5"
<strong>输出：</strong>[+,+,5,+,4,null,null,+,3,null,null,1,2]
</pre>

<p> </p>

<p><strong>提示:</strong></p>

<ul>
	<li><code>1 <= s.length <= 10<sup>5</sup></code></li>
	<li><code>s</code> 中包含数字和字符 <code>'+'</code>、 <code>'-'</code>、 <code>'*'</code>、 <code>'/'</code>、 <code>'('</code> 和 <code>')'</code> 。</li>
	<li><code>s</code> 中的操作数<strong>有且只有</strong>一位数字。</li>
	<li><code>s</code> 保证是一个有效的表达式。</li>
</ul>

<p> </p>

<p><strong>参考资料：</strong></p>

<ul>
	<li><strong>二叉表达式树：</strong>英语维基百科：<a href="https://en.wikipedia.org/wiki/Binary_expression_tree">Binary Expression Tree</a></li>
	<li><strong>中缀表达式：</strong>英语维基百科：<a href="https://en.wikipedia.org/wiki/Infix_notation">Infix Notation</a>，百度百科：<a href="https://baike.baidu.com/item/中缀表达式/2725244?fr=aladdin">中缀表达式</a></li>
	<li><strong>中序遍历：</strong>英语维基百科：<a href="https://en.wikipedia.org/wiki/Tree_traversal#In-order_(LNR)">Tree Traversal - In-order</a>，百度百科：<a href="https://baike.baidu.com/item/中序遍历/757281?fr=aladdin">中序遍历</a></li>
</ul>
