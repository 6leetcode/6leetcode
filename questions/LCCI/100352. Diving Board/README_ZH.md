### [跳水板](https://leetcode-cn.com/problems/diving-board-lcci)

<p>你正在使用一堆木板建造跳水板。有两种类型的木板，其中长度较短的木板长度为<code>shorter</code>，长度较长的木板长度为<code>longer</code>。你必须正好使用<code>k</code>块木板。编写一个方法，生成跳水板所有可能的长度。</p>

<p>返回的长度需要从小到大排列。</p>

<p><strong>示例 1</strong></p>

<pre><code><strong>输入：</strong>
shorter = 1
longer = 2
k = 3
<strong>输出：</strong> [3,4,5,6]
<strong>解释：</strong>
可以使用 3 次 shorter，得到结果 3；使用 2 次 shorter 和 1 次 longer，得到结果 4 。以此类推，得到最终结果。</code></pre>

<p><strong>提示：</strong></p>

<ul>
	<li>0 &lt; shorter &lt;= longer</li>
	<li>0 &lt;= k &lt;= 100000</li>
</ul>
