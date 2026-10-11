pub struct Solution {}

// ------------------------------- solution begin -------------------------------
impl Solution {
  pub fn is_unique(astr: String) -> bool {
    let mut seen = [false; 128];
    for c in astr.bytes() {
      if seen[c as usize] {
        return false;
      }
      seen[c as usize] = true;
    }
    true
  }
}
// ------------------------------- solution end ---------------------------------

fn main() {
  let input = String::from("leetcode");
  println!("Input:  {}", input);
  println!("Output: {}", Solution::is_unique(input));
}
