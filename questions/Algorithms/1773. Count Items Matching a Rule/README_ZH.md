### [统计匹配检索规则的物品数量](https://leetcode-cn.com/problems/count-items-matching-a-rule)

<p>给你一个数组 <code>items</code> ，其中 <code>items[i] = [type<sub>i</sub>, color<sub>i</sub>, name<sub>i</sub>]</code> ，描述第 <code>i</code> 件物品的类型、颜色以及名称。</p>

<p>另给你一条由两个字符串 <code>ruleKey</code> 和 <code>ruleValue</code> 表示的检索规则。</p>

<p>如果第 <code>i</code> 件物品能满足下述条件之一，则认为该物品与给定的检索规则 <strong>匹配</strong> ：</p>

<ul>
	<li><code>ruleKey == "type"</code> 且 <code>ruleValue == type<sub>i</sub></code> 。</li>
	<li><code>ruleKey == "color"</code> 且 <code>ruleValue == color<sub>i</sub></code> 。</li>
	<li><code>ruleKey == "name"</code> 且 <code>ruleValue == name<sub>i</sub></code> 。</li>
</ul>

<p>统计并返回 <strong>匹配检索规则的物品数量</strong> 。</p>

<p> </p>

<p><strong>示例 1：</strong></p>

<pre>
<strong>输入：</strong>items = [["phone","blue","pixel"],["computer","silver","lenovo"],["phone","gold","iphone"]], ruleKey = "color", ruleValue = "silver"
<strong>输出：</strong>1
<strong>解释：</strong>只有一件物品匹配检索规则，这件物品是 ["computer","silver","lenovo"] 。
</pre>

<p><strong>示例 2：</strong></p>

<pre>
<strong>输入：</strong>items = [["phone","blue","pixel"],["computer","silver","phone"],["phone","gold","iphone"]], ruleKey = "type", ruleValue = "phone"
<strong>输出：</strong>2
<strong>解释：</strong>只有两件物品匹配检索规则，这两件物品分别是 ["phone","blue","pixel"] 和 ["phone","gold","iphone"] 。注意，["computer","silver","phone"] 未匹配检索规则。</pre>

<p> </p>

<p><strong>提示：</strong></p>

<ul>
	<li><code>1 <= items.length <= 10<sup>4</sup></code></li>
	<li><code>1 <= type<sub>i</sub>.length, color<sub>i</sub>.length, name<sub>i</sub>.length, ruleValue.length <= 10</code></li>
	<li><code>ruleKey</code> 等于 <code>"type"</code>、<code>"color"</code> 或 <code>"name"</code></li>
	<li>所有字符串仅由小写字母组成</li>
</ul>
