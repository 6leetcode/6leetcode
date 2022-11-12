### [判断路径是否相交](https://leetcode-cn.com/problems/path-crossing)

<p>给你一个字符串 <code>path</code>，其中 <code>path[i]</code> 的值可以是 <code>'N'</code>、<code>'S'</code>、<code>'E'</code> 或者 <code>'W'</code>，分别表示向北、向南、向东、向西移动一个单位。</p>

<p>你从二维平面上的原点 <code>(0, 0)</code> 处开始出发，按 <code>path</code> 所指示的路径行走。</p>

<p>如果路径在任何位置上与自身相交，也就是走到之前已经走过的位置，请返回 <code>true</code> ；否则，返回 <code>false</code> 。</p>

<p>&nbsp;</p>

<p><strong>示例 1：</strong></p>

<p><img alt="" src="https://assets.leetcode-cn.com/aliyun-lc-upload/uploads/2020/06/28/screen-shot-2020-06-10-at-123929-pm.png" style="height: 358px; width: 400px;" /></p>

<pre>
<strong>输入：</strong>path = "NES"
<strong>输出：</strong>false 
<strong>解释：</strong>该路径没有在任何位置相交。</pre>

<p><strong>示例 2：</strong></p>

<p><img alt="" src="https://assets.leetcode-cn.com/aliyun-lc-upload/uploads/2020/06/28/screen-shot-2020-06-10-at-123843-pm.png" style="height: 339px; width: 400px;" /></p>

<pre>
<strong>输入：</strong>path = "NESWW"
<strong>输出：</strong>true
<strong>解释：</strong>该路径经过原点两次。</pre>

<p>&nbsp;</p>

<p><strong>提示：</strong></p>

<ul>
	<li><code>1 &lt;= path.length &lt;= 10<sup>4</sup></code></li>
	<li><code>path[i]</code> 为 <code>'N'</code>、<code>'S'</code>、<code>'E'</code> 或 <code>'W'</code></li>
</ul>
