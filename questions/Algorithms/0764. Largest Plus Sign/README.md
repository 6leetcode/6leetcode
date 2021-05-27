### [Largest Plus Sign](https://leetcode.com/problems/largest-plus-sign)

<p>In a 2D <code>grid</code> from <code>(0, 0)</code> to <code>(n-1, n-1)</code>, every cell contains a <code>1</code>, except those cells in the given list <code>mines</code> which are <code>0</code>. What is the largest axis-aligned plus sign of <code>1</code>s contained in the grid? Return the order of the plus sign. If there is none, return <code>0</code>.</p>

<p>An &quot;<i>axis-aligned plus sign of <code>1</code>s</i> of order <code>k</code>&quot; has some center <code>grid[x][y] = 1</code> along with 4 arms of length <code>k-1</code> going up, down, left, and right, and made of <code>1</code>s. This is demonstrated in the diagrams below. Note that there could be <code>0</code>s or <code>1</code>s beyond the arms of the plus sign, only the relevant area of the plus sign is checked for <code>1</code>s.</p>

<p><b>Examples of Axis-Aligned Plus Signs of Order </b>k<b>:</b></p>

<pre>
Order 1:
000
0<b>1</b>0
000

Order 2:
00000
00<b>1</b>00
0<b>111</b>0
00<b>1</b>00
00000

Order 3:
0000000
000<b>1</b>000
000<b>1</b>000
0<b>11111</b>0
000<b>1</b>000
000<b>1</b>000
0000000
</pre>

<p><b>Example 1:</b></p>

<pre>
<b>Input:</b> n = 5, mines = [[4, 2]]
<b>Output:</b> 2
<b>Explanation:</b>
11111
11111
1<b>1</b>111
<b>111</b>11
1<b>1</b>011
In the above grid, the largest plus sign can only be order 2.  One of them is marked in bold.
</pre>

<p><b>Example 2:</b></p>

<pre>
<b>Input:</b> n = 2, mines = []
<b>Output:</b> 1
<b>Explanation:</b>
There is no plus sign of order 2, but there is of order 1.
</pre>

<p><b>Example 3:</b></p>

<pre>
<b>Input:</b> n = 1, mines = [[0, 0]]
<b>Output:</b> 0
<b>Explanation:</b>
There is no plus sign, so return 0.
</pre>

<p><b>Note:</b></p>

<ol>
	<li><code>n</code> will be an integer in the range <code>[1, 500]</code>.</li>
	<li><code>mines</code> will have length at most <code>5000</code>.</li>
	<li><code>mines[i]</code> will be length 2 and consist of integers in the range <code>[0, n-1]</code>.</li>
	<li><i>(Additionally, programs submitted in C, C++, or C# will be judged with a slightly smaller time limit.)</i></li>
</ol>

<p>&nbsp;</p>
