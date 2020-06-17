### [轰炸敌人](https://leetcode-cn.com/problems/bomb-enemy)

<p>想象一下炸弹人游戏，在你面前有一个二维的网格来表示地图，网格中的格子分别被以下三种符号占据：</p>

<ul>
	<li><code>&#39;W&#39;</code>&nbsp;表示一堵墙</li>
	<li><code>&#39;E&#39;</code>&nbsp;表示一个敌人</li>
	<li><code>&#39;0&#39;</code>（数字 0）表示一个空位</li>
</ul>

<p><img src="https://assets.leetcode-cn.com/aliyun-lc-upload/images/361_Bomb_Enemy.gif" style="width: 200px;"></p>

<p>请你计算一个炸弹最多能炸多少敌人。</p>

<p>由于炸弹的威力不足以穿透墙体，炸弹只能炸到同一行和同一列没被墙体挡住的敌人。</p>

<p><strong>注意：</strong>你只能把炸弹放在一个空的格子里</p>

<p><strong>示例:</strong></p>

<pre><strong>输入: </strong>[[&quot;0&quot;,&quot;E&quot;,&quot;0&quot;,&quot;0&quot;],[&quot;E&quot;,&quot;0&quot;,&quot;W&quot;,&quot;E&quot;],[&quot;0&quot;,&quot;E&quot;,&quot;0&quot;,&quot;0&quot;]]
<strong>输出: </strong>3 
<strong>解释: </strong>对于如下网格

0 E 0 0 
E 0 W E 
0 E 0 0

假如在位置 (1,1) 放置炸弹的话，可以炸到 3 个敌人
</pre>
