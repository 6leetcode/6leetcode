### [相隔为 1 的编辑距离](https://leetcode-cn.com/problems/one-edit-distance)

<p>给定两个字符串&nbsp;<strong><em>s </em></strong>和<strong><em> t</em></strong>，判断他们的编辑距离是否为 1。</p>

<p><strong>注意：</strong></p>

<p>满足编辑距离等于 1 有三种可能的情形：</p>

<ol>
	<li>往 <em><strong>s</strong></em>&nbsp;中插入一个字符得到 <em><strong>t</strong></em></li>
	<li>从<em><strong> s</strong></em>&nbsp;中删除一个字符得到 <em><strong>t</strong></em></li>
	<li>在 <em><strong>s</strong></em>&nbsp;中替换一个字符得到 <em><strong>t</strong></em></li>
</ol>

<p><strong>示例 1：</strong></p>

<pre><strong>输入: </strong><strong><em>s</em></strong> = &quot;ab&quot;, <strong><em>t</em></strong> = &quot;acb&quot;
<strong>输出: </strong>true
<strong>解释: </strong>可以将 &#39;c&#39; 插入字符串 <strong><em>s</em></strong>&nbsp;来得到 <em><strong>t</strong></em>。
</pre>

<p><strong>示例 2:</strong></p>

<pre><strong>输入: </strong><strong><em>s</em></strong> = &quot;cab&quot;, <strong><em>t</em></strong> = &quot;ad&quot;
<strong>输出: </strong>false
<strong>解释: </strong>无法通过 1 步操作使 <em><strong>s</strong></em> 变为 <em><strong>t</strong></em>。</pre>

<p><strong>示例 3:</strong></p>

<pre><strong>输入: <em>s</em></strong> = &quot;1203&quot;, <strong><em>t</em></strong> = &quot;1213&quot;
<strong>输出: </strong>true
<strong>解释: </strong>可以将字符串 <strong><em>s</em></strong>&nbsp;中的 &#39;0&#39; 替换为 &#39;1&#39; 来得到 <em><strong>t</strong></em>。</pre>
