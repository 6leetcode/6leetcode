### [旅行终点站](https://leetcode-cn.com/problems/destination-city)

<p>给你一份旅游线路图，该线路图中的旅行线路用数组 <code>paths</code> 表示，其中 <code>paths[i] = [cityA<sub>i</sub>, cityB<sub>i</sub>]</code> 表示该线路将会从 <code>cityA<sub>i</sub></code> 直接前往 <code>cityB<sub>i</sub></code> 。请你找出这次旅行的终点站，即没有任何可以通往其他城市的线路的城市<em>。</em></p>

<p>题目数据保证线路图会形成一条不存在循环的线路，因此恰有一个旅行终点站。</p>

<p>&nbsp;</p>

<p><strong>示例 1：</strong></p>

<pre>
<strong>输入：</strong>paths = [["London","New York"],["New York","Lima"],["Lima","Sao Paulo"]]
<strong>输出：</strong>"Sao Paulo" 
<strong>解释：</strong>从 "London" 出发，最后抵达终点站 "Sao Paulo" 。本次旅行的路线是 "London" -&gt; "New York" -&gt; "Lima" -&gt; "Sao Paulo" 。
</pre>

<p><strong>示例 2：</strong></p>

<pre>
<strong>输入：</strong>paths = [["B","C"],["D","B"],["C","A"]]
<strong>输出：</strong>"A"
<strong>解释：</strong>所有可能的线路是：
"D" -&gt; "B" -&gt; "C" -&gt; "A".&nbsp;
"B" -&gt; "C" -&gt; "A".&nbsp;
"C" -&gt; "A".&nbsp;
"A".&nbsp;
显然，旅行终点站是 "A" 。
</pre>

<p><strong>示例 3：</strong></p>

<pre>
<strong>输入：</strong>paths = [["A","Z"]]
<strong>输出：</strong>"Z"
</pre>

<p>&nbsp;</p>

<p><strong>提示：</strong></p>

<ul>
	<li><code>1 &lt;= paths.length &lt;= 100</code></li>
	<li><code>paths[i].length == 2</code></li>
	<li><code>1 &lt;=&nbsp;cityA<sub>i</sub>.length,&nbsp;cityB<sub>i</sub>.length &lt;= 10</code></li>
	<li><code>cityA<sub>i&nbsp;</sub>!=&nbsp;cityB<sub>i</sub></code></li>
	<li>所有字符串均由大小写英文字母和空格字符组成。</li>
</ul>
