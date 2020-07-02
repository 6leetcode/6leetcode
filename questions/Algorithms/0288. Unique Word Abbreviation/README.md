### [Unique Word Abbreviation](https://leetcode.com/problems/unique-word-abbreviation)

<p>An abbreviation of a word follows the form &lt;first letter&gt;&lt;number&gt;&lt;last letter&gt;. Below are some examples of word abbreviations:</p>

<pre>
a) it                      --&gt; it    (no abbreviation)

     1
     &darr;
b) d|o|g                   --&gt; d1g

              1    1  1
     1---5----0----5--8
     &darr;   &darr;    &darr;    &darr;  &darr;    
c) i|nternationalizatio|n  --&gt; i18n

              1
     1---5----0
&nbsp;    &darr;   &darr;    &darr;
d) l|ocalizatio|n          --&gt; l10n

Additionally for any string s of size less than or equal to 2 their abbreviation is the same string s.
</pre>

<p>Find whether its abbreviation is unique in the dictionary. A word&#39;s abbreviation is called <em>unique</em> if any of the following conditions is met:</p>

<ul>
	<li>There is no word in <code>dictionary</code>&nbsp;such that their abbreviation is equal to the abbreviation of <code>word</code>.</li>
	<li>Else, for all words in <code>dictionary</code> such that their abbreviation is equal to the abbreviation of <code>word</code>&nbsp;those words are equal to <code>word</code>.</li>
</ul>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>

<pre>
<strong>Input</strong>
[&quot;ValidWordAbbr&quot;,&quot;isUnique&quot;,&quot;isUnique&quot;,&quot;isUnique&quot;,&quot;isUnique&quot;]
[[[&quot;deer&quot;,&quot;door&quot;,&quot;cake&quot;,&quot;card&quot;]],[&quot;dear&quot;],[&quot;cart&quot;],[&quot;cane&quot;],[&quot;make&quot;]]
<strong>Output</strong>
[null,false,true,false,true]

<strong>Explanation</strong>
ValidWordAbbr validWordAbbr = new ValidWordAbbr([&quot;deer&quot;, &quot;door&quot;, &quot;cake&quot;, &quot;card&quot;]);
validWordAbbr.isUnique(&quot;dear&quot;); // return False
validWordAbbr.isUnique(&quot;cart&quot;); // return True
validWordAbbr.isUnique(&quot;cane&quot;); // return False
validWordAbbr.isUnique(&quot;make&quot;); // return True
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li>Each word will only consist of lowercase English characters.</li>
</ul>
