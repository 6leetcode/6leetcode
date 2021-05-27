### [Advantage Shuffle](https://leetcode.com/problems/advantage-shuffle)

<p>Given two arrays <code>nums1</code> and <code>nums2</code> of equal size, the <em>advantage of <code>nums1</code> with respect to <code>nums2</code></em> is the number of indices <code>i</code>&nbsp;for which <code>nums1[i] &gt; nums2[i]</code>.</p>

<p>Return <strong>any</strong> permutation of <code>nums1</code> that maximizes its advantage with respect to <code>nums2</code>.</p>

<p>&nbsp;</p>

<div>
<p><strong>Example 1:</strong></p>

<pre>
<strong>Input: </strong>nums1 = <span id="example-input-1-1">[2,7,11,15]</span>, nums2 = <span id="example-input-1-2">[1,10,4,11]</span>
<strong>Output: </strong><span id="example-output-1">[2,11,7,15]</span>
</pre>

<div>
<p><strong>Example 2:</strong></p>

<pre>
<strong>Input: </strong>nums1 = <span id="example-input-2-1">[12,24,8,32]</span>, nums2 = <span id="example-input-2-2">[13,25,32,11]</span>
<strong>Output: </strong><span id="example-output-2">[24,32,8,12]</span>
</pre>

<p>&nbsp;</p>

<p><strong>Note:</strong></p>

<ol>
	<li><code>1 &lt;= nums1.length = nums2.length &lt;= 10000</code></li>
	<li><code>0 &lt;= nums1[i] &lt;= 10<sup>9</sup></code></li>
	<li><code>0 &lt;= nums2[i] &lt;= 10<sup>9</sup></code></li>
</ol>
</div>
</div>
