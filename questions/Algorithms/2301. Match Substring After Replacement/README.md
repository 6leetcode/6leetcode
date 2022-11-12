### [Match Substring After Replacement](https://leetcode.com/problems/match-substring-after-replacement)

<p>You are given two strings <code>s</code> and <code>sub</code>. You are also given a 2D character array <code>mappings</code> where <code>mappings[i] = [old<sub>i</sub>, new<sub>i</sub>]</code> indicates that you may perform the following operation <strong>any</strong> number of times:</p>

<ul>
	<li><strong>Replace</strong> a character <code>old<sub>i</sub></code> of <code>sub</code> with <code>new<sub>i</sub></code>.</li>
</ul>

<p>Each character in <code>sub</code> <strong>cannot</strong> be replaced more than once.</p>

<p>Return <code>true</code><em> if it is possible to make </em><code>sub</code><em> a substring of </em><code>s</code><em> by replacing zero or more characters according to </em><code>mappings</code>. Otherwise, return <code>false</code>.</p>

<p>A <strong>substring</strong> is a contiguous non-empty sequence of characters within a string.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre>
<strong>Input:</strong> s = &quot;fool3e7bar&quot;, sub = &quot;leet&quot;, mappings = [[&quot;e&quot;,&quot;3&quot;],[&quot;t&quot;,&quot;7&quot;],[&quot;t&quot;,&quot;8&quot;]]
<strong>Output:</strong> true
<strong>Explanation:</strong> Replace the first &#39;e&#39; in sub with &#39;3&#39; and &#39;t&#39; in sub with &#39;7&#39;.
Now sub = &quot;l3e7&quot; is a substring of s, so we return true.</pre>

<p><strong class="example">Example 2:</strong></p>

<pre>
<strong>Input:</strong> s = &quot;fooleetbar&quot;, sub = &quot;f00l&quot;, mappings = [[&quot;o&quot;,&quot;0&quot;]]
<strong>Output:</strong> false
<strong>Explanation:</strong> The string &quot;f00l&quot; is not a substring of s and no replacements can be made.
Note that we cannot replace &#39;0&#39; with &#39;o&#39;.
</pre>

<p><strong class="example">Example 3:</strong></p>

<pre>
<strong>Input:</strong> s = &quot;Fool33tbaR&quot;, sub = &quot;leetd&quot;, mappings = [[&quot;e&quot;,&quot;3&quot;],[&quot;t&quot;,&quot;7&quot;],[&quot;t&quot;,&quot;8&quot;],[&quot;d&quot;,&quot;b&quot;],[&quot;p&quot;,&quot;b&quot;]]
<strong>Output:</strong> true
<strong>Explanation:</strong> Replace the first and second &#39;e&#39; in sub with &#39;3&#39; and &#39;d&#39; in sub with &#39;b&#39;.
Now sub = &quot;l33tb&quot; is a substring of s, so we return true.

</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= sub.length &lt;= s.length &lt;= 5000</code></li>
	<li><code>0 &lt;= mappings.length &lt;= 1000</code></li>
	<li><code>mappings[i].length == 2</code></li>
	<li><code>old<sub>i</sub> != new<sub>i</sub></code></li>
	<li><code>s</code> and <code>sub</code> consist of uppercase and lowercase English letters and digits.</li>
	<li><code>old<sub>i</sub></code> and <code>new<sub>i</sub></code> are either uppercase or lowercase English letters or digits.</li>
</ul>
