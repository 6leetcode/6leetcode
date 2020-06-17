struct Solution {}

impl Solution {
    pub fn pow(num: &mut i32, p: usize) {
        for _i in 0..p {
            *num = *num * 10
        }
    }
    pub fn judge_point24(nums: Vec<i32>) -> bool {
        let array = vec![
            1111,
            1112,
            1113,
            1114,
            1115,
            1116,
            1117,
            1119,
            1122,
            1123,
            1124,
            1125,
            1133,
            1159,
            1167,
            1177,
            1178,
            1179,
            1189,
            1199,
            1222,
            1223,
            1299,
            1355,
            1499,
            1557,
            1558,
            1577,
            1667,
            1677,
            1678,
            1777,
            1778,
            1899,
            1999,
            2222,
            2226,
            2279,
            2299,
            2334,
            2555,
            2556,
            2599,
            2677,
            2777,
            2779,
            2799,
            2999,
            3358,
            3467,
            3488,
            3555,
            3577,
            4459,
            4466,
            4467,
            4499,
            4779,
            4999,
            5557,
            5558,
            5569,
            5579,
            5777,
            5778,
            5799,
            5899,
            5999,
            6667,
            6677,
            6678,
            6699,
            6777,
            6778,
            6779,
            6788,
            6999,
            7777,
            7778,
            7779,
            7788,
            7789,
            7799,
            7888,
            7899,
            7999,
            8888,
            8889,
            8899,
            8999,
            9999,
        ];
        let mut nums_array = nums;
        nums_array.sort();
        let mut input = 0;
        for i in 0..nums_array.len() {
            Solution::pow(&mut nums_array[i], 3 - i);
            input = nums_array[i] + input;
        }

        return !array.contains(&input);
    }
}

fn main() {
    let input = vec![8, 8, 3, 3];
    println!("Input:  {:?}", input);
    println!("Output: {}", Solution::judge_point24(input));
}
