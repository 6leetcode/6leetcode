### [Factor Combinations](https://leetcode.com/problems/factor-combinations)

<p>Numbers can be regarded as product of its factors. For example,</p>

<pre>
8 = 2 x 2 x 2;
  = 2 x 4.
</pre>

<p>Write a function that takes an integer <i>n</i> and return all possible combinations of its factors.</p>

<p><b>Note:</b></p>

<ol>
	<li>You may assume that <i>n</i> is always positive.</li>
	<li>Factors should be greater than 1 and less than <i>n</i>.</li>
</ol>

<p><b>Example&nbsp;1: </b></p>

<pre>
<strong>Input:</strong> <code>1</code>
<strong>Output:</strong> []
</pre>

<p><b>Example&nbsp;2: </b></p>

<pre>
<strong>Input:</strong> <code>37</code>
<strong>Output:</strong>[]</pre>

<p><b>Example&nbsp;3: </b></p>

<pre>
<strong>Input:</strong> <code>12</code>
<strong>Output:</strong>
[
  [2, 6],
  [2, 2, 3],
  [3, 4]
]</pre>

<p><b>Example&nbsp;4: </b></p>

<pre>
<strong>Input:</strong> <code>32</code>
<strong>Output:</strong>
[
  [2, 16],
  [2, 2, 8],
  [2, 2, 2, 4],
  [2, 2, 2, 2, 2],
  [2, 4, 4],
  [4, 8]
]
</pre>
