### [将杂乱无章的数字排序](https://leetcode-cn.com/problems/sort-the-jumbled-numbers)

<p>给你一个下标从 <strong>0</strong>&nbsp;开始的整数数组&nbsp;<code>mapping</code>&nbsp;，它表示一个十进制数的映射规则，<code>mapping[i] = j</code>&nbsp;表示这个规则下将数位&nbsp;<code>i</code>&nbsp;映射为数位 <code>j</code>&nbsp;。</p>

<p>一个整数 <strong>映射后的值</strong>&nbsp;为将原数字每一个数位 <code>i</code>&nbsp;（<code>0 &lt;= i &lt;= 9</code>）映射为&nbsp;<code>mapping[i]</code>&nbsp;。</p>

<p>另外给你一个整数数组&nbsp;<code>nums</code>&nbsp;，请你将数组<em>&nbsp;</em><code>nums</code>&nbsp;中每个数按照它们映射后对应数字非递减顺序排序后返回。</p>

<p><strong>注意：</strong></p>

<ul>
	<li>如果两个数字映射后对应的数字大小相同，则将它们按照输入中的 <strong>相对顺序</strong>&nbsp;排序。</li>
	<li><code>nums</code>&nbsp;中的元素只有在排序的时候需要按照映射后的值进行比较，返回的值应该是输入的元素本身。</li>
</ul>

<p>&nbsp;</p>

<p><strong>示例 1：</strong></p>

<pre><b>输入：</b>mapping = [8,9,4,0,2,1,3,5,7,6], nums = [991,338,38]
<b>输出：</b>[338,38,991]
<b>解释：</b>
将数字 991 按照如下规则映射：
1. mapping[9] = 6 ，所有数位 9 都会变成 6 。
2. mapping[1] = 9 ，所有数位 1 都会变成 8 。
所以，991 映射的值为 669 。
338 映射为 007 ，去掉前导 0 后得到 7 。
38 映射为 07 ，去掉前导 0 后得到 7 。
由于 338 和 38 映射后的值相同，所以它们的前后顺序保留原数组中的相对位置关系，338 在 38 的前面。
所以，排序后的数组为 [338,38,991] 。
</pre>

<p><strong>示例 2：</strong></p>

<pre><b>输入：</b>mapping = [0,1,2,3,4,5,6,7,8,9], nums = [789,456,123]
<b>输出：</b>[123,456,789]
<b>解释：</b>789 映射为 789 ，456 映射为 456 ，123 映射为 123 。所以排序后数组为 [123,456,789] 。
</pre>

<p>&nbsp;</p>

<p><strong>提示：</strong></p>

<ul>
	<li><code>mapping.length == 10</code></li>
	<li><code>0 &lt;= mapping[i] &lt;= 9</code></li>
	<li><code>mapping[i]</code>&nbsp;的值 <strong>互不相同</strong>&nbsp;。</li>
	<li><code>1 &lt;= nums.length &lt;= 3 * 10<sup>4</sup></code></li>
	<li><code>0 &lt;= nums[i] &lt; 10<sup>9</sup></code></li>
</ul>
