### [最小区间](https://leetcode-cn.com/problems/smallest-range-covering-elements-from-k-lists)

<p>你有&nbsp;<code>k</code>&nbsp;个升序排列的整数列表。找到一个<strong>最小</strong>区间，使得&nbsp;<code>k</code>&nbsp;个列表中的每个列表至少有一个数包含在其中。</p>

<p>我们定义如果&nbsp;<code>b-a &lt; d-c</code>&nbsp;或者在&nbsp;<code>b-a == d-c</code>&nbsp;时&nbsp;<code>a &lt; c</code>，则区间 [a,b] 比 [c,d] 小。</p>

<p>&nbsp;</p>

<p><strong>示例：</strong></p>

<pre><strong>输入：</strong>[[4,10,15,24,26], [0,9,12,20], [5,18,22,30]]
<strong>输出：</strong>[20,24]
<strong>解释：</strong> 
列表 1：[4, 10, 15, 24, 26]，24 在区间 [20,24] 中。
列表 2：[0, 9, 12, 20]，20 在区间 [20,24] 中。
列表 3：[5, 18, 22, 30]，22 在区间 [20,24] 中。
</pre>

<p>&nbsp;</p>

<p><strong>提示：</strong></p>

<ul>
	<li>给定的列表可能包含重复元素，所以在这里升序表示 &gt;= 。</li>
	<li>1 &lt;= <code>k</code> &lt;= 3500</li>
	<li>-10<sup>5</sup> &lt;= <code>元素的值</code>&nbsp;&lt;= 10<sup>5</sup></li>
	<li><strong>对于使用Java的用户，请注意传入类型已修改为List&lt;List&lt;Integer&gt;&gt;。重置代码模板后可以看到这项改动。</strong></li>
</ul>
