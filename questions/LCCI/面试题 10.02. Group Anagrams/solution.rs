use std::collections::HashMap;

pub struct Solution {}

// ------------------------------- solution begin -------------------------------
impl Solution {
  pub fn group_anagrams(strs: Vec<String>) -> Vec<Vec<String>> {
    let mut groups: HashMap<String, Vec<String>> = HashMap::new();
    let mut order: Vec<String> = vec![];
    for s in strs {
      let mut chars: Vec<char> = s.chars().collect();
      chars.sort();
      let key: String = chars.into_iter().collect();
      if !groups.contains_key(&key) {
        order.push(key.clone());
      }
      groups.entry(key).or_insert_with(Vec::new).push(s);
    }
    order
      .into_iter()
      .map(|key| groups.remove(&key).unwrap())
      .collect()
  }
}
// ------------------------------- solution end ---------------------------------

fn main() {
  let input: Vec<String> = ["eat", "tea", "tan", "ate", "nat", "bat"]
    .iter()
    .map(|s| s.to_string())
    .collect();
  println!("Input:  [\"eat\", \"tea\", \"tan\", \"ate\", \"nat\", \"bat\"]");
  println!("Output: {:?}", Solution::group_anagrams(input));
}
