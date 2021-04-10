### [Minimum Index Sum of Two Lists](https://leetcode.com/problems/minimum-index-sum-of-two-lists)

<p>Suppose Andy and Doris want to choose a restaurant for dinner, and they both have a list of favorite restaurants represented by strings.</p>

<p>You need to help them find out their <b>common interest</b> with the <b>least list index sum</b>. If there is a choice tie between answers, output all of them with no order requirement. You could assume there always exists an answer.</p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>

<pre>
<strong>Input:</strong> list1 = [&quot;Shogun&quot;,&quot;Tapioca Express&quot;,&quot;Burger King&quot;,&quot;KFC&quot;], list2 = [&quot;Piatti&quot;,&quot;The Grill at Torrey Pines&quot;,&quot;Hungry Hunter Steakhouse&quot;,&quot;Shogun&quot;]
<strong>Output:</strong> [&quot;Shogun&quot;]
<strong>Explanation:</strong> The only restaurant they both like is &quot;Shogun&quot;.
</pre>

<p><strong>Example 2:</strong></p>

<pre>
<strong>Input:</strong> list1 = [&quot;Shogun&quot;,&quot;Tapioca Express&quot;,&quot;Burger King&quot;,&quot;KFC&quot;], list2 = [&quot;KFC&quot;,&quot;Shogun&quot;,&quot;Burger King&quot;]
<strong>Output:</strong> [&quot;Shogun&quot;]
<strong>Explanation:</strong> The restaurant they both like and have the least index sum is &quot;Shogun&quot; with index sum 1 (0+1).
</pre>

<p><strong>Example 3:</strong></p>

<pre>
<strong>Input:</strong> list1 = [&quot;Shogun&quot;,&quot;Tapioca Express&quot;,&quot;Burger King&quot;,&quot;KFC&quot;], list2 = [&quot;KFC&quot;,&quot;Burger King&quot;,&quot;Tapioca Express&quot;,&quot;Shogun&quot;]
<strong>Output:</strong> [&quot;KFC&quot;,&quot;Burger King&quot;,&quot;Tapioca Express&quot;,&quot;Shogun&quot;]
</pre>

<p><strong>Example 4:</strong></p>

<pre>
<strong>Input:</strong> list1 = [&quot;Shogun&quot;,&quot;Tapioca Express&quot;,&quot;Burger King&quot;,&quot;KFC&quot;], list2 = [&quot;KNN&quot;,&quot;KFC&quot;,&quot;Burger King&quot;,&quot;Tapioca Express&quot;,&quot;Shogun&quot;]
<strong>Output:</strong> [&quot;KFC&quot;,&quot;Burger King&quot;,&quot;Tapioca Express&quot;,&quot;Shogun&quot;]
</pre>

<p><strong>Example 5:</strong></p>

<pre>
<strong>Input:</strong> list1 = [&quot;KFC&quot;], list2 = [&quot;KFC&quot;]
<strong>Output:</strong> [&quot;KFC&quot;]
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= list1.length, list2.length &lt;= 1000</code></li>
	<li><code>1 &lt;= list1[i].length, list2[i].length &lt;= 30</code></li>
	<li><code>list1[i]</code> and <code>list2[i]</code> consist of spaces <code>&#39; &#39;</code> and English letters.</li>
	<li>All the stings of <code>list1</code> are <strong>unique</strong>.</li>
	<li>All the stings of <code>list2</code>&nbsp;are <strong>unique</strong>.</li>
</ul>
