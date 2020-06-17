### [Find Anagram Mappings](https://leetcode.com/problems/find-anagram-mappings)

<p>
Given two lists <code>A</code>and <code>B</code>, and <code>B</code> is an anagram of <code>A</code>. <code>B</code> is an anagram of <code>A</code> means <code>B</code> is made by randomizing the order of the elements in <code>A</code>.
</p><p>
We want to find an <i>index mapping</i> <code>P</code>, from <code>A</code> to <code>B</code>. A mapping <code>P[i] = j</code> means the <code>i</code>th element in <code>A</code> appears in <code>B</code> at index <code>j</code>.
</p><p>
These lists <code>A</code> and <code>B</code> may contain duplicates.  If there are multiple answers, output any of them.
</p>

<p>
For example, given
<pre>
A = [12, 28, 46, 32, 50]
B = [50, 12, 32, 46, 28]
</pre>
</p>
We should return
<pre>
[1, 4, 3, 2, 0]
</pre>
as <code>P[0] = 1</code> because the <code>0</code>th element of <code>A</code> appears at <code>B[1]</code>,
and <code>P[1] = 4</code> because the <code>1</code>st element of <code>A</code> appears at <code>B[4]</code>,
and so on.
</p>

<p><b>Note:</b><ol>
<li><code>A, B</code> have equal lengths in range <code>[1, 100]</code>.</li>
<li><code>A[i], B[i]</code> are integers in range <code>[0, 10^5]</code>.</li>
</ol></p>