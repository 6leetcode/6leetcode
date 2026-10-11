struct Solution {}

// ------------------------------- solution begin -------------------------------
impl Solution {
    pub fn majority_element(nums: Vec<i32>) -> i32 {
        let mut arr = nums;
        arr.sort();
        return arr[arr.len() / 2];
    }
}
// ------------------------------- solution end ---------------------------------

fn main() {
    let input = vec![-1i32, -1, 2147483647];
    println!("Input:  {:?}", input);
    println!("Output: {}", Solution::majority_element(input));
}
