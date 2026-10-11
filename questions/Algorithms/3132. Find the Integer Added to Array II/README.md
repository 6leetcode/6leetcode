### [Find the Integer Added to Array II](https://leetcode.com/problems/find-the-integer-added-to-array-ii)

<p>You are given two integer arrays <code>nums1</code> and <code>nums2</code>.</p>

<p>We say that <code>nums2</code> is reachable from <code>nums1</code> with an integer <code>x</code> if there exist two elements in <code>nums1</code> that, when removed, and <code>x</code> is added to all the remaining elements of <code>nums1</code> (or subtracted in the case of a negative <code>x</code>), the resulting array becomes equal to <code>nums2</code>. Two arrays are considered <strong>equal</strong> when they contain the same integers with the same frequencies.</p>

<p>Return the <strong>minimum</strong> possible integer <code>x</code> that makes <code>nums2</code> reachable from <code>nums1</code>.</p>

<p>It is guaranteed that <code>nums2</code> is reachable from <code>nums1</code> with at least one <code>x</code>.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<div class="example-block">
<p><strong>Input:</strong> <span class="example-io" style="
    font-family: Menlo,sans-serif;
    font-size: 0.85rem;
">nums1 = [4,20,16,12,8], nums2 = [14,18,10]</span></p>

<p><strong>Output:</strong> <span class="example-io" style="
    font-family: Menlo,sans-serif;
    font-size: 0.85rem;
">-2</span></p>

<p><strong>Explanation:</strong></p>

<p>After removing elements at indices <code>[0,4]</code> and adding -2, <code>nums1</code> becomes <code>[18,14,10]</code>.</p>
</div>

<p><strong class="example">Example 2:</strong></p>

<div class="example-block">
<p><strong>Input:</strong> <span class="example-io" style="
    font-family: Menlo,sans-serif;
    font-size: 0.85rem;
">nums1 = [3,5,5,3], nums2 = [7,7]</span></p>

<p><strong>Output:</strong> <span class="example-io" style="
    font-family: Menlo,sans-serif;
    font-size: 0.85rem;
">2</span></p>

<p><strong>Explanation:</strong></p>

<p>After removing elements at indices <code>[0,3]</code> and adding 2, <code>nums1</code> becomes <code>[7,7]</code>.</p>
</div>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>3 &lt;= nums1.length &lt;= 200</code></li>
	<li><code>nums2.length == nums1.length - 2</code></li>
	<li><code>0 &lt;= nums1[i], nums2[i] &lt;= 1000</code></li>
	<li>
	<p>It is guaranteed that <code>nums2</code> is reachable from <code>nums1</code> with at least one <code>x</code>.</p>
	</li>
</ul>
