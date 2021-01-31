### [Find the Index of the Large Integer](https://leetcode.com/problems/find-the-index-of-the-large-integer)

<p>We have an integer array <code>arr</code>, where all the integers in <code>arr</code> are equal except for one integer which is <strong>larger</strong> than the rest of the integers. You will not be given direct access to the array, instead, you will have an <strong>API</strong> <code>ArrayReader</code> which have the following functions:</p>

<ul>
	<li><code>int compareSub(int l, int r, int x, int y)</code>: where <code>0 &lt;= l, r, x, y &lt;&nbsp;ArrayReader.length()</code>, <code>l &lt;= r and</code>&nbsp;<code>x &lt;= y</code>. The function compares the sum of sub-array <code>arr[l..r]</code> with the sum of the sub-array <code>arr[x..y]</code> and returns:

	<ul>
		<li><strong>1</strong> if <code>arr[l]+arr[l+1]+...+arr[r] &gt; arr[x]+arr[x+1]+...+arr[y]</code>.</li>
		<li><strong>0</strong> if <code>arr[l]+arr[l+1]+...+arr[r] == arr[x]+arr[x+1]+...+arr[y]</code>.</li>
		<li><strong>-1</strong> if <code>arr[l]+arr[l+1]+...+arr[r] &lt; arr[x]+arr[x+1]+...+arr[y]</code>.</li>
	</ul>
	</li>
	<li><code>int length()</code>: Returns the size of the array.</li>
</ul>

<p>You are allowed to call&nbsp;<code>compareSub()</code>&nbsp;<b>20 times</b> at most. You can assume both functions work in <code>O(1)</code> time.</p>

<p>Return <em>the index of the array <code>arr</code> which has the largest integer</em>.</p>

<p><strong>Follow-up:</strong></p>

<ul>
	<li>What if there are two numbers in <code>arr</code> that are bigger than all other numbers?</li>
	<li>What if there is one number that is bigger than other numbers and one number that is smaller than other numbers?</li>
</ul>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>

<pre>
<strong>Input:</strong> arr = [7,7,7,7,10,7,7,7]
<strong>Output:</strong> 4
<strong>Explanation:</strong> The following calls to the API
reader.compareSub(0, 0, 1, 1) // returns 0 this is a query comparing the sub-array (0, 0) with the sub array (1, 1), (i.e. compares arr[0] with arr[1]).
Thus we know that arr[0] and arr[1] doesn&#39;t contain the largest element.
reader.compareSub(2, 2, 3, 3) // returns 0, we can exclude arr[2] and arr[3].
reader.compareSub(4, 4, 5, 5) // returns 1, thus for sure arr[4] is the largest element in the array.
Notice that we made only 3 calls, so the answer is valid.
</pre>

<p><strong>Example 2:</strong></p>

<pre>
<strong>Input:</strong> nums = [6,6,12]
<strong>Output:</strong> 2
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>2 &lt;= arr.length&nbsp;&lt;= 5 * 10^5</code></li>
	<li><code>1 &lt;= arr[i] &lt;= 100</code></li>
	<li>All elements of <code>arr</code> are equal except for one element which is larger than all other elements.</li>
</ul>
