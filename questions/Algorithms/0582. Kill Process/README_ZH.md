### [杀死进程](https://leetcode-cn.com/problems/kill-process)

<p>给&nbsp;<strong>n</strong>&nbsp;个进程，每个进程都有一个独一无二的 <strong>PID </strong>（进程编号）和它的&nbsp;<strong>PPID&nbsp;</strong>（父进程编号）。</p>

<p>每一个进程只有一个父进程，但是每个进程可能会有一个或者多个孩子进程。它们形成的关系就像一个树状结构。只有一个进程的 PPID 是 0 ，意味着这个进程没有父进程。所有的 PID 都会是唯一的正整数。</p>

<p>我们用两个序列来表示这些进程，第一个序列包含所有进程的 PID ，第二个序列包含所有进程对应的 PPID。</p>

<p>现在给定这两个序列和一个 PID 表示你要杀死的进程，函数返回一个 PID 序列，表示因为杀这个进程而导致的所有被杀掉的进程的编号。</p>

<p>当一个进程被杀掉的时候，它所有的孩子进程和后代进程都要被杀掉。</p>

<p>你可以以任意顺序排列返回的 PID 序列。</p>

<p><strong>示例 1:</strong></p>

<pre><strong>输入:</strong> 
pid =  [1, 3, 10, 5]
ppid = [3, 0, 5, 3]
kill = 5
<strong>输出:</strong> [5,10]
<strong>解释:</strong> 
           3
         /   \
        1     5
             /
            10
杀掉进程 5 ，同时它的后代进程 10 也被杀掉。
</pre>

<p>&nbsp;</p>

<p><strong>注意:</strong></p>

<ol>
	<li>被杀掉的进程编号一定在&nbsp;PID 序列中。</li>
	<li>n &gt;= 1.</li>
</ol>

<p>&nbsp;</p>
