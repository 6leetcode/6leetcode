### [超级次方](https://leetcode.cn/problems/super-pow)

<p>你的任务是计算&nbsp;<code>a<sup>b</sup></code>&nbsp;对&nbsp;<code>1337</code> 取模，<code>a</code> 是一个正整数，<code>b</code> 是一个非常大的正整数且会以数组形式给出。</p>

<p>&nbsp;</p>

<p><strong class="example">示例 1：</strong></p>

<div class="example-block">
<p><strong>输入：</strong> <span class="example-io">a = 2, b = [3]</span></p>

<p><strong>输出：</strong> <span class="example-io">8</span></p>

<p><strong>解释：</strong></p>

<p>数组 <code>b = [3]</code> 表示指数 3。因此，<code>a<sup>3</sup> = 2<sup>3</sup> = 8</code>，所以结果为 8。</p>
</div>

<p><strong class="example">示例 2：</strong></p>

<div class="example-block">
<p><strong>输入：</strong> <span class="example-io">a = 2, b = [1,0]</span></p>

<p><strong>输出：</strong> <span class="example-io">1024</span></p>

<p><strong>解释：</strong></p>

<p>数组 <code>b = [1, 0]</code> 表示指数 10。因此，<code>a<sup>10</sup> = 2<sup>10</sup> = 1024</code>，所以结果为 1024。</p>
</div>

<p><strong class="example">示例 3：</strong></p>

<div class="example-block">
<p><strong>输入：</strong> <span class="example-io">a = 1, b = [4,3,3,8,5,2]</span></p>

<p><strong>输出：</strong> <span class="example-io">1</span></p>

<p><strong>解释：</strong></p>

<p>数组 <code>b = [4, 3, 3, 8, 5, 2]</code> 表示一个正整数指数。由于 <code>a = 1</code>，1 的任意正整数次幂都等于 1。因此，结果为 1。</p>
</div>

<p>&nbsp;</p>

<p><strong>提示：</strong></p>

<ul>
	<li><code>1 &lt;= a &lt;= 2<sup>31</sup> - 1</code></li>
	<li><code>1 &lt;= b.length &lt;= 2000</code></li>
	<li><code>0 &lt;= b[i] &lt;= 9</code></li>
	<li><code>b</code> 不含前导 0</li>
</ul>
