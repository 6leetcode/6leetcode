pub struct Solution {}

// ------------------------------- solution begin -------------------------------
impl Solution {
  pub fn letter_combinations(digits: String) -> Vec<String> {
    if digits.is_empty() {
      return vec![];
    }
    let map = ["abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"];
    let mut res = vec![String::new()];
    for d in digits.chars() {
      let letters = map[(d as u8 - b'2') as usize];
      let mut next = vec![];
      for prefix in &res {
        for c in letters.chars() {
          next.push(format!("{}{}", prefix, c));
        }
      }
      res = next;
    }
    res
  }
}
// ------------------------------- solution end ---------------------------------

fn main() {
  let input = String::from("23");
  println!("Input:  {}", input);
  println!("Output: {:?}", Solution::letter_combinations(input));
}
