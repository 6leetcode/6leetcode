### [镜面反射](https://leetcode-cn.com/problems/mirror-reflection)

<p>有一个特殊的正方形房间，每面墙上都有一面镜子。除西南角以外，每个角落都放有一个接受器，编号为&nbsp;<code>0</code>，&nbsp;<code>1</code>，以及&nbsp;<code>2</code>。</p>

<p>正方形房间的墙壁长度为&nbsp;<code>p</code>，一束激光从西南角射出，首先会与东墙相遇，入射点到接收器 <code>0</code> 的距离为 <code>q</code> 。</p>

<p>返回光线最先遇到的接收器的编号（保证光线最终会遇到一个接收器）。</p>

<p>&nbsp;</p>

<p><strong>示例：</strong></p>

<pre><strong>输入： </strong>p = 2, q = 1
<strong>输出： </strong>2
<strong>解释： </strong>这条光线在第一次被反射回左边的墙时就遇到了接收器 2 。
<img alt="" src="https://ibb.co/mYSFJT"><img alt="" src="https://aliyun-lc-upload.oss-cn-hangzhou.aliyuncs.com/aliyun-lc-upload/uploads/2018/06/22/reflection.png" style="height: 217px; width: 218px;"></pre>

<p>&nbsp;</p>

<p><strong>提示：</strong></p>

<ol>
	<li><code>1 &lt;= p &lt;= 1000</code></li>
	<li><code>0 &lt;= q &lt;= p</code></li>
</ol>
