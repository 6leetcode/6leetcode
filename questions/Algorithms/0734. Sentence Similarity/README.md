### [Sentence Similarity](https://leetcode.com/problems/sentence-similarity)

<p>Given two sentences <code>words1, words2</code> (each represented as an array of strings), and a list of similar word pairs <code>pairs</code>, determine if two sentences are similar.</p>

<p>For example, &quot;great acting skills&quot; and &quot;fine drama talent&quot; are similar, if the similar word pairs are <code>pairs = [[&quot;great&quot;, &quot;fine&quot;], [&quot;acting&quot;,&quot;drama&quot;], [&quot;skills&quot;,&quot;talent&quot;]]</code>.</p>

<p>Note that the similarity relation is not transitive. For example, if &quot;great&quot; and &quot;fine&quot; are similar, and &quot;fine&quot; and &quot;good&quot; are similar, &quot;great&quot; and &quot;good&quot; are <b>not</b> necessarily similar.</p>

<p>However, similarity is symmetric. For example, &quot;great&quot; and &quot;fine&quot; being similar is the same as &quot;fine&quot; and &quot;great&quot; being similar.</p>

<p>Also, a word is always similar with itself. For example, the sentences <code>words1 = [&quot;great&quot;], words2 = [&quot;great&quot;], pairs = []</code> are similar, even though there are no specified similar word pairs.</p>

<p>Finally, sentences can only be similar if they have the same number of words. So a sentence like <code>words1 = [&quot;great&quot;]</code> can never be similar to <code>words2 = [&quot;doubleplus&quot;,&quot;good&quot;]</code>.</p>

<p><b>Note:</b></p>

<ul>
	<li>The length of <code>words1</code> and <code>words2</code> will not exceed <code>1000</code>.</li>
	<li>The length of <code>pairs</code> will not exceed <code>2000</code>.</li>
	<li>The length of each <code>pairs[i]</code> will be <code>2</code>.</li>
	<li>The length of each <code>words[i]</code> and <code>pairs[i][j]</code> will be in the range <code>[1, 20]</code>.</li>
</ul>

<p>&nbsp;</p>
