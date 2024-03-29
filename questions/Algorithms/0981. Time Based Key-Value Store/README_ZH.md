### [基于时间的键值存储](https://leetcode-cn.com/problems/time-based-key-value-store)

<p>设计一个基于时间的键值数据结构，该结构可以在不同时间戳存储对应同一个键的多个值，并针对特定时间戳检索键对应的值。</p>

<p>实现 <code>TimeMap</code> 类：</p>

<ul>
	<li><code>TimeMap()</code> 初始化数据结构对象</li>
	<li><code>void set(String key, String value, int timestamp)</code> 存储键 <code>key</code>、值 <code>value</code>，以及给定的时间戳 <code>timestamp</code>。</li>
	<li><code>String get(String key, int timestamp)</code>
	<ul>
		<li>返回先前调用 <code>set(key, value, timestamp_prev)</code> 所存储的值，其中 <code>timestamp_prev <= timestamp</code> 。</li>
		<li>如果有多个这样的值，则返回对应最大的  <code>timestamp_prev</code> 的那个值。</li>
		<li>如果没有值，则返回空字符串（<code>""</code>）。</li>
	</ul>
	</li>
</ul>
 

<p><strong>示例：</strong></p>

<pre>
<strong>输入：</strong>
["TimeMap", "set", "get", "get", "set", "get", "get"]
[[], ["foo", "bar", 1], ["foo", 1], ["foo", 3], ["foo", "bar2", 4], ["foo", 4], ["foo", 5]]
<strong>输出：</strong>
[null, null, "bar", "bar", null, "bar2", "bar2"]

<strong>解释：</strong>
TimeMap timeMap = new TimeMap();
timeMap.set("foo", "bar", 1);  // 存储键 "foo" 和值 "bar" ，时间戳 timestamp = 1   
timeMap.get("foo", 1);         // 返回 "bar"
timeMap.get("foo", 3);         // 返回 "bar", 因为在时间戳 3 和时间戳 2 处没有对应 "foo" 的值，所以唯一的值位于时间戳 1 处（即 "bar"） 。
timeMap.set("foo", "bar2", 4); // 存储键 "foo" 和值 "bar2" ，时间戳 timestamp = 4  
timeMap.get("foo", 4);         // 返回 "bar2"
timeMap.get("foo", 5);         // 返回 "bar2"
</pre>

<p> </p>

<p><strong>提示：</strong></p>

<ul>
	<li><code>1 <= key.length, value.length <= 100</code></li>
	<li><code>key</code> 和 <code>value</code> 由小写英文字母和数字组成</li>
	<li><code>1 <= timestamp <= 10<sup>7</sup></code></li>
	<li><code>set</code> 操作中的时间戳 <code>timestamp</code> 都是严格递增的</li>
	<li>最多调用 <code>set</code> 和 <code>get</code> 操作 <code>2 * 10<sup>5</sup></code> 次</li>
</ul>
