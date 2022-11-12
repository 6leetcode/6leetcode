### [绘制直线](https://leetcode-cn.com/problems/draw-line-lcci)

<p>已知一个由像素点组成的单色屏幕，每行均有 <code>w</code> 个像素点，所有像素点初始为 <code>0</code>，左上角位置为 <code>(0,0)</code>。</p>

<p>现将每行的像素点按照「每 <code>32</code> 个像素点」为一组存放在一个 <code>int</code> 中，再依次存入长度为 <code>length</code> 的一维数组中。</p>

<p>我们将在屏幕上绘制一条从点 <code>(x1,y)</code> 到点 <code>(x2,y)</code> 的直线（即像素点修改为 <code>1</code>），请返回绘制过后的数组。</p>

<p>&nbsp;</p>

<p><strong>注意：</strong></p>

<ul>
	<li>用例保证屏幕宽度 <code>w</code> 可被 32 整除（即一个 <code>int</code> 不会分布在两行上）</li>
</ul>

<p>&nbsp;</p>

<p><strong>示例1:</strong></p>

<pre>
<strong> 输入</strong>：length = 1, w = 32, x1 = 30, x2 = 31, y = 0
<strong> 输出</strong>：[3]
<strong> 解释</strong>：在第 0 行的第 30 位到第 31 位画一条直线，屏幕二进制形式表示为 [00000000000000000000000000000011]，因此返回 [3]
</pre>

<p><strong>示例2:</strong></p>

<pre>
<strong> 输入</strong>：length = 3, w = 96, x1 = 0, x2 = 95, y = 0
<strong> 输出</strong>：[-1, -1, -1]
<strong> 解释</strong>：由于二进制 <strong>11111111111111111111111111111111</strong> 的 int 类型代表 -1，因此返回 [-1,-1,-1]</pre>

<p>&nbsp;</p>

<p><strong>提示：</strong></p>

<ul>
	<li><code>1 &lt;= length &lt;= 10^5</code></li>
	<li><code>1 &lt;= w &lt;= 3 * 10^5</code></li>
	<li><code>0 &lt;= x1 &lt;= x2 &lt; w</code></li>
	<li><code>0 &lt;= y &lt;= 10</code></li>
</ul>
