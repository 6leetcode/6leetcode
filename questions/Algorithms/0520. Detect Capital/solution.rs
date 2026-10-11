pub struct Solution {}

// ------------------------------- solution begin -------------------------------
impl Solution {
  pub fn detect_capital_use(word: String) -> bool {
    let b = word.as_bytes();
    let upper = b.iter().filter(|&&c| c.is_ascii_uppercase()).count();
    let lower = b.len() - upper;
    upper == b.len() || lower == b.len() || (upper == 1 && b[0].is_ascii_uppercase())
  }
}
// ------------------------------- solution end ---------------------------------

fn main() {
  let input = String::from("Google");
  println!("Input:  {}", input);
  println!("Output: {}", Solution::detect_capital_use(input));
}
