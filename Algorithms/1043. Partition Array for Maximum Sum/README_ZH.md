### [分隔数组以得到最大和](https://leetcode-cn.com/problems/partition-array-for-maximum-sum)

<p>给出整数数组&nbsp;<code>A</code>，将该数组分隔为长度最多为 K 的几个（连续）子数组。分隔完成后，每个子数组的中的值都会变为该子数组中的最大值。</p>

<p>返回给定数组完成分隔后的最大和。</p>

<p>&nbsp;</p>

<p><strong>示例：</strong></p>

<pre><strong>输入：</strong>A = [1,15,7,9,2,5,10], K = 3
<strong>输出：</strong>84
<strong>解释：</strong>A 变为 [15,15,15,9,10,10,10]</pre>

<p>&nbsp;</p>

<p><strong>提示：</strong></p>

<ol>
	<li><code>1 &lt;= K &lt;= A.length&nbsp;&lt;= 500</code></li>
	<li><code>0 &lt;= A[i] &lt;= 10^6</code></li>
</ol>
