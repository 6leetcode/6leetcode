### [Find Anagram Mappings](https://leetcode.com/problems/find-anagram-mappings)

<p>Given two lists <code>nums1</code> and <code>nums2</code>, and <code>nums2</code> is an anagram of <code>nums1</code>. <code>nums2</code> is an anagram of <code>nums1</code> means <code>nums2</code> is made by randomizing the order of the elements in <code>nums1</code>.</p>

<p>We want to find an <i>index mapping</i> <code>mapping</code>, from <code>nums1</code> to <code>nums2</code>. A mapping <code>mapping[i] = j</code> means the <code>i</code>th element in <code>nums1</code> appears in <code>nums2</code> at index <code>j</code>.</p>

<p>These lists <code>nums1</code> and <code>nums2</code> may contain duplicates. If there are multiple answers, output any of them.</p>

<p>For example, given</p>

<pre>
nums1 = [12, 28, 46, 32, 50]
nums2 = [50, 12, 32, 46, 28]
</pre>

<p>We should return</p>

<pre>
[1, 4, 3, 2, 0]
</pre>

<p>as <code>mapping[0] = 1</code> because the <code>0</code>th element of <code>nums1</code> appears at <code>nums2[1]</code>, and <code>mapping[1] = 4</code> because the <code>1</code>st element of <code>nums1</code> appears at <code>nums2[4]</code>, and so on.</p>

<p><b>Note:</b></p>

<ol>
	<li><code>nums1, nums2</code> have equal lengths in range <code>[1, 100]</code>.</li>
	<li><code>nums1[i], nums2[i]</code> are integers in range <code>[0, 10^5]</code>.</li>
</ol>
