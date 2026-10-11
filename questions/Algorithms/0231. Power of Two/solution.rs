pub struct Solution {}

// ------------------------------- solution begin -------------------------------
impl Solution {
  pub fn is_power_of_two(n: i32) -> bool {
    n > 0 && n & (n - 1) == 0
  }
}
// ------------------------------- solution end ---------------------------------

fn main() {
  let input = 16;
  println!("Input:  {}", input);
  println!("Output: {}", Solution::is_power_of_two(input));
}
