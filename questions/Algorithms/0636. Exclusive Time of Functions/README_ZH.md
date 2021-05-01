### [函数的独占时间](https://leetcode-cn.com/problems/exclusive-time-of-functions)

<p>有一个 <strong>单线程</strong> CPU 正在运行一个含有 <code>n</code> 道函数的程序。每道函数都有一个位于  <code>0</code> 和 <code>n-1</code> 之间的唯一标识符。</p>

<p>函数调用 <strong>存储在一个 <a href="https://baike.baidu.com/item/%E8%B0%83%E7%94%A8%E6%A0%88/22718047?fr=aladdin" target="_blank">调用栈</a> 上</strong> ：当一个函数调用开始时，它的标识符将会推入栈中。而当一个函数调用结束时，它的标识符将会从栈中弹出。标识符位于栈顶的函数是 <strong>当前正在执行的函数</strong> 。每当一个函数开始或者结束时，将会记录一条日志，包括函数标识符、是开始还是结束、以及相应的时间戳。</p>

<p>给你一个由日志组成的列表 <code>logs</code> ，其中 <code>logs[i]</code> 表示第 <code>i</code> 条日志消息，该消息是一个按 <code>"{function_id}:{"start" | "end"}:{timestamp}"</code> 进行格式化的字符串。例如，<code>"0:start:3"</code> 意味着标识符为 <code>0</code> 的函数调用在时间戳 <code>3</code> 的 <strong>起始开始执行</strong> ；而 <code>"1:end:2"</code> 意味着标识符为 <code>1</code> 的函数调用在时间戳 <code>2</code> 的 <strong>末尾结束执行</strong>。注意，函数可以 <strong>调用多次，可能存在递归调用 </strong>。</p>

<p>函数的 <strong>独占时间</strong> 定义是在这个函数在程序所有函数调用中执行时间的总和，调用其他函数花费的时间不算该函数的独占时间。例如，如果一个函数被调用两次，一次调用执行 <code>2</code> 单位时间，另一次调用执行 <code>1</code> 单位时间，那么该函数的 <strong>独占时间</strong> 为 <code>2 + 1 = 3</code> 。</p>

<p>以数组形式返回每个函数的 <strong>独占时间</strong> ，其中第 <code>i</code> 个下标对应的值表示标识符 <code>i</code> 的函数的独占时间。</p>
 

<p><strong>示例 1：</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2019/04/05/diag1b.png" style="width: 550px; height: 239px;" />
<pre>
<strong>输入：</strong>n = 2, logs = ["0:start:0","1:start:2","1:end:5","0:end:6"]
<strong>输出：</strong>[3,4]
<strong>解释：</strong>
函数 0 在时间戳 0 的起始开始执行，执行 2 个单位时间，于时间戳 1 的末尾结束执行。 
函数 1 在时间戳 2 的起始开始执行，执行 4 个单位时间，于时间戳 5 的末尾结束执行。 
函数 0 在时间戳 6 的开始恢复执行，执行 1 个单位时间。 
所以函数 0 总共执行 2 + 1 = 3 个单位时间，函数 1 总共执行 4 个单位时间。 
</pre>

<p><strong>示例 2：</strong></p>

<pre>
<strong>输入：</strong>n = 1, logs = ["0:start:0","0:start:2","0:end:5","0:start:6","0:end:6","0:end:7"]
<strong>输出：</strong>[8]
<strong>解释：</strong>
函数 0 在时间戳 0 的起始开始执行，执行 2 个单位时间，并递归调用它自身。
函数 0（递归调用）在时间戳 2 的起始开始执行，执行 4 个单位时间。
函数 0（初始调用）恢复执行，并立刻再次调用它自身。
函数 0（第二次递归调用）在时间戳 6 的起始开始执行，执行 1 个单位时间。
函数 0（初始调用）在时间戳 7 的起始恢复执行，执行 1 个单位时间。
所以函数 0 总共执行 2 + 4 + 1 + 1 = 8 个单位时间。
</pre>

<p><strong>示例 3：</strong></p>

<pre>
<strong>输入：</strong>n = 2, logs = ["0:start:0","0:start:2","0:end:5","1:start:6","1:end:6","0:end:7"]
<strong>输出：</strong>[7,1]
<strong>解释：</strong>
函数 0 在时间戳 0 的起始开始执行，执行 2 个单位时间，并递归调用它自身。
函数 0（递归调用）在时间戳 2 的起始开始执行，执行 4 个单位时间。
函数 0（初始调用）恢复执行，并立刻调用函数 1 。
函数 1在时间戳 6 的起始开始执行，执行 1 个单位时间，于时间戳 6 的末尾结束执行。
函数 0（初始调用）在时间戳 7 的起始恢复执行，执行 1 个单位时间，于时间戳 7 的末尾结束执行。
所以函数 0 总共执行 2 + 4 + 1 = 7 个单位时间，函数 1 总共执行 1 个单位时间。 </pre>

<p><strong>示例 4：</strong></p>

<pre>
<strong>输入：</strong>n = 2, logs = ["0:start:0","0:start:2","0:end:5","1:start:7","1:end:7","0:end:8"]
<strong>输出：</strong>[8,1]
</pre>

<p><strong>示例 5：</strong></p>

<pre>
<strong>输入：</strong>n = 1, logs = ["0:start:0","0:end:0"]
<strong>输出：</strong>[1]
</pre>

<p> </p>

<p><strong>提示：</strong></p>

<ul>
	<li><code>1 <= n <= 100</code></li>
	<li><code>1 <= logs.length <= 500</code></li>
	<li><code>0 <= function_id < n</code></li>
	<li><code>0 <= timestamp <= 10<sup>9</sup></code></li>
	<li>两个开始事件不会在同一时间戳发生</li>
	<li>两个结束事件不会在同一时间戳发生</li>
	<li>每道函数都有一个对应 <code>"start"</code> 日志的 <code>"end"</code> 日志</li>
</ul>
