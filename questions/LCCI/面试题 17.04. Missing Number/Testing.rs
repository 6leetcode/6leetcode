pub struct Solution {}

// ------------------------------- solution begin -------------------------------
impl Solution {
  pub fn missing_number(nums: Vec<i32>) -> i32 {
    let mut res = nums.len() as i32;
    for (i, &x) in nums.iter().enumerate() {
      res ^= i as i32 ^ x;
    }
    res
  }
}
// ------------------------------- solution end ---------------------------------

fn main() {
  let nums = vec![9, 6, 4, 2, 3, 5, 7, 0, 1];
  println!("Input:  {:?}", nums);
  println!("Output: {}", Solution::missing_number(nums));
}
