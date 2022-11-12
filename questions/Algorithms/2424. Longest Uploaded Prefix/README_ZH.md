### [最长上传前缀](https://leetcode-cn.com/problems/longest-uploaded-prefix)

<p>给你一个&nbsp;<code>n</code>&nbsp;个视频的上传序列，每个视频编号为&nbsp;<code>1</code>&nbsp;到&nbsp;<code>n</code>&nbsp;之间的 <strong>不同</strong>&nbsp;数字，你需要依次将这些视频上传到服务器。请你实现一个数据结构，在上传的过程中计算 <strong>最长上传前缀</strong>&nbsp;。</p>

<p>如果&nbsp;<strong>闭区间</strong>&nbsp;<code>1</code>&nbsp;到&nbsp;<code>i</code>&nbsp;之间的视频全部都已经被上传到服务器，那么我们称 <code>i</code>&nbsp;是上传前缀。最长上传前缀指的是符合定义的 <code>i</code>&nbsp;中的 <strong>最大值</strong>&nbsp;。<br>
<br>
请你实现&nbsp;<code>LUPrefix</code>&nbsp;类：</p>

<ul>
	<li><code>LUPrefix(int n)</code>&nbsp;初始化一个 <code>n</code>&nbsp;个视频的流对象。</li>
	<li><code>void upload(int video)</code>&nbsp;上传&nbsp;<code>video</code>&nbsp;到服务器。</li>
	<li><code>int longest()</code>&nbsp;返回上述定义的 <strong>最长上传前缀</strong>&nbsp;的长度。</li>
</ul>

<p>&nbsp;</p>

<p><strong>示例 1：</strong></p>

<pre><strong>输入：</strong>
["LUPrefix", "upload", "longest", "upload", "longest", "upload", "longest"]
[[4], [3], [], [1], [], [2], []]
<strong>输出：</strong>
[null, null, 0, null, 1, null, 3]

<strong>解释：</strong>
LUPrefix server = new LUPrefix(4);   // 初始化 4个视频的上传流
server.upload(3);                    // 上传视频 3 。
server.longest();                    // 由于视频 1 还没有被上传，最长上传前缀是 0 。
server.upload(1);                    // 上传视频 1 。
server.longest();                    // 前缀 [1] 是最长上传前缀，所以我们返回 1 。
server.upload(2);                    // 上传视频 2 。
server.longest();                    // 前缀 [1,2,3] 是最长上传前缀，所以我们返回 3 。
</pre>

<p>&nbsp;</p>

<p><strong>提示：</strong></p>

<ul>
	<li><code>1 &lt;= n &lt;= 10<sup>5</sup></code></li>
	<li><code>1 &lt;= video &lt;= 10<sup>5</sup></code></li>
	<li><code>video</code>&nbsp;中所有值 <strong>互不相同</strong>&nbsp;。</li>
	<li><code>upload</code> 和&nbsp;<code>longest</code>&nbsp;<strong>总调用</strong> 次数至多不超过&nbsp;<code>2 * 10<sup>5</sup></code>&nbsp;次。</li>
	<li>至少会调用&nbsp;<code>longest</code>&nbsp;一次。</li>
</ul>
