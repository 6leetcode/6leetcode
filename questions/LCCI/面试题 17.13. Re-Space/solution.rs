use std::collections::HashSet;

pub struct Solution {}

// ------------------------------- solution begin -------------------------------
impl Solution {
  pub fn respace(dictionary: Vec<String>, sentence: String) -> i32 {
    let dict: HashSet<&str> = dictionary.iter().map(|s| s.as_str()).collect();
    let n = sentence.len();
    let mut dp = vec![0i32; n + 1];
    for i in 1..=n {
      dp[i] = dp[i - 1] + 1;
      for w in &dictionary {
        let wl = w.len();
        if i >= wl && &sentence[i - wl..i] == w.as_str() {
          dp[i] = dp[i].min(dp[i - wl]);
        }
      }
    }
    let _ = dict;
    dp[n]
  }
}
// ------------------------------- solution end ---------------------------------

fn main() {
  let dictionary: Vec<String> = ["looked", "just", "like", "her", "brother"]
    .iter()
    .map(|s| s.to_string())
    .collect();
  let sentence = String::from("jesslookedjustliketimherbrother");
  println!("Input:  dictionary = [looked, just, like, her, brother], sentence = \"jesslookedjustliketimherbrother\"");
  println!("Output: {}", Solution::respace(dictionary, sentence));
}
