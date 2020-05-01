### [连接棒材的最低费用](https://leetcode-cn.com/problems/minimum-cost-to-connect-sticks)

<p>为了装修新房，你需要加工一些长度为正整数的棒材&nbsp;<code>sticks</code>。</p>

<p>如果要将长度分别为&nbsp;<code>X</code> 和&nbsp;<code>Y</code>&nbsp;的两根棒材连接在一起，你需要支付&nbsp;<code>X + Y</code>&nbsp;的费用。 由于施工需要，你必须将所有棒材连接成一根。</p>

<p>返回你把所有棒材&nbsp;<code>sticks</code>&nbsp;连成一根所需要的最低费用。注意你可以任意选择棒材连接的顺序。</p>

<p>&nbsp;</p>

<p><strong>示例 1：</strong></p>

<pre><strong>输入：</strong>sticks = [2,4,3]
<strong>输出：</strong>14
<strong>解释：</strong>先将 2 和 3 连接成 5，花费 5；再将 5 和 4 连接成 9；总花费为 14。
</pre>

<p><strong>示例 2：</strong></p>

<pre><strong>输入：</strong>sticks = [1,8,3,5]
<strong>输出：</strong>30
</pre>

<p>&nbsp;</p>

<p><strong>提示：</strong></p>

<ul>
	<li><code>1 &lt;= sticks.length &lt;= 10^4</code></li>
	<li><code>1 &lt;= sticks[i] &lt;= 10^4</code></li>
</ul>
