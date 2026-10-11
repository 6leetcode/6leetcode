pub struct Solution {}

// ------------------------------- solution begin -------------------------------
impl Solution {
  pub fn is_power_of_three(n: i32) -> bool {
    n > 0 && 1162261467 % n == 0
  }
}
// ------------------------------- solution end ---------------------------------

fn main() {
  let input = 27;
  println!("Input:  {}", input);
  println!("Output: {}", Solution::is_power_of_three(input));
}
