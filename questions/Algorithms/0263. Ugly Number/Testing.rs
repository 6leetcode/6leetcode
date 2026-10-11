pub struct Solution {}

// ------------------------------- solution begin -------------------------------
impl Solution {
  pub fn is_ugly(mut num: i32) -> bool {
    if num < 1 {
      return false;
    }
    for f in [2, 3, 5] {
      while num % f == 0 {
        num /= f;
      }
    }
    num == 1
  }
}
// ------------------------------- solution end ---------------------------------

fn main() {
  let input = 14;
  println!("Input:  {}", input);
  println!("Output: {}", Solution::is_ugly(input));
}
