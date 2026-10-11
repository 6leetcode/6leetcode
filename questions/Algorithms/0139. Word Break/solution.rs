pub struct Solution {}

// ------------------------------- solution begin -------------------------------
use std::collections::HashSet;
impl Solution {
  pub fn word_break(s: String, word_dict: Vec<String>) -> bool {
    let n = s.len();
    let dict: HashSet<&str> = word_dict.iter().map(|w| w.as_str()).collect();
    let mut dp = vec![false; n + 1];
    dp[0] = true;
    for i in 1..=n {
      for j in 0..i {
        if dp[j] && dict.contains(&s[j..i]) {
          dp[i] = true;
          break;
        }
      }
    }
    dp[n]
  }
}
// ------------------------------- solution end ---------------------------------

fn run(s: &str, dict: Vec<&str>) {
  let words: Vec<String> = dict.iter().map(|w| w.to_string()).collect();
  println!("Input:  s = \"{}\", wordDict = {:?}", s, dict);
  println!("Output: {}", Solution::word_break(s.to_string(), words));
}

fn main() {
  run("leetcode", vec!["leet", "code"]);
  run("applepenapple", vec!["apple", "pen"]);
  run("catsandog", vec!["cats", "dog", "sand", "and", "cat"]);
}
