### [根据中缀表达式构造二叉表达式树](https://leetcode-cn.com/problems/build-binary-expression-tree-from-infix-expression)

<p><strong>二叉表达式树</strong> 是一种表达算术表达式的二叉树。二叉表达式树中的每一个节点都有零个或两个子节点。 叶节点（有 0 个子节点的节点）表示操作数，非叶节点（有 2 个子节点的节点）表示运算符： <code>'+'</code> （加）、 <code>'-'</code> （减）、 <code>'*'</code> （乘）和 <code>'/'</code> （除）。</p>

<p>对于每一个运算符为 <code>o</code> 的非叶节点，对应的<strong> <a href="http://baike.baidu.com/item/中缀表达式/2725244?fr=aladdin" target="_blank">中缀表达式</a></strong> 为 <code>(A o B)</code>，其中 <code>A</code> 是左子树所表达的表达式， <code>B</code> 是右子树所表达的表达式。</p>

<p>给定一个<strong> 中缀表达式 </strong>字符串 <code>s</code>，其中包含操作数、上面提到的运算符，以及括号 <code>'('</code> 与 <code>')'</code> 。</p>

<p>返回一个有效的<strong> 二叉表达式树</strong>，其 <a href="http://baike.baidu.com/item/中序遍历/757281?fr=aladdin" target="_blank"><strong>中序遍历</strong></a><sup> </sup>序列对应表达式 <code>s</code> 消除括号后的序列（详情参见下面的示例）<em>。</em></p>

<p><strong>注意，表达式的一般解析顺序适用于 </strong><code>s</code>，即优先解析括号内的表达式，然后解析乘除法，最后解析加减法。</p>

<p>同时，操作数在 <code>s</code> 和树的中序遍历中 <strong>出现顺序相同</strong> 。</p>

<p> </p>

<p><strong>示例 1：</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2020/10/02/ex1-4.png" style="width: 250px; height: 161px;" />
<pre>
<strong>输入：</strong>s = "3*4-2*5"
<strong>输出：</strong>[-,*,*,3,4,2,5]
<strong>解释：</strong>上面是唯一一种有效的二叉表达式树，其中序遍历生成 s 。
</pre>

<p><strong>示例 2：</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2020/10/02/ex1-2.png" style="width: 150px; height: 210px;" />
<pre>
<strong>输入：</strong>s = "2-3/(5*2)+1"
<strong>输出：</strong>[+,-,1,2,/,null,null,null,null,3,*,null,null,5,2]
<strong>解释：</strong>上面的树的中序遍历为 2-3/5*2+1 ，与 s 消除括号后相同。该树还会生成正确的结果，其操作数的顺序与 s 中出现的顺序相同。
下面的树也是一个有效的二叉表达式树，具有与 s 相同的中序遍历，但它不是一个有效的答案，因为它的求值结果不同。
<img alt="" src="https://assets.leetcode.com/uploads/2020/10/02/ex1-1.png" style="width: 201px; height: 281px;" />
下面的树也是无效的。尽管它的计算结果相等并与上述树等效，但其中序遍历不会产生 s ，并且其操作数与 s 中的顺序也不相同。
<img alt="" src="https://assets.leetcode.com/uploads/2020/10/02/ex1-3.png" style="width: 281px; height: 281px;" />
</pre>

<p><strong>示例 3：</strong></p>

<pre>
<strong>输入：</strong>s = "1+2+3+4+5"
<strong>输出：</strong>[+,+,5,+,4,null,null,+,3,null,null,1,2]
<strong>解释：</strong>二叉树 [+,+,5,+,+,null,null,1,2,3,4] 也是诸多有效的二叉表达式树之一。</pre>

<p> </p>

<p><strong>提示:</strong></p>

<ul>
	<li><code>1 <= s.length <= 10<sup>5</sup></code></li>
	<li><code>s</code> 中包含数字和字符 <code>'+'</code>、 <code>'-'</code>、 <code>'*'</code>、 <code>'/'</code> 。</li>
	<li><code>s</code> 中的操作数 <strong>恰好</strong> 是一位数字。</li>
	<li>题目数据保证 <code>s</code> 是一个有效的表达式。</li>
</ul>
