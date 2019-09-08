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

|Problem|C|C++|Go|Java|JS|PHP|Python|Rust|SQL|Bash|
|:---:|:---:|:---:|:---:|:---:|:---:|:---:|:---:|:---:|:---:|:---:|
|[0001](https://leetcode.com/problems/two-sum)|[1](https://github.com/6leetcode/6leetcode/blob/master/Algorithm/0001.%20Two%20Sum/c1.c)|[1](https://github.com/6leetcode/6leetcode/blob/master/Algorithm/0001.%20Two%20Sum/cpp1.cc)|[1](https://github.com/6leetcode/6leetcode/blob/master/Algorithm/0001.%20Two%20Sum/go1.go)|[1](https://github.com/6leetcode/6leetcode/blob/master/Algorithm/0001.%20Two%20Sum/java1.java)|||[1](https://github.com/6leetcode/6leetcode/blob/master/Algorithm/0001.%20Two%20Sum/python1.py)||-|-|
|[0002](https://leetcode.com/problems/add-two-numbers)||||[1](https://github.com/6leetcode/6leetcode/blob/master/Algorithm/0002.%20Add%20Two%20Numbers/java1.java)||[1](https://github.com/6leetcode/6leetcode/blob/master/Algorithm/0002.%20Add%20Two%20Numbers/php1.php)|||-|-|
|[0003](https://leetcode.com/problems/longest-substring-without-repeating-characters)|||[1](https://github.com/6leetcode/6leetcode/blob/master/Algorithm/0003.%20Longest%20Substring%20Without%20Repeating%20Characters/go1.go) [2](https://github.com/6leetcode/6leetcode/blob/master/Algorithm/0003.%20Longest%20Substring%20Without%20Repeating%20Characters/go2.go)|[1](https://github.com/6leetcode/6leetcode/blob/master/Algorithm/0003.%20Longest%20Substring%20Without%20Repeating%20Characters/java1.java) [2](https://github.com/6leetcode/6leetcode/blob/master/Algorithm/0003.%20Longest%20Substring%20Without%20Repeating%20Characters/java2.java) [3](https://github.com/6leetcode/6leetcode/blob/master/Algorithm/0003.%20Longest%20Substring%20Without%20Repeating%20Characters/java3.java) [4](https://github.com/6leetcode/6leetcode/blob/master/Algorithm/0003.%20Longest%20Substring%20Without%20Repeating%20Characters/java4.java)|||||-|-|
|[0004](https://leetcode.com/problems/median-of-two-sorted-arrays)|[1](https://github.com/6leetcode/6leetcode/blob/master/Algorithm/0004.%20Median%20of%20Two%20Sorted%20Arrays/c1.c)|[1](https://github.com/6leetcode/6leetcode/blob/master/Algorithm/0004.%20Median%20of%20Two%20Sorted%20Arrays/cpp1.cc)|[1](https://github.com/6leetcode/6leetcode/blob/master/Algorithm/0004.%20Median%20of%20Two%20Sorted%20Arrays/go1.go) [2](https://github.com/6leetcode/6leetcode/blob/master/Algorithm/0004.%20Median%20of%20Two%20Sorted%20Arrays/go2.go)|||[1](https://github.com/6leetcode/6leetcode/blob/master/Algorithm/0004.%20Median%20of%20Two%20Sorted%20Arrays/php1.php) [2](https://github.com/6leetcode/6leetcode/blob/master/Algorithm/0004.%20Median%20of%20Two%20Sorted%20Arrays/php2.php)|[1](https://github.com/6leetcode/6leetcode/blob/master/Algorithm/0004.%20Median%20of%20Two%20Sorted%20Arrays/python1.py) [2](https://github.com/6leetcode/6leetcode/blob/master/Algorithm/0004.%20Median%20of%20Two%20Sorted%20Arrays/python2.py)||-|-|
|[0005](https://leetcode.com/problems/longest-palindromic-substring)|||||||||-|-|
|[0006](https://leetcode.com/problems/zigzag-conversion)|||[1](https://github.com/6leetcode/6leetcode/blob/master/Algorithm/0006.%20ZigZag%20Conversion/go1.go)|||[1](https://github.com/6leetcode/6leetcode/blob/master/Algorithm/0006.%20ZigZag%20Conversion/php1.php)|||-|-|
|[0007](https://leetcode.com/problems/reverse-integer)|[1](https://github.com/6leetcode/6leetcode/blob/master/Algorithm/0007.%20Reverse%20Integer/c1.c)|[1](https://github.com/6leetcode/6leetcode/blob/master/Algorithm/0007.%20Reverse%20Integer/cpp1.cc)|[1](https://github.com/6leetcode/6leetcode/blob/master/Algorithm/0007.%20Reverse%20Integer/go1.go)||||||-|-|
|[0008](https://leetcode.com/problems/string-to-integer-atoi)|||||||||-|-|
|[0011](https://leetcode.com/problems/container-with-most-water)|||[1](https://github.com/6leetcode/6leetcode/blob/master/Algorithm/0011.%20Container%20With%20Most%20Water/go1.go)||||||-|-|
|[0012](https://leetcode.com/problems/integer-to-roman)|[1](https://github.com/6leetcode/6leetcode/blob/master/Algorithm/0012.%20Integer%20to%20Roman/c1.c)|[1](https://github.com/6leetcode/6leetcode/blob/master/Algorithm/0012.%20Integer%20to%20Roman/cpp1.cc)|[1](https://github.com/6leetcode/6leetcode/blob/master/Algorithm/0012.%20Integer%20to%20Roman/go1.go)||[1](https://github.com/6leetcode/6leetcode/blob/master/Algorithm/0012.%20Integer%20to%20Roman/js1.js)|||[1](https://github.com/6leetcode/6leetcode/blob/master/Algorithm/0012.%20Integer%20to%20Roman/rust1.rs)|-|-|
|[0036](https://leetcode.com/problems/valid-sudoku)|[1](https://github.com/6leetcode/6leetcode/blob/master/Algorithm/0036.%20Valid%20Sudoku/c1.c)||||||||-|-|
|[0037](https://leetcode.com/problems/sudoku-solver)|[1](https://github.com/6leetcode/6leetcode/blob/master/Algorithm/0037.%20Sudoku%20Solver/c1.c)|[1](https://github.com/6leetcode/6leetcode/blob/master/Algorithm/0037.%20Sudoku%20Solver/cpp1.cc)|||||||-|-|
|[0061](https://leetcode.com/problems/rotate-list)|[1](https://github.com/6leetcode/6leetcode/blob/master/Algorithm/0061.%20Rotate%20List/c1.c)||||||||-|-|
|[0066](https://leetcode.com/problems/plus-one)|[1](https://github.com/6leetcode/6leetcode/blob/master/Algorithm/0066.%20Plus%20One/c1.c)||[1](https://github.com/6leetcode/6leetcode/blob/master/Algorithm/0066.%20Plus%20One/go1.go)||||[1](https://github.com/6leetcode/6leetcode/blob/master/Algorithm/0066.%20Plus%20One/python1.py)||-|-|
|[0070](https://leetcode.com/problems/climbing-stairs)|[1](https://github.com/6leetcode/6leetcode/blob/master/Algorithm/0070.%20Climbing%20Stairs/c1.c) [2](https://github.com/6leetcode/6leetcode/blob/master/Algorithm/0070.%20Climbing%20Stairs/c2.c)|[1](https://github.com/6leetcode/6leetcode/blob/master/Algorithm/0070.%20Climbing%20Stairs/cpp1.cc) [2](https://github.com/6leetcode/6leetcode/blob/master/Algorithm/0070.%20Climbing%20Stairs/cpp2.cc)|||||||-|-|
|[0100](https://leetcode.com/problems/same-tree)|[1](https://github.com/6leetcode/6leetcode/blob/master/Algorithm/0100.%20Same%20Tree/c1.c)|[1](https://github.com/6leetcode/6leetcode/blob/master/Algorithm/0100.%20Same%20Tree/cpp1.cc)|||||||-|-|
|[0101](https://leetcode.com/problems/symmetric-tree)|[1](https://github.com/6leetcode/6leetcode/blob/master/Algorithm/0101.%20Symmetric%20Tree/c1.c)|[1](https://github.com/6leetcode/6leetcode/blob/master/Algorithm/0101.%20Symmetric%20Tree/cpp1.cc)|||||||-|-|
|[0136](https://leetcode.com/problems/single-number)|[1](https://github.com/6leetcode/6leetcode/blob/master/Algorithm/0136.%20Single%20Number/c1.c)|[1](https://github.com/6leetcode/6leetcode/blob/master/Algorithm/0136.%20Single%20Number/cpp1.cc)|||||||-|-|
|[0169](https://leetcode.com/problems/majority-element)|[1](https://github.com/6leetcode/6leetcode/blob/master/Algorithm/0169.%20Majority%20Element/c1.c) [2](https://github.com/6leetcode/6leetcode/blob/master/Algorithm/0169.%20Majority%20Element/c2.c)|[1](https://github.com/6leetcode/6leetcode/blob/master/Algorithm/0169.%20Majority%20Element/cpp1.cc)||||||[1](https://github.com/6leetcode/6leetcode/blob/master/Algorithm/0169.%20Majority%20Element/rust1.rs)|-|-|
|[0175](https://leetcode.com/problems/combine-two-tables)|-|-|-|-|-|-|-|-|[1](https://github.com/6leetcode/6leetcode/blob/master/Algorithm/0175.%20Combine%20Two%20Tables/sql1.sql)|-||||||||||-|-|
|[0192](https://leetcode.com/problems/word-frequency)|-|-|-|-|-|-|-|-|-|[1](https://github.com/6leetcode/6leetcode/blob/master/Algorithm/0192.%20Word%20Frequency/bash1.sh)|
|[0231](https://leetcode.com/problems/power-of-two)|[1](https://github.com/6leetcode/6leetcode/blob/master/Algorithm/0231.%20Power%20of%20Two/c1.c) [2](https://github.com/6leetcode/6leetcode/blob/master/Algorithm/0231.%20Power%20of%20Two/c2.c)|[1](https://github.com/6leetcode/6leetcode/blob/master/Algorithm/0231.%20Power%20of%20Two/cpp1.cc) [2](https://github.com/6leetcode/6leetcode/blob/master/Algorithm/0231.%20Power%20of%20Two/cpp2.cc)|||||||-|-|
|[0283](https://leetcode.com/problems/move-zeroes)|[1](https://github.com/6leetcode/6leetcode/blob/master/Algorithm/0283.%20Move%20Zeroes/c1.c)||||||||-|-|
|[0319](https://leetcode.com/problems/bulb-switcher)|[1](https://github.com/6leetcode/6leetcode/blob/master/Algorithm/0319.%20Bulb%20Switcher/c1.c)|[1](https://github.com/6leetcode/6leetcode/blob/master/Algorithm/0319.%20Bulb%20Switcher/cpp1.cc)|[1](https://github.com/6leetcode/6leetcode/blob/master/Algorithm/0319.%20Bulb%20Switcher/go1.go)||[1](https://github.com/6leetcode/6leetcode/blob/master/Algorithm/0319.%20Bulb%20Switcher/js1.js)||[1](https://github.com/6leetcode/6leetcode/blob/master/Algorithm/0319.%20Bulb%20Switcher/python1.py)|[1](https://github.com/6leetcode/6leetcode/blob/master/Algorithm/0319.%20Bulb%20Switcher/rust1.rs)|-|-|
|[0326](https://leetcode.com/problems/power-of-three)|[1](https://github.com/6leetcode/6leetcode/blob/master/Algorithm/0326.%20Power%20of%20Three/c1.c)|[1](https://github.com/6leetcode/6leetcode/blob/master/Algorithm/0326.%20Power%20of%20Three/cpp1.cc)|||||||-|-|
|[0344](https://leetcode.com/problems/reverse-string)|[1](https://github.com/6leetcode/6leetcode/blob/master/Algorithm/0344.%20Reverse%20String/c1.c)|[1](https://github.com/6leetcode/6leetcode/blob/master/Algorithm/0344.%20Reverse%20String/cpp1.cc)|||||[1](https://github.com/6leetcode/6leetcode/blob/master/Algorithm/0344.%20Reverse%20String/python1.py)|[1](https://github.com/6leetcode/6leetcode/blob/master/Algorithm/0344.%20Reverse%20String/rust1.rs)|-|-|
|[0458](https://leetcode.com/problems/poor-pigs)|[1](https://github.com/6leetcode/6leetcode/blob/master/Algorithm/0458.%20Poor%20Pigs/c1.c)|[1](https://github.com/6leetcode/6leetcode/blob/master/Algorithm/0458.%20Poor%20Pigs/cpp1.cc)|[1](https://github.com/6leetcode/6leetcode/blob/master/Algorithm/0458.%20Poor%20Pigs/go1.go)|[1](https://github.com/6leetcode/6leetcode/blob/master/Algorithm/0458.%20Poor%20Pigs/java1.java)|[1](https://github.com/6leetcode/6leetcode/blob/master/Algorithm/0458.%20Poor%20Pigs/js1.js)|[1](https://github.com/6leetcode/6leetcode/blob/master/Algorithm/0458.%20Poor%20Pigs/php1.php)|[1](https://github.com/6leetcode/6leetcode/blob/master/Algorithm/0458.%20Poor%20Pigs/python1.py)|[1](https://github.com/6leetcode/6leetcode/blob/master/Algorithm/0458.%20Poor%20Pigs/rust1.rs)|-|-|
|[0679](https://leetcode.com/problems/24-game)|[1](https://github.com/6leetcode/6leetcode/blob/master/Algorithm/0679.%2024%20Game/c1.c)|[1](https://github.com/6leetcode/6leetcode/blob/master/Algorithm/0679.%2024%20Game/cpp1.cc)|||||||-|-|
|[1114](https://leetcode.com/problems/print-in-order)|||||||||-|-|