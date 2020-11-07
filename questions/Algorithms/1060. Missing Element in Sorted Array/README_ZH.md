### [有序数组中的缺失元素](https://leetcode-cn.com/problems/missing-element-in-sorted-array)

<p>给出一个有序数组&nbsp;<code>A</code>，数组中的每个数字都是&nbsp;<strong>独一无二的</strong>，找出从数组最左边开始的第&nbsp;<code><em>K</em></code>&nbsp;个缺失数字。</p>

<p>&nbsp;</p>

<p><strong>示例 1：</strong></p>

<pre><strong>输入：</strong>A = [4,7,9,10], K = 1
<strong>输出：</strong>5
<strong>解释：</strong>
第一个缺失数字为 5 。
</pre>

<p><strong>示例 2：</strong></p>

<pre><strong>输入：</strong>A = [4,7,9,10], K = 3
<strong>输出：</strong>8
<strong>解释： </strong>
缺失数字有 [5,6,8,...]，因此第三个缺失数字为 8 。
</pre>

<p><strong>示例 3：</strong></p>

<pre><strong>输入：</strong>A = [1,2,4], K = 3
<strong>输出：</strong>6
<strong>解释：</strong>
缺失数字有 [3,5,6,7,...]，因此第三个缺失数字为 6 。
</pre>

<p>&nbsp;</p>

<p><strong>提示：</strong></p>

<ol>
	<li><code>1 &lt;= A.length &lt;= 50000</code></li>
	<li><code>1 &lt;= A[i] &lt;= 1e7</code></li>
	<li><code>1 &lt;= K &lt;= 1e8</code></li>
</ol>
