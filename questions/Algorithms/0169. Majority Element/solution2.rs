struct Solution {}

// ------------------------------- solution begin -------------------------------
impl Solution {
    pub fn majority_element(nums: Vec<i32>) -> i32 {
        let mut candidate = nums[0];
        let mut count = 1;
        for i in 1..nums.len() {
            if count == 0 {
                candidate = nums[i];
                count = 1;
            } else if nums[i] == candidate {
                count += 1;
            } else {
                count -= 1;
            }
        }
        candidate
    }
}
// ------------------------------- solution end ---------------------------------

fn main() {
    let input = vec![-1i32, -1, 2147483647];
    println!("Input:  {:?}", input);
    println!("Output: {}", Solution::majority_element(input));
}
