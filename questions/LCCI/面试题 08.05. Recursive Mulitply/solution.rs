pub struct Solution {}

// ------------------------------- solution begin -------------------------------
impl Solution {
  pub fn multiply(a: i32, b: i32) -> i32 {
    let (a, b) = if a < b { (b, a) } else { (a, b) };
    if b == 0 {
      return 0;
    }
    if b == 1 {
      return a;
    }
    if b & 1 == 1 {
      a + Solution::multiply(a, b - 1)
    } else {
      Solution::multiply(a << 1, b >> 1)
    }
  }
}
// ------------------------------- solution end ---------------------------------

fn main() {
  let (a, b) = (3, 4);
  println!("Input:  A = {}, B = {}", a, b);
  println!("Output: {}", Solution::multiply(a, b));
}
