### [生存人数](https://leetcode-cn.com/problems/living-people-lcci)

<p>给定 N 个人的出生年份和死亡年份，第 <code>i</code> 个人的出生年份为 <code>birth[i]</code>，死亡年份为 <code>death[i]</code>，实现一个方法以计算生存人数最多的年份。</p>

<p>你可以假设所有人都出生于 1900 年至 2000 年（含 1900 和 2000 ）之间。如果一个人在某一年的任意时期处于生存状态，那么他应该被纳入那一年的统计中。例如，生于 1908 年、死于 1909 年的人应当被列入 1908 年和 1909 年的计数。</p>

<p>如果有多个年份生存人数相同且均为最大值，输出其中最小的年份。</p>

<p> </p>

<p><strong>示例：</strong></p>

<pre>
<strong>输入：</strong>
birth = {1900, 1901, 1950}
death = {1948, 1951, 2000}
<strong>输出：</strong> 1901
</pre>

<p> </p>

<p><strong>提示：</strong></p>

<ul>
	<li><code>0 < birth.length == death.length <= 10000</code></li>
	<li><code>birth[i] <= death[i]</code></li>
</ul>
