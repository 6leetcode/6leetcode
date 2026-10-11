pub struct Solution {}

// ------------------------------- solution begin -------------------------------
impl Solution {
  pub fn num_trees(n: i32) -> i32 {
    let n = n as usize;
    let mut dp = vec![0i64; n + 1];
    dp[0] = 1;
    for i in 1..=n {
      for j in 1..=i {
        dp[i] += dp[j - 1] * dp[i - j];
      }
    }
    dp[n] as i32
  }
}
// ------------------------------- solution end ---------------------------------

fn main() {
  let input = 3;
  println!("Input:  {}", input);
  println!("Output: {}", Solution::num_trees(input));
}
