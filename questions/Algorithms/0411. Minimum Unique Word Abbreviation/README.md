### [Minimum Unique Word Abbreviation](https://leetcode.com/problems/minimum-unique-word-abbreviation)

<p>A string such as <code>"word"</code> contains the following abbreviations:</p>

<pre>["word", "1ord", "w1rd", "wo1d", "wor1", "2rd", "w2d", "wo2", "1o1d", "1or1", "w1r1", "1o2", "2r1", "3d", "w3", "4"]
</pre>

<p>Given a target string and a set of strings in a dictionary, find an abbreviation of this target string with the <b><i>smallest possible</i></b> length such that it does not conflict with abbreviations of the strings in the dictionary. </p>

<p>Each <b>number</b> or letter in the abbreviation is considered length = 1. For example, the abbreviation "a32bc" has length = 4.</p>

<p><b>Note:</b><br />
<ul>
<li>In the case of multiple answers as shown in the second example below, you may return any one of them.</li>
<li>Assume length of target string = <b>m</b>, and dictionary size = <b>n</b>. You may assume that <b>m &le; 21</b>, <b>n &le; 1000</b>, and <b>log<sub>2</sub>(n) + m</sup> &le; 20</b>.</li>
</ul>
</p>

<p><b>Examples:</b><br />
<pre>
"apple", ["blade"] -> "a4" (because "5" or "4e" conflicts with "blade")

"apple", ["plain", "amber", "blade"] -> "1p3" (other valid answers include "ap3", "a3e", "2p2", "3le", "3l1").
</pre>
</p>