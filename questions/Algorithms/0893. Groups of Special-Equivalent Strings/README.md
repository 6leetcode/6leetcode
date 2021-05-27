### [Groups of Special-Equivalent Strings](https://leetcode.com/problems/groups-of-special-equivalent-strings)

<p>You are given an array <code>words</code> of strings.</p>

<p>A <em>move&nbsp;onto </em><code>s</code> consists of swapping any two even indexed characters of <code>s</code>, or any two odd indexed characters of <code>s</code>.</p>

<p>Two strings <code>s</code> and <code>t</code> are&nbsp;<em>special-equivalent</em>&nbsp;if after any number of <em>moves onto </em><code>s</code>, <code>s == t</code>.</p>

<p>For example, <code>s = &quot;zzxy&quot;</code> and <code>t = &quot;xyzz&quot;</code> are special-equivalent because we may make the moves <code>&quot;zzxy&quot; -&gt; &quot;xzzy&quot; -&gt; &quot;xyzz&quot;</code>&nbsp;that swap <code>s[0]</code> and <code>s[2]</code>, then <code>s[1]</code> and <code>s[3]</code>.</p>

<p>Now, a <em>group of special-equivalent strings from </em><code>words</code>&nbsp;is a non-empty subset of&nbsp;<code>words</code> such that:</p>

<ol>
	<li>Every pair of strings in the group are special equivalent, and;</li>
	<li>The group is the largest size possible (ie., there isn&#39;t a string <code>s</code> not in the group such that <code>s</code> is special equivalent to every string in the group)</li>
</ol>

<p>Return the number of groups of special-equivalent strings from <code>words</code>.</p>

<div>&nbsp;</div>

<div>
<p><strong>Example 1:</strong></p>

<pre>
<strong>Input: </strong>words = <span id="example-input-1-1">[&quot;abcd&quot;,&quot;cdab&quot;,&quot;cbad&quot;,&quot;xyzz&quot;,&quot;zzxy&quot;,&quot;zzyx&quot;]</span>
<strong>Output: </strong><span id="example-output-1">3</span>
<strong>Explanation: </strong>
One group is [&quot;abcd&quot;, &quot;cdab&quot;, &quot;cbad&quot;], since they are all pairwise special equivalent, and none of the other strings are all pairwise special equivalent to these.

The other two groups are [&quot;xyzz&quot;, &quot;zzxy&quot;] and [&quot;zzyx&quot;].  Note that in particular, &quot;zzxy&quot; is not special equivalent to &quot;zzyx&quot;.
</pre>

<div>
<p><strong>Example 2:</strong></p>

<pre>
<strong>Input: </strong>words = <span id="example-input-2-1">[&quot;abc&quot;,&quot;acb&quot;,&quot;bac&quot;,&quot;bca&quot;,&quot;cab&quot;,&quot;cba&quot;]</span>
<strong>Output: </strong><span id="example-output-2">3</span></pre>

<p>&nbsp;</p>
</div>
</div>

<div>
<div>
<div>
<div>
<p><strong>Note:</strong></p>

<ul>
	<li><code>1 &lt;= words.length &lt;= 1000</code></li>
	<li><code>1 &lt;= words[i].length &lt;= 20</code></li>
	<li>All <code>words[i]</code> have the same length.</li>
	<li>All <code>words[i]</code> consist of only lowercase letters.</li>
</ul>
</div>
</div>
</div>
</div>
