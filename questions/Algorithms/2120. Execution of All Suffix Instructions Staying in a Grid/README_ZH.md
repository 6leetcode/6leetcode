### [执行所有后缀指令](https://leetcode-cn.com/problems/execution-of-all-suffix-instructions-staying-in-a-grid)

<p>现有一个 <code>n x n</code> 大小的网格，左上角单元格坐标 <code>(0, 0)</code> ，右下角单元格坐标 <code>(n - 1, n - 1)</code> 。给你整数 <code>n</code> 和一个整数数组 <code>startPos</code> ，其中 <code>startPos = [start<sub>row</sub>, start<sub>col</sub>]</code> 表示机器人最开始在坐标为 <code>(start<sub>row</sub>, start<sub>col</sub>)</code> 的单元格上。</p>

<p>另给你一个长度为 <code>m</code> 、下标从 <strong>0</strong> 开始的字符串 <code>s</code> ，其中 <code>s[i]</code> 是对机器人的第 <code>i</code> 条指令：<code>'L'</code>（向左移动），<code>'R'</code>（向右移动），<code>'U'</code>（向上移动）和 <code>'D'</code>（向下移动）。</p>

<p>机器人可以从 <code>s</code> 中的任一第 <code>i</code> 条指令开始执行。它将会逐条执行指令直到 <code>s</code> 的末尾，但在满足下述条件之一时，机器人将会停止：</p>

<ul>
	<li>下一条指令将会导致机器人移动到网格外。</li>
	<li>没有指令可以执行。</li>
</ul>

<p>返回一个长度为 <code>m</code> 的数组 <code>answer</code> ，其中 <code>answer[i]</code> 是机器人从第 <code>i</code>&nbsp;条指令 <strong>开始</strong>&nbsp;，可以执行的 <strong>指令数目</strong> 。</p>

<p>&nbsp;</p>

<p><strong>示例 1：</strong></p>

<p><img alt="" src="https://assets.leetcode.com/uploads/2021/12/09/1.png" style="width: 145px; height: 142px;" /></p>

<pre>
<strong>输入：</strong>n = 3, startPos = [0,1], s = "RRDDLU"
<strong>输出：</strong>[1,5,4,3,1,0]
<strong>解释：</strong>机器人从 startPos 出发，并从第 i 条指令开始执行：
- 0: "<em><strong>R</strong></em>RDDLU" 在移动到网格外之前，只能执行一条 "R" 指令。
- 1:  "<em><strong>RDDLU</strong></em>" 可以执行全部五条指令，机器人仍在网格内，最终到达 (0, 0) 。
- 2:   "<em><strong>DDLU</strong></em>" 可以执行全部四条指令，机器人仍在网格内，最终到达 (0, 0) 。
- 3:    "<em><strong>DLU</strong></em>" 可以执行全部三条指令，机器人仍在网格内，最终到达 (0, 0) 。
- 4:     "<em><strong>L</strong></em>U" 在移动到网格外之前，只能执行一条 "L" 指令。
- 5:      "U" 如果向上移动，将会移动到网格外。
</pre>

<p><strong>示例 2：</strong></p>

<p><img alt="" src="https://assets.leetcode.com/uploads/2021/12/09/2.png" style="width: 106px; height: 103px;" /></p>

<pre>
<strong>输入：</strong>n = 2, startPos = [1,1], s = "LURD"
<strong>输出：</strong>[4,1,0,0]
<strong>解释：</strong>
- 0: "<em><strong>LURD</strong></em>"
- 1:  "<em><strong>U</strong></em>RD"
- 2:   "RD"
- 3:    "D"
</pre>

<p><strong>示例 3：</strong></p>

<p><img alt="" src="https://assets.leetcode.com/uploads/2021/12/09/3.png" style="width: 67px; height: 64px;" /></p>

<pre>
<strong>输入：</strong>n = 1, startPos = [0,0], s = "LRUD"
<strong>输出：</strong>[0,0,0,0]
<strong>解释：</strong>无论机器人从哪条指令开始执行，都会移动到网格外。
</pre>

<p>&nbsp;</p>

<p><strong>提示：</strong></p>

<ul>
	<li><code>m == s.length</code></li>
	<li><code>1 &lt;= n, m &lt;= 500</code></li>
	<li><code>startPos.length == 2</code></li>
	<li><code>0 &lt;= start<sub>row</sub>, start<sub>col</sub> &lt; n</code></li>
	<li><code>s</code> 由 <code>'L'</code>、<code>'R'</code>、<code>'U'</code> 和 <code>'D'</code> 组成</li>
</ul>
