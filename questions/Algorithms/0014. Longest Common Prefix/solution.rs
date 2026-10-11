pub struct Solution {}

// ------------------------------- solution begin -------------------------------
impl Solution {
  pub fn longest_common_prefix(strs: Vec<String>) -> String {
    if strs.is_empty() {
      return String::new();
    }
    let mut prefix = strs[0].clone();
    for s in &strs[1..] {
      while !s.starts_with(&prefix) {
        prefix.pop();
        if prefix.is_empty() {
          return String::new();
        }
      }
    }
    prefix
  }
}
// ------------------------------- solution end ---------------------------------

fn main() {
  let input = vec!["flower".to_string(), "flow".to_string(), "flight".to_string()];
  println!("Input:  {:?}", input);
  println!("Output: {}", Solution::longest_common_prefix(input));
}
