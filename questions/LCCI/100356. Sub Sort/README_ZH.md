### [部分排序](https://leetcode-cn.com/problems/sub-sort-lcci)

<p>给定一个整数数组，编写一个函数，找出索引<code>m</code>和<code>n</code>，只要将索引区间<code>[m,n]</code>的元素排好序，整个数组就是有序的。注意：<code>n-m</code>尽量最小，也就是说，找出符合条件的最短序列。函数返回值为<code>[m,n]</code>，若不存在这样的<code>m</code>和<code>n</code>（例如整个数组是有序的），请返回<code>[-1,-1]</code>。</p>
<p><strong>示例：</strong></p>
<pre><strong>输入：</strong> [1,2,4,7,10,11,7,12,6,7,16,18,19]
<strong>输出：</strong> [3,9]
</pre>
<p><strong>提示：</strong></p>
<ul>
<li><code>0 <= len(array) <= 1000000</code></li>
</ul>
