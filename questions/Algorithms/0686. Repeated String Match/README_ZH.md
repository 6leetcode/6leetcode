### [重复叠加字符串匹配](https://leetcode-cn.com/problems/repeated-string-match)

<p>给定两个字符串 A 和 B, 寻找重复叠加字符串A的最小次数，使得字符串B成为叠加后的字符串A的子串，如果不存在则返回 -1。</p>

<p>举个例子，A = &quot;abcd&quot;，B = &quot;cdabcdab&quot;。</p>

<p>答案为 3，&nbsp;因为 A 重复叠加三遍后为&nbsp;&ldquo;abcdabcdabcd&rdquo;，此时 B 是其子串；A 重复叠加两遍后为&quot;abcdabcd&quot;，B 并不是其子串。</p>

<p><strong>注意:</strong></p>

<p>&nbsp;<code>A</code>&nbsp;与&nbsp;<code>B</code>&nbsp;字符串的长度在1和10000区间范围内。</p>
