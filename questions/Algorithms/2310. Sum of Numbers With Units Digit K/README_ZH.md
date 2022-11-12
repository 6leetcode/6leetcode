### [个位数字为 K 的整数之和](https://leetcode-cn.com/problems/sum-of-numbers-with-units-digit-k)

<p>给你两个整数 <code>num</code> 和 <code>k</code> ，考虑具有以下属性的正整数多重集：</p>

<ul>
	<li>每个整数个位数字都是 <code>k</code> 。</li>
	<li>所有整数之和是 <code>num</code> 。</li>
</ul>

<p>返回该多重集的最小大小，如果不存在这样的多重集，返回<em> </em><code>-1</code> 。</p>

<p>注意：</p>

<ul>
	<li>多重集与集合类似，但多重集可以包含多个同一整数，空多重集的和为 <code>0</code> 。</li>
	<li><strong>个位数字</strong> 是数字最右边的数位。</li>
</ul>

<p>&nbsp;</p>

<p><strong>示例 1：</strong></p>

<pre>
<strong>输入：</strong>num = 58, k = 9
<strong>输出：</strong>2
<strong>解释：</strong>
多重集 [9,49] 满足题目条件，和为 58 且每个整数的个位数字是 9 。
另一个满足条件的多重集是 [19,39] 。
可以证明 2 是满足题目条件的多重集的最小长度。
</pre>

<p><strong>示例 2：</strong></p>

<pre>
<strong>输入：</strong>num = 37, k = 2
<strong>输出：</strong>-1
<strong>解释：</strong>个位数字为 2 的整数无法相加得到 37 。</pre>

<p><strong>示例 3：</strong></p>

<pre>
<strong>输入：</strong>num = 0, k = 7
<strong>输出：</strong>0
<strong>解释：</strong>空多重集的和为 0 。
</pre>

<p>&nbsp;</p>

<p><strong>提示：</strong></p>

<ul>
	<li><code>0 &lt;= num &lt;= 3000</code></li>
	<li><code>0 &lt;= k &lt;= 9</code></li>
</ul>
