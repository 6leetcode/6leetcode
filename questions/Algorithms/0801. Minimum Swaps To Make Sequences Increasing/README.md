### [Minimum Swaps To Make Sequences Increasing](https://leetcode.com/problems/minimum-swaps-to-make-sequences-increasing)

<p>We have two integer sequences <code>nums1</code> and <code>nums2</code> of the same non-zero length.</p>

<p>We are allowed to swap elements <code>nums1[i]</code> and <code>nums2[i]</code>. Note that both elements are in the same index position in their respective sequences.</p>

<p>At the end of some number of swaps, <code>nums1</code> and <code>nums2</code> are both strictly increasing. (An array <code>A</code> is <em>strictly increasing</em> if and only if <code>A[0] &lt; A[1] &lt; A[2] &lt; ... &lt; A[A.length - 1]</code>.)</p>

<p>Given <code>nums1</code> and <code>nums2</code>, return the minimum number of swaps to make both sequences strictly increasing. It is guaranteed that the given input always makes it possible.</p>

<pre>
<strong>Example:</strong>
<strong>Input:</strong> nums1 = [1,3,5,4], nums2 = [1,2,3,7]
<strong>Output:</strong> 1
<strong>Explanation: </strong>
Swap nums1[3] and nums2[3].  Then the sequences are:
nums1 = [1, 3, 5, 7] and nums2 = [1, 2, 3, 4]
which are both strictly increasing.
</pre>

<p><strong>Note:</strong></p>

<ul>
	<li><code>nums1</code>, <code>nums2</code> are arrays with the same length, and that length will be in the range <code>[1, 1000]</code>.</li>
	<li><code>nums1[i]</code>, <code>nums2[i]</code> are integer values in the range <code>[0, 2000]</code>.</li>
</ul>
