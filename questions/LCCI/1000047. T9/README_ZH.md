### [T9键盘](https://leetcode-cn.com/problems/t9-lcci)

<p>在老式手机上，用户通过数字键盘输入，手机将提供与这些数字相匹配的单词列表。每个数字映射到0至4个字母。给定一个数字序列，实现一个算法来返回匹配单词的列表。你会得到一张含有有效单词的列表。映射如下图所示：</p>

<p><img src="https://assets.leetcode-cn.com/aliyun-lc-upload/original_images/17_telephone_keypad.png" style="width: 200px;"></p>

<p><strong>示例 1:</strong></p>

<pre><strong>输入:</strong> num = &quot;8733&quot;, words = [&quot;tree&quot;, &quot;used&quot;]
<strong>输出:</strong> [&quot;tree&quot;, &quot;used&quot;]
</pre>

<p><strong>示例 2:</strong></p>

<pre><strong>输入:</strong> num = &quot;2&quot;, words = [&quot;a&quot;, &quot;b&quot;, &quot;c&quot;, &quot;d&quot;]
<strong>输出:</strong> [&quot;a&quot;, &quot;b&quot;, &quot;c&quot;]</pre>

<p>提示：</p>

<ul>
	<li><code>num.length &lt;= 1000</code></li>
	<li><code>words.length &lt;= 500</code></li>
	<li><code>words[i].length == num.length</code></li>
	<li><code>num</code>中不会出现 0, 1 这两个数字</li>
</ul>
