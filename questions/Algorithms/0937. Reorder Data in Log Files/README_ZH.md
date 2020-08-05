### [重新排列日志文件](https://leetcode-cn.com/problems/reorder-data-in-log-files)

<p>你有一个日志数组 <code>logs</code>。每条日志都是以空格分隔的字串。</p>

<p>对于每条日志，其第一个字为字母与数字混合的<em> </em><strong>标识符</strong> ，除标识符之外的所有字为这一条日志的 <strong>内容</strong> 。</p>

<ul>
	<li>除标识符之外，所有字均由小写字母组成的，称为 <strong>字母日志</strong></li>
	<li>除标识符之外，所有字均由数字组成的，称为 <strong>数字日志</strong></li>
</ul>

<p>题目所用数据保证每个日志在其标识符后面至少有一个字。</p>

<p>请按下述规则将日志重新排序：</p>

<ul>
	<li>所有 <strong>字母日志</strong> 都排在 <strong>数字日志</strong> 之前。</li>
	<li><strong>字母日志</strong> 在内容不同时，忽略标识符后，按内容字母顺序排序；在内容相同时，按标识符排序；</li>
	<li><strong>数字日志</strong> 应该按原来的顺序排列。</li>
</ul>

<p>返回日志的最终顺序。</p>

<p>&nbsp;</p>

<p><strong>示例 ：</strong></p>

<pre><strong>输入：</strong>[&quot;a1 9 2 3 1&quot;,&quot;g1 act car&quot;,&quot;zo4 4 7&quot;,&quot;ab1 off key dog&quot;,&quot;a8 act zoo&quot;]
<strong>输出：</strong>[&quot;g1 act car&quot;,&quot;a8 act zoo&quot;,&quot;ab1 off key dog&quot;,&quot;a1 9 2 3 1&quot;,&quot;zo4 4 7&quot;]
</pre>

<p>&nbsp;</p>

<p><strong>提示：</strong></p>

<ul>
	<li><code>0 &lt;= logs.length &lt;= 100</code></li>
	<li><code>3 &lt;= logs[i].length &lt;= 100</code></li>
	<li><code>logs[i]</code>&nbsp;保证有一个标识符，并且标识符后面有一个字。</li>
</ul>
