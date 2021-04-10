### [按公因数计算最大组件大小](https://leetcode-cn.com/problems/largest-component-size-by-common-factor)

<p>给定一个由不同正整数的组成的非空数组 <code>A</code>，考虑下面的图：</p>

<ul>
	<li>有 <code>A.length</code> 个节点，按从 <code>A[0]</code> 到 <code>A[A.length - 1]</code> 标记；</li>
	<li>只有当 <code>A[i]</code> 和 <code>A[j]</code> 共用一个大于 1 的公因数时，<code>A[i]</code> 和 <code>A[j]</code> 之间才有一条边。</li>
</ul>

<p>返回图中最大连通组件的大小。</p>

<p> </p>

<ol>
</ol>

<p><strong>示例 1：</strong></p>

<pre>
<strong>输入：</strong>[4,6,15,35]
<strong>输出：</strong>4
<img alt="" src="https://assets.leetcode-cn.com/aliyun-lc-upload/uploads/2018/12/01/ex1.png" style="height: 50px; width: 257px;" />
</pre>

<p><strong>示例 2：</strong></p>

<pre>
<strong>输入：</strong>[20,50,9,63]
<strong>输出：</strong>2
<img alt="" src="https://assets.leetcode-cn.com/aliyun-lc-upload/uploads/2018/12/01/ex2.png" style="height: 50px; width: 293px;" />
</pre>

<p><strong>示例 3：</strong></p>

<pre>
<strong>输入：</strong>[2,3,6,7,4,12,21,39]
<strong>输出：</strong>8
<img alt="" src="https://assets.leetcode-cn.com/aliyun-lc-upload/uploads/2018/12/01/ex3.png" style="height: 180px; width: 346px;" />
</pre>

<p> </p>

<p><strong>提示：</strong></p>

<ol>
	<li><code>1 <= A.length <= 20000</code></li>
	<li><code>1 <= A[i] <= 100000</code></li>
</ol>
