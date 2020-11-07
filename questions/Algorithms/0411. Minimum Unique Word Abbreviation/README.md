### [Minimum Unique Word Abbreviation](https://leetcode.com/problems/minimum-unique-word-abbreviation)

<p>A string such as <code>&quot;word&quot;</code> contains the following abbreviations:</p>

<pre>
[&quot;word&quot;, &quot;1ord&quot;, &quot;w1rd&quot;, &quot;wo1d&quot;, &quot;wor1&quot;, &quot;2rd&quot;, &quot;w2d&quot;, &quot;wo2&quot;, &quot;1o1d&quot;, &quot;1or1&quot;, &quot;w1r1&quot;, &quot;1o2&quot;, &quot;2r1&quot;, &quot;3d&quot;, &quot;w3&quot;, &quot;4&quot;]
</pre>

<p>Given a target string and a set of strings in a dictionary, find an abbreviation of this target string with the <b><i>smallest possible</i></b> length such that it does not conflict with abbreviations of the strings in the dictionary.</p>

<p>Each <b>number</b> or letter in the abbreviation is considered length = 1. For example, the abbreviation &quot;a32bc&quot; has length = 4.</p>

<p><b>Examples:</b></p>

<pre>
&quot;apple&quot;, [&quot;blade&quot;] -&gt; &quot;a4&quot; (because &quot;5&quot; or &quot;4e&quot; conflicts with &quot;blade&quot;)

&quot;apple&quot;, [&quot;plain&quot;, &quot;amber&quot;, &quot;blade&quot;] -&gt; &quot;1p3&quot; (other valid answers include &quot;ap3&quot;, &quot;a3e&quot;, &quot;2p2&quot;, &quot;3le&quot;, &quot;3l1&quot;).
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li>In the case of multiple answers as shown in the second example below, you may return any one of them.</li>
	<li>Assume length of target string = <b>m</b>, and dictionary size = <b>n</b>. You may assume that <b>m &le; 21</b>, <b>n &le; 1000</b>, and <b>log<sub>2</sub>(n) + m &le; 20</b>.</li>
</ul>
