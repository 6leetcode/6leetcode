pub struct Solution {}

// ------------------------------- solution begin -------------------------------
impl Solution {
  pub fn unique_paths(m: i32, n: i32) -> i32 {
    let n = n as usize;
    let mut dp = vec![1i64; n];
    for _ in 1..m {
      for j in 1..n {
        dp[j] += dp[j - 1];
      }
    }
    dp[n - 1] as i32
  }
}
// ------------------------------- solution end ---------------------------------

fn main() {
  let (m, n) = (3, 7);
  println!("Input:  {} {}", m, n);
  println!("Output: {}", Solution::unique_paths(m, n));
}
