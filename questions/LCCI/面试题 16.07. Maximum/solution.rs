pub struct Solution {}

// ------------------------------- solution begin -------------------------------
impl Solution {
  pub fn maximum(a: i32, b: i32) -> i32 {
    let diff = a as i64 - b as i64;
    let k = ((diff >> 63) & 1) as i32;
    a * (1 - k) + b * k
  }
}
// ------------------------------- solution end ---------------------------------

fn main() {
  let (a, b) = (1, 2);
  println!("Input:  a = {}, b = {}", a, b);
  println!("Output: {}", Solution::maximum(a, b));
}
