### [根据身高重建队列](https://leetcode-cn.com/problems/queue-reconstruction-by-height)

<p>假设有打乱顺序的一群人站成一个队列。 每个人由一个整数对 <code>(h, k)</code> 表示，其中 <code>h</code> 是这个人的身高，<code>k</code> 是应该排在这个人前面且身高大于或等于 <code>h</code> 的人数。 例如：[5,2] 表示前面应该有 2 个身高大于等于 5 的人，而 [5,0] 表示前面不应该存在身高大于等于 5 的人。</p>

<p>编写一个算法，根据每个人的身高 <code>h</code> 重建这个队列，使之满足每个整数对 <code>(h, k)</code> 中对人数 <code>k</code> 的要求。</p>

<ul>
</ul>

<p><strong>示例：</strong></p>

<pre>
<strong>输入：</strong>[[7,0], [4,4], [7,1], [5,0], [6,1], [5,2]]
<strong>输出：</strong>[[5,0], [7,0], [5,2], [6,1], [4,4], [7,1]]</pre>

<p> </p>

<p><strong>提示：</strong></p>

<ul>
	<li>总人数少于 1100 人。</li>
</ul>
