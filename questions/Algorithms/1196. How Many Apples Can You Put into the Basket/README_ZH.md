### [最多可以买到的苹果数量](https://leetcode-cn.com/problems/how-many-apples-can-you-put-into-the-basket)

<p>楼下水果店正在促销，你打算买些苹果，<code>arr[i]</code>&nbsp;表示第&nbsp;<code>i</code>&nbsp;个苹果的单位重量。</p>

<p>你有一个购物袋，最多可以装&nbsp;<code>5000</code>&nbsp;单位重量的东西，算一算，最多可以往购物袋里装入多少苹果。</p>

<p>&nbsp;</p>

<p><strong>示例 1：</strong></p>

<pre><strong>输入：</strong>arr = [100,200,150,1000]
<strong>输出：</strong>4
<strong>解释：</strong>所有 4 个苹果都可以装进去，因为它们的重量之和为 1450。
</pre>

<p><strong>示例 2：</strong></p>

<pre><strong>输入：</strong>arr = [900,950,800,1000,700,800]
<strong>输出：</strong>5
<strong>解释：</strong>6 个苹果的总重量超过了 5000，所以我们只能从中任选 5 个。
</pre>

<p>&nbsp;</p>

<p><strong>提示：</strong></p>

<ul>
	<li><code>1 &lt;= arr.length &lt;= 10^3</code></li>
	<li><code>1 &lt;= arr[i] &lt;= 10^3</code></li>
</ul>
