# LeetCode

LeetCode 题解

### 文件规则

- 每个题目按照题目序号编排。
- 每个题目文件夹下有相关的题目说明，文件名为 `readme.md`。
- 每个文件夹中同一种语言可以有多重解决方案，按照算法优化程度排名，文件名前缀为语言名字。例如：`c1.c` 的性能是比 `c2.c` 的性能更优的。
- 每个题目里边都要含有 `main` 函数，含有可以想到的所有测试案例，方便线下运行。题解函数，单独写成一个独立的函数。

### 本地测试

- 进入某种语言的环境仅需要 `make $language`，例如进入 python 的环境就是 `make python`，第一次进入某一种环境可能会需要一些时间，首先会编译这个 `Docker` 镜像。
- 本目录的所有文件将会映射到 `Container` 的 `/app` 目录下。
- `Container` 的环境可能是 `Debian` 或者 `Alpine`。

### Solutions list
|Language|C|C++|Go|Java|JavaScript|PHP|Python|Rust|
|:---:|:---:|:---:|:---:|:---:|:---:|:---:|:---:|:---:|
|[0001](https://leetcode.com/problems/two-sum)|||[go1.go](https://github.com/6leetcode/6leetcode/blob/master/0001.%20Two%20Sum/go1.go)|[java1.java](https://github.com/6leetcode/6leetcode/blob/master/0001.%20Two%20Sum/java1.java)|||||
|[0002](https://leetcode.com/problems/add-two-numbers)||||[java1.java](https://github.com/6leetcode/6leetcode/blob/master/0002.%20Add%20Two%20Numbers/java1.java)|||||
|[0003](https://leetcode.com/problems/longest-substring-without-repeating-characters)|||[go1.go](https://github.com/6leetcode/6leetcode/blob/master/0003.%20Longest%20Substring%20Without%20Repeating%20Characters/go1.go) [go2.go](https://github.com/6leetcode/6leetcode/blob/master/0003.%20Longest%20Substring%20Without%20Repeating%20Characters/go1.go)||||||
|[0004](https://leetcode.com/problems/median-of-two-sorted-arrays)|[c1.c](https://github.com/6leetcode/6leetcode/blob/master/0004.%20Median%20of%20Two%20Sorted%20Arrays/c1.c)|[cpp1.cc](https://github.com/6leetcode/6leetcode/blob/master/0004.%20Median%20of%20Two%20Sorted%20Arrays/cpp1.cc)|[go1.go](https://github.com/6leetcode/6leetcode/blob/master/0004.%20Median%20of%20Two%20Sorted%20Arrays/go1.go) [go2.go](https://github.com/6leetcode/6leetcode/blob/master/0004.%20Median%20of%20Two%20Sorted%20Arrays/go1.go)|||[php1.php](https://github.com/6leetcode/6leetcode/blob/master/0004.%20Median%20of%20Two%20Sorted%20Arrays/php1.php) [php2.php](https://github.com/6leetcode/6leetcode/blob/master/0004.%20Median%20of%20Two%20Sorted%20Arrays/php1.php)|||
|[0005](https://leetcode.com/problems/longest-palindromic-substring)|||||||||
|[0006](https://leetcode.com/problems/zigzag-conversion)|||[go1.go](https://github.com/6leetcode/6leetcode/blob/master/0006.%20ZigZag%20Conversion/go1.go)|||[php1.php](https://github.com/6leetcode/6leetcode/blob/master/0006.%20ZigZag%20Conversion/php1.php)|||
|[0007](https://leetcode.com/problems/reverse-integer)|[c1.c](https://github.com/6leetcode/6leetcode/blob/master/0007.%20Reverse%20Integer/c1.c)||[go1.go](https://github.com/6leetcode/6leetcode/blob/master/0007.%20Reverse%20Integer/go1.go)||||||
|[0008](https://leetcode.com/problems/string-to-integer-atoi)|||||||||
|[0011](https://leetcode.com/problems/container-with-most-water)|||[go1.go](https://github.com/6leetcode/6leetcode/blob/master/0011.%20Container%20With%20Most%20Water/go1.go)||||||
|[0012](https://leetcode.com/problems/integer-to-roman)|[c1.c](https://github.com/6leetcode/6leetcode/blob/master/0012.%20Integer%20to%20Roman/c1.c)|[cpp1.cc](https://github.com/6leetcode/6leetcode/blob/master/0012.%20Integer%20to%20Roman/cpp1.cc)|[go1.go](https://github.com/6leetcode/6leetcode/blob/master/0012.%20Integer%20to%20Roman/go1.go)||[js1.js](https://github.com/6leetcode/6leetcode/blob/master/0012.%20Integer%20to%20Roman/js1.js)|||[rust1.rs](https://github.com/6leetcode/6leetcode/blob/master/0012.%20Integer%20to%20Roman/rust1.rs)|
|[0037](https://leetcode.com/problems/sudoku-solver)|[c1.c](https://github.com/6leetcode/6leetcode/blob/master/0037.%20Sudoku%20Solver/c1.c)|[cpp1.cc](https://github.com/6leetcode/6leetcode/blob/master/0037.%20Sudoku%20Solver/cpp1.cc)|||||||
|[0070](https://leetcode.com/problems/climbing-stairs)||[cpp1.cc](https://github.com/6leetcode/6leetcode/blob/master/0070.%20Climbing%20Stairs/cpp1.cc) [cpp2.cc](https://github.com/6leetcode/6leetcode/blob/master/0070.%20Climbing%20Stairs/cpp1.cc)|||||||
|[0136](https://leetcode.com/problems/single-number)|[c1.c](https://github.com/6leetcode/6leetcode/blob/master/0136.%20Single%20Number/c1.c)|[cpp1.cc](https://github.com/6leetcode/6leetcode/blob/master/0136.%20Single%20Number/cpp1.cc)|||||||
|[0169](https://leetcode.com/problems/majority-element)|[c1.c](https://github.com/6leetcode/6leetcode/blob/master/0169.%20Majority%20Element/c1.c)|[cpp1.cc](https://github.com/6leetcode/6leetcode/blob/master/0169.%20Majority%20Element/cpp1.cc)||||||[rust1.rs](https://github.com/6leetcode/6leetcode/blob/master/0169.%20Majority%20Element/rust1.rs)|
|[0231](https://leetcode.com/problems/power-of-two)|[c2.c](https://github.com/6leetcode/6leetcode/blob/master/0231.%20Power%20of%20Two/c2.c) [c1.c](https://github.com/6leetcode/6leetcode/blob/master/0231.%20Power%20of%20Two/c2.c)||||||||
|[0458](https://leetcode.com/problems/poor-pigs)||||[java1.java](https://github.com/6leetcode/6leetcode/blob/master/0458.%20Poor%20Pigs/java1.java)|[js1.js](https://github.com/6leetcode/6leetcode/blob/master/0458.%20Poor%20Pigs/js1.js)||||