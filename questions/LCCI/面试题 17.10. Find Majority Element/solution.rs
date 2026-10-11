pub struct Solution {}

// ------------------------------- solution begin -------------------------------
impl Solution {
  pub fn majority_element(nums: Vec<i32>) -> i32 {
    let mut candidate = nums[0];
    let mut count = 0;
    for &x in &nums {
      if count == 0 {
        candidate = x;
      }
      if x == candidate {
        count += 1;
      } else {
        count -= 1;
      }
    }
    let c = nums.iter().filter(|&&x| x == candidate).count();
    if c > nums.len() / 2 {
      candidate
    } else {
      -1
    }
  }
}
// ------------------------------- solution end ---------------------------------

fn main() {
  let nums = vec![1, 2, 5, 9, 5, 9, 5, 5, 5];
  println!("Input:  {:?}", nums);
  println!("Output: {}", Solution::majority_element(nums));
}
