pub struct Solution {}

// ------------------------------- solution begin -------------------------------
impl Solution {
  pub fn is_fliped_string(s1: String, s2: String) -> bool {
    s1.len() == s2.len() && format!("{}{}", s2, s2).contains(&s1)
  }
}
// ------------------------------- solution end ---------------------------------

fn main() {
  let (s1, s2) = (String::from("waterbottle"), String::from("erbottlewat"));
  println!("Input:  {} {}", s1, s2);
  println!("Output: {}", Solution::is_fliped_string(s1, s2));
}
