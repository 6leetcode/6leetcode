### [搜寻名人](https://leetcode-cn.com/problems/find-the-celebrity)

<p>假设你是一个专业的狗仔，参加了一个 <code>n</code> 人派对，其中每个人被从 <code>0</code> 到 <code>n - 1</code> 标号。在这个派对人群当中可能存在一位 “名人”。所谓 “名人” 的定义是：其他所有 <code>n - 1</code> 个人都认识他/她，而他/她并不认识其他任何人。</p>

<p>现在你想要确认这个 “名人” 是谁，或者确定这里没有 “名人”。而你唯一能做的就是问诸如 “A 你好呀，请问你认不认识 B呀？” 的问题，以确定 A 是否认识 B。你需要在（渐近意义上）尽可能少的问题内来确定这位 “名人” 是谁（或者确定这里没有 “名人”）。</p>

<p>在本题中，你可以使用辅助函数 <code>bool knows(a, b)</code> 获取到 A 是否认识 B。请你来实现一个函数 <code>int findCelebrity(n)</code>。</p>

<p>派对最多只会有一个 “名人” 参加。若 “名人” 存在，请返回他/她的编号；若 “名人” 不存在，请返回 <code>-1</code>。</p>

<p> </p>

<p><strong>示例 1:</strong></p>

<p><img alt="" src="https://assets.leetcode.com/uploads/2019/02/02/277_example_1_bold.PNG" style="height: 181px; width: 186px;" /></p>

<pre>
<strong>输入: </strong>graph = [
  [1,1,0],
  [0,1,0],
  [1,1,1]
]
<strong>输出: </strong>1
<strong>解释: </strong>有编号分别为 0、1 和 2 的三个人。graph[i][j] = 1 代表编号为 i 的人认识编号为 j 的人，而 graph[i][j] = 0 则代表编号为 i 的人不认识编号为 j 的人。“名人” 是编号 1 的人，因为 0 和 2 均认识他/她，但 1 不认识任何人。
</pre>

<p><strong>示例 2:</strong></p>

<p><img alt="" src="https://assets.leetcode.com/uploads/2019/02/02/277_example_2.PNG" style="height: 192px; width: 193px;" /></p>

<pre>
<strong>输入: </strong>graph = [
  [1,0,1],
  [1,1,0],
  [0,1,1]
]
<strong>输出: </strong>-1
<strong>解释: </strong>没有 “名人”
</pre>

<p> </p>

<p><strong>提示：</strong></p>

<ul>
	<li><code>n == graph.length</code></li>
	<li><code>n == graph[i].length</code></li>
	<li><code>2 <= n <= 100</code></li>
	<li><code>graph[i][j]</code> 是 <code>0</code> 或 <code>1</code>.</li>
	<li><code>graph[i][i] == 1</code></li>
</ul>

<ol>
</ol>
