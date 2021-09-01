### [重建序列](https://leetcode-cn.com/problems/ur2n8P)

<p>请判断原始的序列&nbsp;<code>org</code>&nbsp;是否可以从序列集&nbsp;<code>seqs</code>&nbsp;中唯一地 <strong>重建&nbsp;</strong>。</p>

<p>序列&nbsp;<code>org</code>&nbsp;是 1 到 n 整数的排列，其中 1 &le; n &le; 10<sup>4</sup>。<strong>重建&nbsp;</strong>是指在序列集 <code>seqs</code> 中构建最短的公共超序列，即&nbsp;&nbsp;<code>seqs</code>&nbsp;中的任意序列都是该最短序列的子序列。</p>

<p>&nbsp;</p>

<p><strong>示例 1：</strong></p>

<pre>
<strong>输入: </strong>org = [1,2,3], seqs = [[1,2],[1,3]]
<strong>输出: </strong>false
<strong>解释：</strong>[1,2,3] 不是可以被重建的唯一的序列，因为 [1,3,2] 也是一个合法的序列。
</pre>

<p><strong>示例 2：</strong></p>

<pre>
<strong>输入: </strong>org = [1,2,3], seqs = [[1,2]]
<strong>输出: </strong>false
<strong>解释：</strong>可以重建的序列只有 [1,2]。
</pre>

<p><strong>示例 3：</strong></p>

<pre>
<strong>输入: </strong>org = [1,2,3], seqs = [[1,2],[1,3],[2,3]]
<strong>输出: </strong>true
<strong>解释：</strong>序列 [1,2], [1,3] 和 [2,3] 可以被唯一地重建为原始的序列 [1,2,3]。
</pre>

<p><strong>示例 4：</strong></p>

<pre>
<strong>输入: </strong>org = [4,1,5,2,6,3], seqs = [[5,2,6,3],[4,1,5,2]]
<strong>输出: </strong>true
</pre>

<p>&nbsp;</p>

<p><strong>提示：</strong></p>

<ul>
	<li><code>1 &lt;= n &lt;= 10<sup>4</sup></code></li>
	<li><code>org</code> 是数字 <code>1</code> 到 <code>n</code> 的一个排列</li>
	<li><code>1 &lt;= segs[i].length &lt;= 10<sup>5</sup></code></li>
	<li><code>seqs[i][j]</code> 是 <code>32</code> 位有符号整数</li>
</ul>

<p>&nbsp;</p>

<p>注意：本题与主站 444&nbsp;题相同：<a href="https://leetcode-cn.com/problems/sequence-reconstruction/">https://leetcode-cn.com/problems/sequence-reconstruction/</a></p>
