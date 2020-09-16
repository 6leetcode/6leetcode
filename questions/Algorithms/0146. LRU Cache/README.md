### [LRU Cache](https://leetcode.com/problems/lru-cache)

<p>Design and implement a data structure for <a href="https://en.wikipedia.org/wiki/Cache_replacement_policies#LRU" target="_blank">Least Recently Used (LRU) cache</a>. It should support the following operations: <code>get</code> and <code>put</code>.</p>

<p><code>get(key)</code> - Get the value (will always be positive) of the key if the key exists in the cache, otherwise return -1.<br />
<code>put(key, value)</code> - Set or insert the value if the key is not already present. When the cache reached its capacity, it should invalidate the least recently used item before inserting a new item.</p>

<p>The cache is initialized with a <strong>positive</strong> capacity.</p>

<p><b>Follow up:</b><br />
Could you do both operations in <code>O(1)</code> time complexity?</p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>

<pre>
<strong>Input</strong>
[&quot;LRUCache&quot;, &quot;put&quot;, &quot;put&quot;, &quot;get&quot;, &quot;put&quot;, &quot;get&quot;, &quot;put&quot;, &quot;get&quot;, &quot;get&quot;, &quot;get&quot;]
[[2], [1, 1], [2, 2], [1], [3, 3], [2], [4, 4], [1], [3], [4]]
<strong>Output</strong>
[null, null, null, 1, null, -1, null, -1, 3, 4]

<strong>Explanation</strong>
LRUCache lRUCache = new LRUCache(2);
lRUCache.put(1, 1);
lRUCache.put(2, 2);
lRUCache.get(1);    // return 1
lRUCache.put(3, 3); // evicts key 2
lRUCache.get(2);    // returns -1 (not found)
lRUCache.put(4, 4); // evicts key 1
lRUCache.get(1);    // return -1 (not found)
lRUCache.get(3);    // return 3
lRUCache.get(4);    // return 4
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= capacity &lt;= 3000</code></li>
	<li><code>0 &lt;= key &lt;= 3000</code></li>
	<li><code>0 &lt;= value &lt;= 10<sup>4</sup></code></li>
	<li>At most <code>3 * 10<sup>4</sup></code> calls will be made to <code>get</code> and <code>put</code>.</li>
</ul>
