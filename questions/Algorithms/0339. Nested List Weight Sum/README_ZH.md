### [嵌套列表权重和](https://leetcode-cn.com/problems/nested-list-weight-sum)

<p>给定一个嵌套的整数列表，请返回该列表按深度加权后所有整数的总和。</p>

<p>每个元素要么是整数，要么是列表。同时，列表中元素同样也可以是整数或者是另一个列表。</p>

<p><strong>示例 1:</strong></p>

<pre><strong>输入: </strong>[[1,1],2,[1,1]]
<strong>输出: </strong>10 
<strong>解释: </strong>因为列表中有四个深度为 2 的 1 ，和一个深度为 1 的 2。</pre>

<p><strong>示例 2:</strong></p>

<pre><strong>输入: </strong>[1,[4,[6]]]
<strong>输出: </strong>27 
<strong>解释: </strong>一个深度为 1 的 1，一个深度为 2 的 4，一个深度为 3 的 6。所以，1 + 4*2 + 6*3 = 27。</pre>
