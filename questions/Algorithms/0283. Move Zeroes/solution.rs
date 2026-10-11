pub struct Solution {}

// ------------------------------- solution begin -------------------------------
impl Solution {
  pub fn move_zeroes(nums: &mut Vec<i32>) {
    let mut left = 0;
    for right in 0..nums.len() {
      if nums[right] != 0 {
        nums.swap(left, right);
        left += 1;
      }
    }
  }
}
// ------------------------------- solution end ---------------------------------

fn main() {
  let mut input = vec![0, 1, 0, 3, 12];
  println!("Input:  {:?}", input);
  Solution::move_zeroes(&mut input);
  println!("Output: {:?}", input);
}
