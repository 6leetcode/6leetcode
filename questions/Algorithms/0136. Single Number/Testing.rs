pub struct Solution {}

// ------------------------------- solution begin -------------------------------
impl Solution {
  pub fn single_number(nums: Vec<i32>) -> i32 {
    nums.iter().fold(0, |acc, &x| acc ^ x)
  }
}
// ------------------------------- solution end ---------------------------------

fn main() {
  let input = vec![4, 1, 2, 1, 2];
  println!("Input:  {:?}", input);
  println!("Output: {}", Solution::single_number(input));
}
