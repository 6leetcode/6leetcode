pub struct Solution {}

// ------------------------------- solution begin -------------------------------
impl Solution {
  pub fn num_distinct(s: String, t: String) -> i32 {
    let t: Vec<char> = t.chars().collect();
    let m = t.len();
    let mut dp = vec![0u64; m + 1];
    dp[0] = 1;
    for c in s.chars() {
      for j in (1..=m).rev() {
        if c == t[j - 1] {
          dp[j] += dp[j - 1];
        }
      }
    }
    dp[m] as i32
  }
}
// ------------------------------- solution end ---------------------------------

fn main() {
  let cases = [
    ("rabbbit", "rabbit"),
    ("babgbag", "bag"),
    ("ddd", "dd"),
  ];
  for (s, t) in cases.iter() {
    println!("Input:  \"{}\", \"{}\"", s, t);
    println!("Output: {}", Solution::num_distinct(s.to_string(), t.to_string()));
  }
}
