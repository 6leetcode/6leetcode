### [Shortest Word Distance III](https://leetcode.com/problems/shortest-word-distance-iii)

<p>Given an array of strings <code>wordsDict</code> and two strings that already exist in the array <code>word1</code> and <code>word2</code>, return <em>the shortest distance between these two words in the list</em>.</p>

<p><strong>Note</strong> that <code>word1</code> and <code>word2</code> may be the same. It is guaranteed that they represent <strong>two individual words</strong> in the list.</p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>
<pre><strong>Input:</strong> wordsDict = ["practice", "makes", "perfect", "coding", "makes"], word1 = "makes", word2 = "coding"
<strong>Output:</strong> 1
</pre><p><strong>Example 2:</strong></p>
<pre><strong>Input:</strong> wordsDict = ["practice", "makes", "perfect", "coding", "makes"], word1 = "makes", word2 = "makes"
<strong>Output:</strong> 3
</pre>
<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= wordsDict.length &lt;= 3 * 10<sup>4</sup></code></li>
	<li><code>1 &lt;= wordsDict[i].length &lt;= 10</code></li>
	<li><code>wordsDict[i]</code> consists of lowercase English letters.</li>
	<li><code>word1</code> and <code>word2</code> are in <code>wordsDict</code>.</li>
</ul>
