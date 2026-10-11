pub struct Solution {}

// ------------------------------- solution begin -------------------------------
impl Solution {
  pub fn ways_to_change(n: i32) -> i32 {
    const MOD: i64 = 1000000007;
    let n = n as usize;
    let mut dp = vec![0i64; n + 1];
    dp[0] = 1;
    for coin in [1usize, 5, 10, 25] {
      for i in coin..=n {
        dp[i] = (dp[i] + dp[i - coin]) % MOD;
      }
    }
    dp[n] as i32
  }
}
// ------------------------------- solution end ---------------------------------

fn main() {
  let input = 10;
  println!("Input:  {}", input);
  println!("Output: {}", Solution::ways_to_change(input));
}
