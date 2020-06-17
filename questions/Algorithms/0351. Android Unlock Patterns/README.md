### [Android Unlock Patterns](https://leetcode.com/problems/android-unlock-patterns)

<p>Given an Android <b>3x3</b> key lock screen and two integers <b>m</b> and <b>n</b>, where 1 &le; m &le; n &le; 9, count the total number of unlock patterns of the Android lock screen, which consist of minimum of <b>m</b> keys and maximum <b>n</b> keys.</p>

<p>&nbsp;</p>

<p><b>Rules for a valid pattern:</b></p>

<ol>
	<li>Each pattern must connect at least <b>m</b> keys and at most <b>n</b> keys.</li>
	<li>All the keys must be distinct.</li>
	<li>If the line connecting two consecutive keys in the pattern passes through any other keys, the other keys must have previously selected in the pattern. No jumps through non selected key is allowed.</li>
	<li>The order of keys used matters.</li>
</ol>

<p>&nbsp;</p>

<pre>
<img src="https://assets.leetcode.com/uploads/2018/10/12/android-unlock.png" style="width: 418px; height: 128px;" /></pre>

<p>&nbsp;</p>

<p><b>Explanation:</b></p>

<pre>
| 1 | 2 | 3 |
| 4 | 5 | 6 |
| 7 | 8 | 9 |</pre>

<p><b>Invalid move:</b> <code>4 - 1 - 3 - 6 </code><br />
Line 1 - 3 passes through key 2 which had not been selected in the pattern.</p>

<p><b>Invalid move:</b> <code>4 - 1 - 9 - 2</code><br />
Line 1 - 9 passes through key 5 which had not been selected in the pattern.</p>

<p><b>Valid move:</b> <code>2 - 4 - 1 - 3 - 6</code><br />
Line 1 - 3 is valid because it passes through key 2, which had been selected in the pattern</p>

<p><b>Valid move:</b> <code>6 - 5 - 4 - 1 - 9 - 2</code><br />
Line 1 - 9 is valid because it passes through key 5, which had been selected in the pattern.</p>

<p>&nbsp;</p>

<p><strong>Example:</strong></p>

<div>
<pre>
<strong>Input: </strong>m = <span id="example-input-1-1">1</span>, n = <span id="example-input-1-2">1</span>
<strong>Output: </strong><span id="example-output-1">9</span>
</pre>
</div>
