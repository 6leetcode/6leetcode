### [皇位继承顺序](https://leetcode-cn.com/problems/throne-inheritance)

<p>一个王国里住着国王、他的孩子们、他的孙子们等等。每一个时间点，这个家庭里有人出生也有人死亡。</p>

<p>这个王国有一个明确规定的皇位继承顺序，第一继承人总是国王自己。我们定义递归函数&nbsp;<code>Successor(x, curOrder)</code>&nbsp;，给定一个人&nbsp;<code>x</code>&nbsp;和当前的继承顺序，该函数返回 <code>x</code>&nbsp;的下一继承人。</p>

<pre>Successor(x, curOrder):
    如果 x 没有孩子或者所有 x 的孩子都在 curOrder 中：
        如果 x 是国王，那么返回 null
        否则，返回 Successor(x 的父亲, curOrder)
    否则，返回 x 不在 curOrder 中最年长的孩子
</pre>

<p>比方说，假设王国由国王，他的孩子&nbsp;Alice 和 Bob （Alice 比 Bob&nbsp;年长）和 Alice 的孩子&nbsp;Jack 组成。</p>

<ol>
	<li>一开始，&nbsp;<code>curOrder</code>&nbsp;为&nbsp;<code>[&quot;king&quot;]</code>.</li>
	<li>调用&nbsp;<code>Successor(king, curOrder)</code>&nbsp;，返回 Alice ，所以我们将 Alice 放入 <code>curOrder</code>&nbsp;中，得到&nbsp;<code>[&quot;king&quot;, &quot;Alice&quot;]</code>&nbsp;。</li>
	<li>调用&nbsp;<code>Successor(Alice, curOrder)</code>&nbsp;，返回 Jack ，所以我们将 Jack 放入&nbsp;<code>curOrder</code>&nbsp;中，得到&nbsp;<code>[&quot;king&quot;, &quot;Alice&quot;, &quot;Jack&quot;]</code>&nbsp;。</li>
	<li>调用&nbsp;<code>Successor(Jack, curOrder)</code>&nbsp;，返回 Bob ，所以我们将 Bob 放入&nbsp;<code>curOrder</code>&nbsp;中，得到&nbsp;<code>[&quot;king&quot;, &quot;Alice&quot;, &quot;Jack&quot;, &quot;Bob&quot;]</code>&nbsp;。</li>
	<li>调用&nbsp;<code>Successor(Bob, curOrder)</code>&nbsp;，返回&nbsp;<code>null</code>&nbsp;。最终得到继承顺序为&nbsp;<code>[&quot;king&quot;, &quot;Alice&quot;, &quot;Jack&quot;, &quot;Bob&quot;]</code>&nbsp;。</li>
</ol>

<p>通过以上的函数，我们总是能得到一个唯一的继承顺序。</p>

<p>请你实现&nbsp;<code>ThroneInheritance</code>&nbsp;类：</p>

<ul>
	<li><code>ThroneInheritance(string kingName)</code> 初始化一个&nbsp;<code>ThroneInheritance</code>&nbsp;类的对象。国王的名字作为构造函数的参数传入。</li>
	<li><code>void birth(string parentName, string childName)</code>&nbsp;表示&nbsp;<code>parentName</code>&nbsp;新拥有了一个名为&nbsp;<code>childName</code>&nbsp;的孩子。</li>
	<li><code>void death(string name)</code>&nbsp;表示名为&nbsp;<code>name</code>&nbsp;的人死亡。一个人的死亡不会影响&nbsp;<code>Successor</code>&nbsp;函数，也不会影响当前的继承顺序。你可以只将这个人标记为死亡状态。</li>
	<li><code>string[] getInheritanceOrder()</code>&nbsp;返回 <strong>除去</strong>&nbsp;死亡人员的当前继承顺序列表。</li>
</ul>

<p>&nbsp;</p>

<p><strong>示例：</strong></p>

<pre><strong>输入：</strong>
[&quot;ThroneInheritance&quot;, &quot;birth&quot;, &quot;birth&quot;, &quot;birth&quot;, &quot;birth&quot;, &quot;birth&quot;, &quot;birth&quot;, &quot;getInheritanceOrder&quot;, &quot;death&quot;, &quot;getInheritanceOrder&quot;]
[[&quot;king&quot;], [&quot;king&quot;, &quot;andy&quot;], [&quot;king&quot;, &quot;bob&quot;], [&quot;king&quot;, &quot;catherine&quot;], [&quot;andy&quot;, &quot;matthew&quot;], [&quot;bob&quot;, &quot;alex&quot;], [&quot;bob&quot;, &quot;asha&quot;], [null], [&quot;bob&quot;], [null]]
<strong>输出：</strong>
[null, null, null, null, null, null, null, [&quot;king&quot;, &quot;andy&quot;, &quot;matthew&quot;, &quot;bob&quot;, &quot;alex&quot;, &quot;asha&quot;, &quot;catherine&quot;], null, [&quot;king&quot;, &quot;andy&quot;, &quot;matthew&quot;, &quot;alex&quot;, &quot;asha&quot;, &quot;catherine&quot;]]

<strong>解释：</strong>
ThroneInheritance t= new ThroneInheritance(&quot;king&quot;); // 继承顺序：<strong>king</strong>
t.birth(&quot;king&quot;, &quot;andy&quot;); // 继承顺序：king &gt; <strong>andy</strong>
t.birth(&quot;king&quot;, &quot;bob&quot;); // 继承顺序：king &gt; andy &gt; <strong>bob</strong>
t.birth(&quot;king&quot;, &quot;catherine&quot;); // 继承顺序：king &gt; andy &gt; bob &gt; <strong>catherine</strong>
t.birth(&quot;andy&quot;, &quot;matthew&quot;); // 继承顺序：king &gt; andy &gt; <strong>matthew</strong> &gt; bob &gt; catherine
t.birth(&quot;bob&quot;, &quot;alex&quot;); // 继承顺序：king &gt; andy &gt; matthew &gt; bob &gt; <strong>alex</strong> &gt; catherine
t.birth(&quot;bob&quot;, &quot;asha&quot;); // 继承顺序：king &gt; andy &gt; matthew &gt; bob &gt; alex &gt; <strong>asha</strong> &gt; catherine
t.getInheritanceOrder(); // 返回 [&quot;king&quot;, &quot;andy&quot;, &quot;matthew&quot;, &quot;bob&quot;, &quot;alex&quot;, &quot;asha&quot;, &quot;catherine&quot;]
t.death(&quot;bob&quot;); // 继承顺序：king &gt; andy &gt; matthew &gt; <strong>bob（已经去世）</strong>&gt; alex &gt; asha &gt; catherine
t.getInheritanceOrder(); // 返回 [&quot;king&quot;, &quot;andy&quot;, &quot;matthew&quot;, &quot;alex&quot;, &quot;asha&quot;, &quot;catherine&quot;]
</pre>

<p>&nbsp;</p>

<p><strong>提示：</strong></p>

<ul>
	<li><code>1 &lt;= kingName.length, parentName.length, childName.length, name.length &lt;= 15</code></li>
	<li><code>kingName</code>，<code>parentName</code>，&nbsp;<code>childName</code>&nbsp;和&nbsp;<code>name</code>&nbsp;仅包含小写英文字母。</li>
	<li>所有的参数&nbsp;<code>childName</code> 和&nbsp;<code>kingName</code>&nbsp;<strong>互不相同</strong>。</li>
	<li>所有&nbsp;<code>death</code>&nbsp;函数中的死亡名字 <code>name</code>&nbsp;要么是国王，要么是已经出生了的人员名字。</li>
	<li>每次调用 <code>birth(parentName, childName)</code> 时，测试用例都保证 <code>parentName</code> 对应的人员是活着的。</li>
	<li>最多调用&nbsp;<code>10<sup>5</sup></code>&nbsp;次<code>birth</code> 和&nbsp;<code>death</code>&nbsp;。</li>
	<li>最多调用&nbsp;<code>10</code>&nbsp;次&nbsp;<code>getInheritanceOrder</code>&nbsp;。</li>
</ul>
