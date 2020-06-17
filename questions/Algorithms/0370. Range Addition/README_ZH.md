### [区间加法](https://leetcode-cn.com/problems/range-addition)

<p>假设你有一个长度为&nbsp;<em><strong>n</strong></em>&nbsp;的数组，初始情况下所有的数字均为&nbsp;<strong>0</strong>，你将会被给出&nbsp;<em><strong>k</strong></em>​​​​​​<em>​</em> 个更新的操作。</p>

<p>其中，每个操作会被表示为一个三元组：<strong>[startIndex, endIndex, inc]</strong>，你需要将子数组&nbsp;<strong>A[startIndex ... endIndex]</strong>（包括 startIndex 和 endIndex）增加&nbsp;<strong>inc</strong>。</p>

<p>请你返回&nbsp;<strong><em>k</em></strong>&nbsp;次操作后的数组。</p>

<p><strong>示例:</strong></p>

<pre><strong>输入: </strong>length = 5, updates = [[1,3,2],[2,4,3],[0,2,-2]]
<strong>输出: </strong>[-2,0,3,5,3]
</pre>

<p><strong>解释:</strong></p>

<pre>初始状态:
[0,0,0,0,0]

进行了操作 [1,3,2] 后的状态:
[0,2,2,2,0]

进行了操作 [2,4,3] 后的状态:
[0,2,5,5,3]

进行了操作 [0,2,-2] 后的状态:
[-2,0,3,5,3]
</pre>
