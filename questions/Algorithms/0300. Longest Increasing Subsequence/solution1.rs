pub struct Solution {}

// ------------------------------- solution begin -------------------------------
impl Solution {
  pub fn length_of_lis(nums: Vec<i32>) -> i32 {
    let n = nums.len();
    if n == 0 {
      return 0;
    }
    let mut dp = vec![1; n];
    let mut max_len = 1;
    for i in 0..n {
      for j in 0..i {
        if nums[i] > nums[j] {
          dp[i] = dp[i].max(dp[j] + 1);
        }
      }
      max_len = max_len.max(dp[i]);
    }
    max_len
  }
}
// ------------------------------- solution end ---------------------------------

fn main() {
  let inputs = vec![
    vec![10, 9, 2, 5, 3, 7, 101, 18],
    vec![0, 1, 0, 3, 2, 3],
    vec![7, 7, 7, 7, 7],
  ];
  for input in inputs {
    println!("Input:  {:?}", input);
    println!("Output: {}", Solution::length_of_lis(input));
  }
}
