struct Solution {}

impl Solution {
    pub fn majority_element(nums: Vec<i32>) -> i32 {
        let mut arr = nums;
        arr.sort();
        return arr[arr.len() / 2];
    }
}

fn main() {
    let input = vec![1i32, 5, 10, 2, 15];
    println!("Input: {:?}", input);
    println!("Output: {}", Solution::majority_element(input));
}
