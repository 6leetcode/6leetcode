### [Master Mind](https://leetcode.com/problems/master-mind-lcci)

<p>The Game of Master Mind is played as follows:</p>

<p>The computer has four slots, and each slot will contain a ball that is red (R). yellow (Y). green (G) or blue (B). For example, the computer might have RGGB (Slot #1 is red, Slots #2 and #3 are green, Slot #4 is blue).</p>

<p>You, the user, are trying to guess the solution. You might, for example, guess YRGB.</p>

<p>When you guess the correct color for the correct slot, you get a &quot;hit:&#39; If you guess a color that exists but is in the wrong slot, you get a &quot;pseudo-hit:&#39; Note that a slot that is a hit can never count as a pseudo-hit.</p>

<p>For example, if the actual solution is RGBY and you guess GGRR, you have one hit and one pseudo-hit. Write a method that, given a guess and a solution, returns the number of hits and pseudo-hits.</p>

<p>Given a sequence of colors <code>solution</code>, and a <code>guess</code>, write a method that return the number of hits and pseudo-hit <code>answer</code>, where <code>answer[0]</code> is the number of hits and <code>answer[1]</code> is the number of pseudo-hit.</p>

<p><strong>Example: </strong></p>

<pre>
<strong>Input: </strong> solution=&quot;RGBY&quot;,guess=&quot;GGRR&quot;
<strong>Output: </strong> [1,1]
<strong>Explanation: </strong> hit once, pseudo-hit once.
</pre>

<p><strong>Note: </strong></p>

<ul>
	<li><code>len(solution) = len(guess) = 4</code></li>
	<li>There are only <code>&quot;R&quot;</code>,<code>&quot;G&quot;</code>,<code>&quot;B&quot;</code>,<code>&quot;Y&quot;</code> in <code>solution</code>&nbsp;and&nbsp;<code>guess</code>.</li>
</ul>
