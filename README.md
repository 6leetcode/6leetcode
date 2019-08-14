# LeetCode

LeetCode Solutions.

### Solutions file rules

- Each problem is organized according to the title number.
- Each problem folder has a description file which one named `readme.md`.
- There can be multiple solutions for the same language in each folder, ranked according to the degree of algorithm optimization, and the file name prefix is the language name. For example: the performance of `c1.c` is better than the performance of `c2.c`.
- Each problem solution must contain a `main` function that contains all the test cases that can be thought of, making it easy to run offline. The solution function is written separately as a separate function.

### How to test problem's solution offline

- Entering a language environment requires only `make $language`. For example, the environment that enters Python is `make python`. It may take some time to enter a certain environment for the first time. The `Docker` image will be compiled first.
- All files in this directory will be mapped to the `/app` directory of `Container`.
- The environment of `Container` may be `Debian` or `Alpine`.

### Solutions' list

|Problem|C|C++|Go|Java|JavaScript|PHP|Python|Rust|
|:---:|:---:|:---:|:---:|:---:|:---:|:---:|:---:|:---:|
|[0001](https://leetcode.com/problems/two-sum)|[c1.c](https://github.com/6leetcode/6leetcode/blob/master/0001.%20Two%20Sum/c1.c)|[cpp1.cc](https://github.com/6leetcode/6leetcode/blob/master/0001.%20Two%20Sum/cpp1.cc)|[go1.go](https://github.com/6leetcode/6leetcode/blob/master/0001.%20Two%20Sum/go1.go)|[java1.java](https://github.com/6leetcode/6leetcode/blob/master/0001.%20Two%20Sum/java1.java)|||[python1.py](https://github.com/6leetcode/6leetcode/blob/master/0001.%20Two%20Sum/python1.py)||
|[0002](https://leetcode.com/problems/add-two-numbers)||||[java1.java](https://github.com/6leetcode/6leetcode/blob/master/0002.%20Add%20Two%20Numbers/java1.java)||[php1.php](https://github.com/6leetcode/6leetcode/blob/master/0002.%20Add%20Two%20Numbers/php1.php)|||
|[0003](https://leetcode.com/problems/longest-substring-without-repeating-characters)|||[go1.go](https://github.com/6leetcode/6leetcode/blob/master/0003.%20Longest%20Substring%20Without%20Repeating%20Characters/go1.go) [go2.go](https://github.com/6leetcode/6leetcode/blob/master/0003.%20Longest%20Substring%20Without%20Repeating%20Characters/go1.go)||||||
|[0004](https://leetcode.com/problems/median-of-two-sorted-arrays)|[c1.c](https://github.com/6leetcode/6leetcode/blob/master/0004.%20Median%20of%20Two%20Sorted%20Arrays/c1.c)|[cpp1.cc](https://github.com/6leetcode/6leetcode/blob/master/0004.%20Median%20of%20Two%20Sorted%20Arrays/cpp1.cc)|[go1.go](https://github.com/6leetcode/6leetcode/blob/master/0004.%20Median%20of%20Two%20Sorted%20Arrays/go1.go) [go2.go](https://github.com/6leetcode/6leetcode/blob/master/0004.%20Median%20of%20Two%20Sorted%20Arrays/go1.go)|||[php1.php](https://github.com/6leetcode/6leetcode/blob/master/0004.%20Median%20of%20Two%20Sorted%20Arrays/php1.php) [php2.php](https://github.com/6leetcode/6leetcode/blob/master/0004.%20Median%20of%20Two%20Sorted%20Arrays/php1.php)|[python2.py](https://github.com/6leetcode/6leetcode/blob/master/0004.%20Median%20of%20Two%20Sorted%20Arrays/python2.py) [python1.py](https://github.com/6leetcode/6leetcode/blob/master/0004.%20Median%20of%20Two%20Sorted%20Arrays/python2.py)||
|[0005](https://leetcode.com/problems/longest-palindromic-substring)|||||||||
|[0006](https://leetcode.com/problems/zigzag-conversion)|||[go1.go](https://github.com/6leetcode/6leetcode/blob/master/0006.%20ZigZag%20Conversion/go1.go)|||[php1.php](https://github.com/6leetcode/6leetcode/blob/master/0006.%20ZigZag%20Conversion/php1.php)|||
|[0007](https://leetcode.com/problems/reverse-integer)|[c1.c](https://github.com/6leetcode/6leetcode/blob/master/0007.%20Reverse%20Integer/c1.c)||[go1.go](https://github.com/6leetcode/6leetcode/blob/master/0007.%20Reverse%20Integer/go1.go)||||||
|[0008](https://leetcode.com/problems/string-to-integer-atoi)|||||||||
|[0011](https://leetcode.com/problems/container-with-most-water)|||[go1.go](https://github.com/6leetcode/6leetcode/blob/master/0011.%20Container%20With%20Most%20Water/go1.go)||||||
|[0012](https://leetcode.com/problems/integer-to-roman)|[c1.c](https://github.com/6leetcode/6leetcode/blob/master/0012.%20Integer%20to%20Roman/c1.c)|[cpp1.cc](https://github.com/6leetcode/6leetcode/blob/master/0012.%20Integer%20to%20Roman/cpp1.cc)|[go1.go](https://github.com/6leetcode/6leetcode/blob/master/0012.%20Integer%20to%20Roman/go1.go)||[js1.js](https://github.com/6leetcode/6leetcode/blob/master/0012.%20Integer%20to%20Roman/js1.js)|||[rust1.rs](https://github.com/6leetcode/6leetcode/blob/master/0012.%20Integer%20to%20Roman/rust1.rs)|
|[0036](https://leetcode.com/problems/valid-sudoku)|[c1.c](https://github.com/6leetcode/6leetcode/blob/master/0036.%20Valid%20Sudoku/c1.c)||||||||
|[0037](https://leetcode.com/problems/sudoku-solver)|[c1.c](https://github.com/6leetcode/6leetcode/blob/master/0037.%20Sudoku%20Solver/c1.c)|[cpp1.cc](https://github.com/6leetcode/6leetcode/blob/master/0037.%20Sudoku%20Solver/cpp1.cc)|||||||
|[0066](https://leetcode.com/problems/plus-one)|[c1.c](https://github.com/6leetcode/6leetcode/blob/master/0066.%20Plus%20One/c1.c)||[go1.c.go](https://github.com/6leetcode/6leetcode/blob/master/0066.%20Plus%20One/go1.c.go)||||||
|[0070](https://leetcode.com/problems/climbing-stairs)||[cpp1.cc](https://github.com/6leetcode/6leetcode/blob/master/0070.%20Climbing%20Stairs/cpp1.cc) [cpp2.cc](https://github.com/6leetcode/6leetcode/blob/master/0070.%20Climbing%20Stairs/cpp1.cc)|||||||
|[0136](https://leetcode.com/problems/single-number)|[c1.c](https://github.com/6leetcode/6leetcode/blob/master/0136.%20Single%20Number/c1.c)|[cpp1.cc](https://github.com/6leetcode/6leetcode/blob/master/0136.%20Single%20Number/cpp1.cc)|||||||
|[0169](https://leetcode.com/problems/majority-element)|[c1.c](https://github.com/6leetcode/6leetcode/blob/master/0169.%20Majority%20Element/c1.c)|[cpp1.cc](https://github.com/6leetcode/6leetcode/blob/master/0169.%20Majority%20Element/cpp1.cc)||||||[rust1.rs](https://github.com/6leetcode/6leetcode/blob/master/0169.%20Majority%20Element/rust1.rs)|
|[0231](https://leetcode.com/problems/power-of-two)|[c2.c](https://github.com/6leetcode/6leetcode/blob/master/0231.%20Power%20of%20Two/c2.c) [c1.c](https://github.com/6leetcode/6leetcode/blob/master/0231.%20Power%20of%20Two/c2.c)||||||||
|[0283](https://leetcode.com/problems/move-zeroes)|[c1.c](https://github.com/6leetcode/6leetcode/blob/master/0283.%20Move%20Zeroes/c1.c)||||||||
|[0458](https://leetcode.com/problems/poor-pigs)|[c1.c](https://github.com/6leetcode/6leetcode/blob/master/0458.%20Poor%20Pigs/c1.c)|[cpp1.cc](https://github.com/6leetcode/6leetcode/blob/master/0458.%20Poor%20Pigs/cpp1.cc)|[go1.go](https://github.com/6leetcode/6leetcode/blob/master/0458.%20Poor%20Pigs/go1.go)|[java1.java](https://github.com/6leetcode/6leetcode/blob/master/0458.%20Poor%20Pigs/java1.java)|[js1.js](https://github.com/6leetcode/6leetcode/blob/master/0458.%20Poor%20Pigs/js1.js)|[php1.php](https://github.com/6leetcode/6leetcode/blob/master/0458.%20Poor%20Pigs/php1.php)|[python1.py](https://github.com/6leetcode/6leetcode/blob/master/0458.%20Poor%20Pigs/python1.py)|[rust1.rs](https://github.com/6leetcode/6leetcode/blob/master/0458.%20Poor%20Pigs/rust1.rs)|