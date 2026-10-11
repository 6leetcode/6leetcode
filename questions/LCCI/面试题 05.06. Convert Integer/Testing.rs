pub struct Solution {}

// ------------------------------- solution begin -------------------------------
impl Solution {
  pub fn convert_integer(a: i32, b: i32) -> i32 {
    ((a ^ b) as u32).count_ones() as i32
  }
}
// ------------------------------- solution end ---------------------------------

fn main() {
  let (a, b) = (29, 15);
  println!("Input:  A = {}, B = {}", a, b);
  println!("Output: {}", Solution::convert_integer(a, b));
}
