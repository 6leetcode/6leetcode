pub struct Solution {}

// ------------------------------- solution begin -------------------------------
impl Solution {
  pub fn replace_spaces(s: String, length: i32) -> String {
    s[..length as usize].replace(' ', "%20")
  }
}
// ------------------------------- solution end ---------------------------------

fn main() {
  let input = String::from("Mr John Smith ");
  let length = 13;
  println!("Input:  {:?}, {}", input, length);
  println!("Output: {:?}", Solution::replace_spaces(input, length));
}
