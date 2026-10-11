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
  let input = vec![
    "eat".to_string(),
    "tea".to_string(),
    "tan".to_string(),
    "ate".to_string(),
    "nat".to_string(),
    "bat".to_string(),
  ];
  println!("Input:  {:?}", input);
  println!("Output: {:?}", Solution::group_anagrams(input));
}
