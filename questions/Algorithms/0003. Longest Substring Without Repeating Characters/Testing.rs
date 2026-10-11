pub struct Solution {}

// ------------------------------- solution begin -------------------------------
use std::collections::HashMap;
impl Solution {
  pub fn length_of_longest_substring(s: String) -> i32 {
    let chars: Vec<char> = s.chars().collect();
    let mut last: HashMap<char, usize> = HashMap::new();
    let mut start = 0usize;
    let mut result = 0usize;
    for i in 0..chars.len() {
      if let Some(&prev) = last.get(&chars[i]) {
        if prev >= start {
          start = prev + 1;
        }
      }
      last.insert(chars[i], i);
      if i - start + 1 > result {
        result = i - start + 1;
      }
    }
    result as i32
  }
}
// ------------------------------- solution end ---------------------------------

fn main() {
  let input = String::from("abcabcbb");
  println!("Input:  {}", input);
  println!("Output: {}", Solution::length_of_longest_substring(input));
}
