### [汉诺塔问题](https://leetcode-cn.com/problems/hanota-lcci)

<p>在经典汉诺塔问题中，有 3 根柱子及 N 个不同大小的穿孔圆盘，盘子可以滑入任意一根柱子。一开始，所有盘子自上而下按升序依次套在第一根柱子上(即每一个盘子只能放在更大的盘子上面)。移动圆盘时受到以下限制:<br>
(1) 每次只能移动一个盘子;<br>
(2) 盘子只能从柱子顶端滑出移到下一根柱子;<br>
(3) 盘子只能叠在比它大的盘子上。</p>

<p>请编写程序，用栈将所有盘子从第一根柱子移到最后一根柱子。</p>

<p>你需要原地修改栈。</p>

<p><strong>示例1:</strong></p>

<pre><strong> 输入</strong>：A = [2, 1, 0], B = [], C = []
<strong> 输出</strong>：C = [2, 1, 0]
</pre>

<p><strong>示例2:</strong></p>

<pre><strong> 输入</strong>：A = [1, 0], B = [], C = []
<strong> 输出</strong>：C = [1, 0]
</pre>

<p><strong>提示:</strong></p>

<ol>
	<li>A中盘子的数目不大于14个。</li>
</ol>
