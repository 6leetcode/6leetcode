### [将找到的值乘以 2](https://leetcode-cn.com/problems/keep-multiplying-found-values-by-two)

<p>给你一个整数数组 <code>nums</code> ，另给你一个整数 <code>original</code> ，这是需要在 <code>nums</code> 中搜索的第一个数字。</p>

<p>接下来，你需要按下述步骤操作：</p>

<ol>
	<li>如果在 <code>nums</code> 中找到 <code>original</code> ，将 <code>original</code>&nbsp;<strong>乘以</strong> 2 ，得到新 <code>original</code>（即，令 <code>original = 2 * original</code>）。</li>
	<li>否则，停止这一过程。</li>
	<li>只要能在数组中找到新 <code>original</code> ，就对新 <code>original</code> 继续 <strong>重复</strong> 这一过程<strong>。</strong></li>
</ol>

<p>返回<em> </em><code>original</code> 的 <strong>最终</strong> 值。</p>

<p>&nbsp;</p>

<p><strong>示例 1：</strong></p>

<pre>
<strong>输入：</strong>nums = [5,3,6,1,12], original = 3
<strong>输出：</strong>24
<strong>解释：</strong> 
- 3 能在 nums 中找到。3 * 2 = 6 。
- 6 能在 nums 中找到。6 * 2 = 12 。
- 12 能在 nums 中找到。12 * 2 = 24 。
- 24 不能在 nums 中找到。因此，返回 24 。
</pre>

<p><strong>示例 2：</strong></p>

<pre>
<strong>输入：</strong>nums = [2,7,9], original = 4
<strong>输出：</strong>4
<strong>解释：</strong>
- 4 不能在 nums 中找到。因此，返回 4 。
</pre>

<p>&nbsp;</p>

<p><strong>提示：</strong></p>

<ul>
	<li><code>1 &lt;= nums.length &lt;= 1000</code></li>
	<li><code>1 &lt;= nums[i], original &lt;= 1000</code></li>
</ul>
