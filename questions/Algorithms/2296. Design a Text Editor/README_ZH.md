### [设计一个文本编辑器](https://leetcode-cn.com/problems/design-a-text-editor)

<p>请你设计一个带光标的文本编辑器，它可以实现以下功能：</p>

<ul>
	<li><strong>添加：</strong>在光标所在处添加文本。</li>
	<li><strong>删除：</strong>在光标所在处删除文本（模拟键盘的删除键）。</li>
	<li><strong>移动：</strong>将光标往左或者往右移动。</li>
</ul>

<p>当删除文本时，只有光标左边的字符会被删除。光标会留在文本内，也就是说任意时候&nbsp;<code>0 &lt;= cursor.position &lt;= currentText.length</code>&nbsp;都成立。</p>

<p>请你实现&nbsp;<code>TextEditor</code>&nbsp;类：</p>

<ul>
	<li><code>TextEditor()</code>&nbsp;用空文本初始化对象。</li>
	<li><code>void addText(string text)</code>&nbsp;将&nbsp;<code>text</code>&nbsp;添加到光标所在位置。添加完后光标在&nbsp;<code>text</code>&nbsp;的右边。</li>
	<li><code>int deleteText(int k)</code>&nbsp;删除光标左边&nbsp;<code>k</code>&nbsp;个字符。返回实际删除的字符数目。</li>
	<li><code>string cursorLeft(int k)</code> 将光标向左移动&nbsp;<code>k</code>&nbsp;次。返回移动后光标左边&nbsp;<code>min(10, len)</code>&nbsp;个字符，其中&nbsp;<code>len</code>&nbsp;是光标左边的字符数目。</li>
	<li><code>string cursorRight(int k)</code>&nbsp;将光标向右移动&nbsp;<code>k</code>&nbsp;次。返回移动后光标左边&nbsp;<code>min(10, len)</code>&nbsp;个字符，其中&nbsp;<code>len</code>&nbsp;是光标左边的字符数目。</li>
</ul>

<p>&nbsp;</p>

<p><strong>示例 1：</strong></p>

<pre>
<strong>输入：</strong>
["TextEditor", "addText", "deleteText", "addText", "cursorRight", "cursorLeft", "deleteText", "cursorLeft", "cursorRight"]
[[], ["leetcode"], [4], ["practice"], [3], [8], [10], [2], [6]]
<strong>输出：</strong>
[null, null, 4, null, "etpractice", "leet", 4, "", "practi"]

<strong>解释：</strong>
TextEditor textEditor = new TextEditor(); // 当前 text 为 "|" 。（'|' 字符表示光标）
textEditor.addText("leetcode"); // 当前文本为 "leetcode|" 。
textEditor.deleteText(4); // 返回 4
                          // 当前文本为 "leet|" 。
                          // 删除了 4 个字符。
textEditor.addText("practice"); // 当前文本为 "leetpractice|" 。
textEditor.cursorRight(3); // 返回 "etpractice"
                           // 当前文本为 "leetpractice|". 
                           // 光标无法移动到文本以外，所以无法移动。
                           // "etpractice" 是光标左边的 10 个字符。
textEditor.cursorLeft(8); // 返回 "leet"
                          // 当前文本为 "leet|practice" 。
                          // "leet" 是光标左边的 min(10, 4) = 4 个字符。
textEditor.deleteText(10); // 返回 4
                           // 当前文本为 "|practice" 。
                           // 只有 4 个字符被删除了。
textEditor.cursorLeft(2); // 返回 ""
                          // 当前文本为 "|practice" 。
                          // 光标无法移动到文本以外，所以无法移动。
                          // "" 是光标左边的 min(10, 0) = 0 个字符。
textEditor.cursorRight(6); // 返回 "practi"
                           // 当前文本为 "practi|ce" 。
                           // "practi" 是光标左边的 min(10, 6) = 6 个字符。
</pre>

<p>&nbsp;</p>

<p><strong>提示：</strong></p>

<ul>
	<li><code>1 &lt;= text.length, k &lt;= 40</code></li>
	<li><code>text</code>&nbsp;只含有小写英文字母。</li>
	<li>调用 <code>addText</code>&nbsp;，<code>deleteText</code>&nbsp;，<code>cursorLeft</code> 和&nbsp;<code>cursorRight</code>&nbsp;的 <strong>总</strong> 次数不超过&nbsp;<code>2 * 10<sup>4</sup></code>&nbsp;次。</li>
</ul>

<p>&nbsp;</p>

<p><strong>进阶：</strong>你能设计并实现一个每次调用时间复杂度为 <code>O(k)</code> 的解决方案吗？</p>
