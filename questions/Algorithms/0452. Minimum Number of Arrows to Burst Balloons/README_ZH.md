### [用最少数量的箭引爆气球](https://leetcode-cn.com/problems/minimum-number-of-arrows-to-burst-balloons)

<p>在二维空间中有许多球形的气球。对于每个气球，提供的输入是水平方向上，气球直径的开始和结束坐标。由于它是水平的，所以y坐标并不重要，因此只要知道开始和结束的x坐标就足够了。开始坐标总是小于结束坐标。平面内最多存在10<sup>4</sup>个气球。</p>

<p>一支弓箭可以沿着x轴从不同点完全垂直地射出。在坐标x处射出一支箭，若有一个气球的直径的开始和结束坐标为 x<sub>start，</sub>x<sub>end，</sub> 且满足 &nbsp;x<sub>start</sub>&nbsp;&le; x &le; x<sub>end，</sub>则该气球会被引爆<sub>。</sub>可以射出的弓箭的数量没有限制。 弓箭一旦被射出之后，可以无限地前进。我们想找到使得所有气球全部被引爆，所需的弓箭的最小数量。</p>

<p><strong>Example:</strong></p>

<pre>
<strong>输入:</strong>
[[10,16], [2,8], [1,6], [7,12]]

<strong>输出:</strong>
2

<strong>解释:</strong>
对于该样例，我们可以在x = 6（射爆[2,8],[1,6]两个气球）和 x = 11（射爆另外两个气球）。
</pre>
