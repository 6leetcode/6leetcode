### [适合打劫银行的日子](https://leetcode-cn.com/problems/find-good-days-to-rob-the-bank)

<p>你和一群强盗准备打劫银行。给你一个下标从 <strong>0</strong>&nbsp;开始的整数数组&nbsp;<code>security</code>&nbsp;，其中&nbsp;<code>security[i]</code>&nbsp;是第 <code>i</code>&nbsp;天执勤警卫的数量。日子从 <code>0</code>&nbsp;开始编号。同时给你一个整数&nbsp;<code>time</code>&nbsp;。</p>

<p>如果第 <code>i</code>&nbsp;天满足以下所有条件，我们称它为一个适合打劫银行的日子：</p>

<ul>
	<li>第 <code>i</code>&nbsp;天前和后都分别至少有 <code>time</code>&nbsp;天。</li>
	<li>第 <code>i</code>&nbsp;天前连续 <code>time</code>&nbsp;天警卫数目都是非递增的。</li>
	<li>第 <code>i</code>&nbsp;天后连续 <code>time</code>&nbsp;天警卫数目都是非递减的。</li>
</ul>

<p>更正式的，第 <code>i</code> 天是一个合适打劫银行的日子当且仅当：<code>security[i - time] &gt;= security[i - time + 1] &gt;= ... &gt;= security[i] &lt;= ... &lt;= security[i + time - 1] &lt;= security[i + time]</code>.</p>

<p>请你返回一个数组，包含 <strong>所有</strong> 适合打劫银行的日子（下标从 <strong>0</strong>&nbsp;开始）。返回的日子可以 <strong>任意</strong>&nbsp;顺序排列。</p>

<p>&nbsp;</p>

<p><strong>示例 1：</strong></p>

<pre>
<strong>输入：</strong>security = [5,3,3,3,5,6,2], time = 2
<b>输出：</b>[2,3]
<strong>解释：</strong>
第 2 天，我们有 security[0] &gt;= security[1] &gt;= security[2] &lt;= security[3] &lt;= security[4] 。
第 3 天，我们有 security[1] &gt;= security[2] &gt;= security[3] &lt;= security[4] &lt;= security[5] 。
没有其他日子符合这个条件，所以日子 2 和 3 是适合打劫银行的日子。
</pre>

<p><strong>示例 2：</strong></p>

<pre>
<b>输入：</b>security = [1,1,1,1,1], time = 0
<b>输出：</b>[0,1,2,3,4]
<strong>解释：</strong>
因为 time 等于 0 ，所以每一天都是适合打劫银行的日子，所以返回每一天。
</pre>

<p><strong>示例 3：</strong></p>

<pre>
<b>输入：</b>security = [1,2,3,4,5,6], time = 2
<b>输出：</b>[]
<strong>解释：</strong>
没有任何一天的前 2 天警卫数目是非递增的。
所以没有适合打劫银行的日子，返回空数组。
</pre>

<p>&nbsp;</p>

<p><strong>提示：</strong></p>

<ul>
	<li><code>1 &lt;= security.length &lt;= 10<sup>5</sup></code></li>
	<li><code>0 &lt;= security[i], time &lt;= 10<sup>5</sup></code></li>
</ul>
