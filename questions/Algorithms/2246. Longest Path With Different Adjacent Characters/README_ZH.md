### [相邻字符不同的最长路径](https://leetcode-cn.com/problems/longest-path-with-different-adjacent-characters)

<p>给你一棵 <strong>树</strong>（即一个连通、无向、无环图），根节点是节点 <code>0</code> ，这棵树由编号从 <code>0</code> 到 <code>n - 1</code> 的 <code>n</code> 个节点组成。用下标从 <strong>0</strong> 开始、长度为 <code>n</code> 的数组 <code>parent</code> 来表示这棵树，其中 <code>parent[i]</code> 是节点 <code>i</code> 的父节点，由于节点 <code>0</code> 是根节点，所以 <code>parent[0] == -1</code> 。</p>

<p>另给你一个字符串 <code>s</code> ，长度也是 <code>n</code> ，其中 <code>s[i]</code> 表示分配给节点 <code>i</code> 的字符。</p>

<p>请你找出路径上任意一对相邻节点都没有分配到相同字符的 <strong>最长路径</strong> ，并返回该路径的长度。</p>

<p>&nbsp;</p>

<p><strong>示例 1：</strong></p>

<p><img alt="" src="https://assets.leetcode.com/uploads/2022/03/25/testingdrawio.png" style="width: 201px; height: 241px;" /></p>

<pre>
<strong>输入：</strong>parent = [-1,0,0,1,1,2], s = "abacbe"
<strong>输出：</strong>3
<strong>解释：</strong>任意一对相邻节点字符都不同的最长路径是：0 -&gt; 1 -&gt; 3 。该路径的长度是 3 ，所以返回 3 。
可以证明不存在满足上述条件且比 3 更长的路径。 
</pre>

<p><strong>示例 2：</strong></p>

<p><img alt="" src="https://assets.leetcode.com/uploads/2022/03/25/graph2drawio.png" style="width: 201px; height: 221px;" /></p>

<pre>
<strong>输入：</strong>parent = [-1,0,0,0], s = "aabc"
<strong>输出：</strong>3
<strong>解释：</strong>任意一对相邻节点字符都不同的最长路径是：2 -&gt; 0 -&gt; 3 。该路径的长度为 3 ，所以返回 3 。
</pre>

<p>&nbsp;</p>

<p><strong>提示：</strong></p>

<ul>
	<li><code>n == parent.length == s.length</code></li>
	<li><code>1 &lt;= n &lt;= 10<sup>5</sup></code></li>
	<li>对所有 <code>i &gt;= 1</code> ，<code>0 &lt;= parent[i] &lt;= n - 1</code> 均成立</li>
	<li><code>parent[0] == -1</code></li>
	<li><code>parent</code> 表示一棵有效的树</li>
	<li><code>s</code> 仅由小写英文字母组成</li>
</ul>
