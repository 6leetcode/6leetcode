### [Encode String with Shortest Length](https://leetcode.com/problems/encode-string-with-shortest-length)

<p>Given a <b>non-empty</b> string, encode the string such that its encoded length is the shortest.</p>

<p>The encoding rule is: <code>k[encoded_string]</code>, where the <i>encoded_string</i> inside the square brackets is being repeated exactly <i>k</i> times.</p>

<p><b>Note:</b></p>

<ol>
	<li><i>k</i> will be a positive integer and encoded string will not be empty or have extra space.</li>
	<li>You may assume that the input string contains only lowercase English letters. The string&#39;s length is at most 160.</li>
	<li>If an encoding process does not make the string shorter, then do not encode it. If there are several solutions, return any of them is fine.</li>
</ol>

<p>&nbsp;</p>

<p><b>Example 1:</b></p>

<pre>
Input: &quot;aaa&quot;
Output: &quot;aaa&quot;
Explanation: There is no way to encode it such that it is shorter than the input string, so we do not encode it.
</pre>

<p>&nbsp;</p>

<p><b>Example 2:</b></p>

<pre>
Input: &quot;aaaaa&quot;
Output: &quot;5[a]&quot;
Explanation: &quot;5[a]&quot; is shorter than &quot;aaaaa&quot; by 1 character.
</pre>

<p>&nbsp;</p>

<p><b>Example 3:</b></p>

<pre>
Input: &quot;aaaaaaaaaa&quot;
Output: &quot;10[a]&quot;
Explanation: &quot;a9[a]&quot; or &quot;9[a]a&quot; are also valid solutions, both of them have the same length = 5, which is the same as &quot;10[a]&quot;.
</pre>

<p>&nbsp;</p>

<p><b>Example 4:</b></p>

<pre>
Input: &quot;aabcaabcd&quot;
Output: &quot;2[aabc]d&quot;
Explanation: &quot;aabc&quot; occurs twice, so one answer can be &quot;2[aabc]d&quot;.
</pre>

<p>&nbsp;</p>

<p><b>Example 5:</b></p>

<pre>
Input: &quot;abbbabbbcabbbabbbc&quot;
Output: &quot;2[2[abbb]c]&quot;
Explanation: &quot;abbbabbbc&quot; occurs twice, but &quot;abbbabbbc&quot; can also be encoded to &quot;2[abbb]c&quot;, so one answer can be &quot;2[2[abbb]c]&quot;.
</pre>

<p>&nbsp;</p>
