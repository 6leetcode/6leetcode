pub struct Solution {}

// ------------------------------- solution begin -------------------------------
impl Solution {
  pub fn min_distance(word1: String, word2: String) -> i32 {
    let a = word1.as_bytes();
    let b = word2.as_bytes();
    let (m, n) = (a.len(), b.len());
    let mut dp: Vec<i32> = (0..=n as i32).collect();
    for i in 1..=m {
      let mut prev = dp[0];
      dp[0] = i as i32;
      for j in 1..=n {
        let tmp = dp[j];
        if a[i - 1] == b[j - 1] {
          dp[j] = prev;
        } else {
          dp[j] = 1 + prev.min(dp[j]).min(dp[j - 1]);
        }
        prev = tmp;
      }
    }
    dp[n]
  }
}
// ------------------------------- solution end ---------------------------------

fn main() {
  let (word1, word2) = (String::from("horse"), String::from("ros"));
  println!("Input:  {} {}", word1, word2);
  println!("Output: {}", Solution::min_distance(word1, word2));
}
