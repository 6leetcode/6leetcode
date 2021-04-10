### [马戏团人塔](https://leetcode-cn.com/problems/circus-tower-lcci)

<p>有个马戏团正在设计叠罗汉的表演节目，一个人要站在另一人的肩膀上。出于实际和美观的考虑，在上面的人要比下面的人矮一点且轻一点。已知马戏团每个人的身高和体重，请编写代码计算叠罗汉最多能叠几个人。</p>

<p><strong>示例：</strong></p>

<pre>
<strong>输入：</strong>height = [65,70,56,75,60,68] weight = [100,150,90,190,95,110]
<strong>输出：</strong>6
<strong>解释：</strong>从上往下数，叠罗汉最多能叠 6 层：(56,90), (60,95), (65,100), (68,110), (70,150), (75,190)</pre>

<p><strong>提示：</strong></p>

<ul>
	<li><code>height.length == weight.length <= 10000</code></li>
</ul>
