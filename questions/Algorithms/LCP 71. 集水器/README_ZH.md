### [集水器](https://leetcode-cn.com/problems/kskhHQ)

字符串数组 `shape` 描述了一个二维平面中的矩阵形式的集水器，`shape[i][j]` 表示集水器的第 `i` 行 `j` 列为：
- `'l'`表示向左倾斜的隔板（即从左上到右下）；
- `'r'`表示向右倾斜的隔板（即从左下到右上）；
- `'.'` 表示此位置没有隔板
![image.png](https://pic.leetcode-cn.com/1664424667-wMnPja-image.png){:width=200px}

已知当隔板构成存储容器可以存水，每个方格代表的蓄水量为 `2`。集水器初始浸泡在水中，除内部密闭空间外，所有位置均被水填满。
现将其从水中竖直向上取出，请返回集水器最终的蓄水量。

**注意：**
- 隔板具有良好的透气性，因此空气可以穿过隔板，但水无法穿过

**示例 1：**
> 输入：
> `shape = ["....rl","l.lr.r",".l..r.","..lr.."]`
>
> 输出：`18`
>
> 解释：如下图所示，由于空气会穿过隔板，因此红框区域没有水
![image.png](https://pic.leetcode-cn.com/1664436239-eyYxeP-image.png){:width="280px"}


**示例 2：**
> 输入：
> `shape = [".rlrlrlrl","ll..rl..r",".llrrllrr","..lr..lr."]`
> 输出：`18`
>
> 解释：如图所示。由于红框右侧未闭合，因此多余的水会从该处流走。
![image.png](https://pic.leetcode-cn.com/1664436082-SibVMv-image.png){:width="400px"}


**示例 3：**
> 输入：
> `shape = ["rlrr","llrl","llr."]`
> 输出：`6`
>
> 解释：如图所示。
![image.png](https://pic.leetcode-cn.com/1664424855-dwpUHO-image.png){:width="230px"}




**示例 4：**
> 输入：
> `shape = ["...rl...","..r..l..",".r.rl.l.","r.r..l.l","l.l..rl.",".l.lr.r.","..l..r..","...lr..."]`
>
> 输出：`30`
>
> 解释：如下图所示。由于中间为内部密闭空间，无法蓄水。
![image.png](https://pic.leetcode-cn.com/1664424894-mClEXh-image.png){:width="350px"}


**提示**：
- `1 <= shape.length <= 50`
- `1 <= shape[i].length <= 50`
- `shape[i][j]` 仅为 `'l'`、`'r'` 或 `'.'`
