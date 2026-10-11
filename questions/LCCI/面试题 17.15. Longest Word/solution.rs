use std::collections::HashSet;

pub struct Solution {}

// ------------------------------- solution begin -------------------------------
impl Solution {
  pub fn longest_word(mut words: Vec<String>) -> String {
    let dict: HashSet<String> = words.iter().cloned().collect();
    words.sort_by(|a, b| {
      if a.len() != b.len() {
        b.len().cmp(&a.len())
      } else {
        a.cmp(b)
      }
    });
    let can_form = |w: &str| -> bool {
      let n = w.len();
      let mut dp = vec![false; n + 1];
      dp[0] = true;
      for i in 1..=n {
        for j in 0..i {
          if !dp[j] {
            continue;
          }
          if i == n && j == 0 {
            continue;
          }
          if dict.contains(&w[j..i]) {
            dp[i] = true;
            break;
          }
        }
      }
      dp[n]
    };
    for w in &words {
      if can_form(w) {
        return w.clone();
      }
    }
    String::new()
  }
}
// ------------------------------- solution end ---------------------------------

fn main() {
  let words: Vec<String> = ["cat", "banana", "dog", "nana", "walk", "walker", "dogwalker"]
    .iter()
    .map(|s| s.to_string())
    .collect();
  println!("Input:  [\"cat\",\"banana\",\"dog\",\"nana\",\"walk\",\"walker\",\"dogwalker\"]");
  println!("Output: \"{}\"", Solution::longest_word(words));
}
