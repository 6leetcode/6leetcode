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
</pre>

<p>Assume you have a dictionary and given a word, find whether its abbreviation is unique in the dictionary. A word&#39;s abbreviation is unique if no <i>other</i> word from the dictionary has the same abbreviation.</p>

<p><strong>Example:</strong></p>

<pre>
Given dictionary = [ &quot;deer&quot;, &quot;door&quot;, &quot;cake&quot;, &quot;card&quot; ]

isUnique(&quot;dear&quot;) -&gt; <code>false</code>
isUnique(&quot;cart&quot;) -&gt; <code>true</code>
isUnique(&quot;cane&quot;) -&gt; <code>false</code>
isUnique(&quot;make&quot;) -&gt; <code>true</code>
</pre>
