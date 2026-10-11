pub struct Solution {}

// ------------------------------- solution begin -------------------------------
use std::collections::{HashMap, HashSet};
impl Solution {
  fn dfs(
    start: usize,
    s: &str,
    dict: &HashSet<String>,
    memo: &mut HashMap<usize, Vec<String>>,
  ) -> Vec<String> {
    if let Some(v) = memo.get(&start) {
      return v.clone();
    }
    if start == s.len() {
      return vec![String::new()];
    }
    let mut res: Vec<String> = Vec::new();
    for end in (start + 1)..=s.len() {
      if !s.is_char_boundary(end) {
        continue;
      }
      let w = &s[start..end];
      if dict.contains(w) {
        for tail in Solution::dfs(end, s, dict, memo) {
          if tail.is_empty() {
            res.push(w.to_string());
          } else {
            res.push(format!("{} {}", w, tail));
          }
        }
      }
    }
    memo.insert(start, res.clone());
    res
  }

  pub fn word_break(s: String, word_dict: Vec<String>) -> Vec<String> {
    let dict: HashSet<String> = word_dict.into_iter().collect();
    let mut memo: HashMap<usize, Vec<String>> = HashMap::new();
    Solution::dfs(0, &s, &dict, &mut memo)
  }
}
// ------------------------------- solution end ---------------------------------

fn run(s: &str, dict: Vec<&str>) {
  let words: Vec<String> = dict.iter().map(|w| w.to_string()).collect();
  println!("Input:  s = \"{}\", wordDict = {:?}", s, dict);
  println!("Output: {:?}", Solution::word_break(s.to_string(), words));
}

fn main() {
  run("catsanddog", vec!["cat", "cats", "and", "sand", "dog"]);
  run(
    "pineapplepenapple",
    vec!["apple", "pen", "applepen", "pine", "pineapple"],
  );
  run("catsandog", vec!["cats", "dog", "sand", "and", "cat"]);
}
