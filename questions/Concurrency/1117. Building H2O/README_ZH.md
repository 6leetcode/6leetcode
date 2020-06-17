### [H2O 生成](https://leetcode-cn.com/problems/building-h2o)

<p>现在有两种线程，氢 <code>oxygen</code> 和氧 <code>hydrogen</code>，你的目标是组织这两种线程来产生水分子。</p>

<p>存在一个屏障（barrier）使得每个线程必须等候直到一个完整水分子能够被产生出来。</p>

<p>氢和氧线程会被分别给予 <code>releaseHydrogen</code> 和 <code>releaseOxygen</code> 方法来允许它们突破屏障。</p>

<p>这些线程应该三三成组突破屏障并能立即组合产生一个水分子。</p>

<p>你必须保证产生一个水分子所需线程的结合必须发生在下一个水分子产生之前。</p>

<p>换句话说:</p>

<ul>
	<li>如果一个氧线程到达屏障时没有氢线程到达，它必须等候直到两个氢线程到达。</li>
	<li>如果一个氢线程到达屏障时没有其它线程到达，它必须等候直到一个氧线程和另一个氢线程到达。</li>
</ul>

<p>书写满足这些限制条件的氢、氧线程同步代码。</p>

<p>&nbsp;</p>

<p><strong>示例 1:</strong></p>

<pre>
<strong>输入: </strong>&quot;HOH&quot;
<strong>输出: </strong>&quot;HHO&quot;
<strong>解释:</strong> &quot;HOH&quot; 和 &quot;OHH&quot; 依然都是有效解。
</pre>

<p><strong>示例 2:</strong></p>

<pre>
<strong>输入: </strong>&quot;OOHHHH&quot;
<strong>输出: </strong>&quot;HHOHHO&quot;
<strong>解释:</strong> &quot;HOHHHO&quot;, &quot;OHHHHO&quot;, &quot;HHOHOH&quot;, &quot;HOHHOH&quot;, &quot;OHHHOH&quot;, &quot;HHOOHH&quot;, &quot;HOHOHH&quot; 和 &quot;OHHOHH&quot; 依然都是有效解。
</pre>

<p>&nbsp;</p>

<p><strong>限制条件:</strong></p>

<ul>
	<li>输入字符串的总长将会是 3<em>n</em>, 1 &le;&nbsp;<em>n</em>&nbsp;&le; 50；</li>
	<li>输入字符串中的 &ldquo;H&rdquo; 总数将会是 2n；</li>
	<li>输入字符串中的 &ldquo;O&rdquo; 总数将会是 n。</li>
</ul>
