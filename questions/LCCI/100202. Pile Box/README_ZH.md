### [堆箱子](https://leetcode-cn.com/problems/pile-box-lcci)

<p>堆箱子。给你一堆n个箱子，箱子宽 wi、深 di、高 hi。箱子不能翻转，将箱子堆起来时，下面箱子的宽度、高度和深度必须大于上面的箱子。实现一种方法，搭出最高的一堆箱子。箱堆的高度为每个箱子高度的总和。</p>

<p>输入使用数组<code>[wi, di, hi]</code>表示每个箱子。</p>

<p><strong>示例1:</strong></p>

<pre><strong> 输入</strong>：box = [[1, 1, 1], [2, 2, 2], [3, 3, 3]]
<strong> 输出</strong>：6
</pre>

<p><strong>示例2:</strong></p>

<pre><strong> 输入</strong>：box = [[1, 1, 1], [2, 3, 4], [2, 6, 7], [3, 4, 5]]
<strong> 输出</strong>：10
</pre>

<p><strong>提示:</strong></p>

<ol>
	<li>箱子的数目不大于3000个。</li>
</ol>
