### [Bulls and Cows](https://leetcode.com/problems/bulls-and-cows)

<p>You are playing the following <a href="https://en.wikipedia.org/wiki/Bulls_and_Cows" target="_blank">Bulls and Cows</a> game with your friend: You write down a number and ask your friend to guess what the number is. Each time your friend makes a guess, you provide a hint that indicates how many digits in said guess match your secret number exactly in both digit and position (called &quot;bulls&quot;) and how many digits match the secret number but locate in the wrong position (called &quot;cows&quot;). Your friend will use successive guesses and hints to eventually derive the secret number.</p>

<p>Write a function to return a hint according to the secret number and friend&#39;s guess, use <code>A</code> to indicate the bulls and <code>B</code> to indicate the cows.&nbsp;</p>

<p>Please note that both secret number and friend&#39;s guess may contain duplicate digits.</p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>

<pre>
<strong>Input:</strong> secret = &quot;1807&quot;, guess = &quot;7810&quot;
<strong>Output:</strong> &quot;1A3B&quot;
<strong>Explanation:</strong> 1 bull and 3 cows. The bull is 8, the cows are 0, 1, and 7.
</pre>

<p><strong>Example 2:</strong></p>

<pre>
<strong>Input:</strong> secret = &quot;1123&quot;, guess = &quot;0111&quot;
<strong>Output:</strong> &quot;1A1B&quot;
<strong>Explanation: </strong>The 1st <code>1 </code>in friend&#39;s guess is a bull, the 2nd or 3rd <code>1</code> is a cow.
</pre>

<p><strong>Example 3:</strong></p>

<pre>
<strong>Input:</strong> secret = &quot;1&quot;, guess = &quot;0&quot;
<strong>Output:</strong> &quot;0A0B&quot;
</pre>

<p><strong>Example 4:</strong></p>

<pre>
<strong>Input:</strong> secret = &quot;1&quot;, guess = &quot;1&quot;
<strong>Output:</strong> &quot;1A0B&quot;
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= secret.length, guess.length &lt;= 1000</code></li>
	<li><code>secret.length == guess.length</code></li>
	<li><code>secret</code> and <code>guess</code> consist of digits only.</li>
</ul>
