### [按受欢迎程度排列功能](https://leetcode-cn.com/problems/sort-features-by-popularity)

<p>给定一个字符串数组 <code>features</code> ，其中 <code>features[i]</code> 是一个单词，描述你最近参与开发的项目中一个功能的名称。你调查了用户喜欢哪些功能。另给定一个字符串数组 <code>responses</code>，其中 <code>responses[i]</code> 是一个包含以空格分隔的一系列单词的字符串。</p>

<p>你想要按照受欢迎程度排列这些功能。 严格地说，令 <code>appearances(word)</code> 是满足 <code>responses[i]</code> 中包含单词 <code>word</code> 的 <code>i</code> 的个数，则当 <code>appearances(features[x]) > appearances(features[y])</code> 时，第 <code>x</code> 个功能比第 <code>y</code> 个功能更受欢迎。</p>

<p>返回一个数组 <code>sortedFeatures</code> ，包含按受欢迎程度排列的功能名称。当第 <code>x</code>  个功能和第 <code>y</code> 个功能的受欢迎程度相同且 <code>x < y</code> 时，你应当将第 <code>x</code> 个功能放在第 <code>y</code> 个功能之前。</p>

<p> </p>

<p><b>示例 1：</b></p>

<pre>
<strong>输入</strong><b>：</b>features = ["cooler","lock","touch"], responses = ["i like cooler cooler","lock touch cool","locker like touch"]
<strong>输出</strong><b>：</b>["touch","cooler","lock"]
<strong>解释</strong><b>：</b>appearances("cooler") = 1，appearances("lock") = 1，appearances("touch") = 2。由于 "cooler" 和 "lock" 都出现了 1 次，且 "cooler" 在原数组的前面，所以 "cooler" 也应该在结果数组的前面。
</pre>

<p><b>示例 2：</b></p>

<pre>
<strong>输入</strong><b>：</b>features = ["a","aa","b","c"], responses = ["a","a aa","a a a a a","b a"]
<strong>输出</strong><b>：</b>["a","aa","b","c"]
</pre>

<p> </p>

<p><b>提示：</b></p>

<ul>
	<li><code>1 <= features.length <= 10<sup>4</sup></code></li>
	<li><code>1 <= features[i].length <= 10</code></li>
	<li><code>features</code> 不包含重复项。</li>
	<li><code>features[i]</code> 由小写字母构成。</li>
	<li><code>1 <= responses.length <= 10<sup>2</sup></code></li>
	<li><code>1 <= responses[i].length <= 10<sup>3</sup></code></li>
	<li><code>responses[i]</code> 由小写字母和空格组成。</li>
	<li><code>responses[i]</code> 不包含两个连续的空格。</li>
	<li><code>responses[i]</code> 没有前置或后置空格。</li>
</ul>
