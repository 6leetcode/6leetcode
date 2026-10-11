pub struct Solution {}

// ------------------------------- solution begin -------------------------------
impl Solution {
  pub fn first_missing_positive(nums: Vec<i32>) -> i32 {
    let n = nums.len() as i32;
    let mut nums = nums;
    for i in 0..nums.len() {
      while nums[i] > 0 && nums[i] <= n && nums[(nums[i] - 1) as usize] != nums[i] {
        let j = (nums[i] - 1) as usize;
        nums.swap(i, j);
      }
    }
    for i in 0..nums.len() {
      if nums[i] != i as i32 + 1 {
        return i as i32 + 1;
      }
    }
    n + 1
  }
}
// ------------------------------- solution end ---------------------------------

fn main() {
  let input = vec![3, 4, -1, 1];
  println!("Input:  {:?}", input);
  println!("Output: {}", Solution::first_missing_positive(input));
}
