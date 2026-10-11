pub struct Solution {}

// ------------------------------- solution begin -------------------------------
impl Solution {
  pub fn my_pow(x: f64, n: i32) -> f64 {
    let mut x = x;
    let mut e = n as i64;
    if e < 0 {
      x = 1.0 / x;
      e = -e;
    }
    let mut res = 1.0;
    while e > 0 {
      if e & 1 == 1 {
        res *= x;
      }
      x *= x;
      e >>= 1;
    }
    res
  }
}
// ------------------------------- solution end ---------------------------------

fn main() {
  let input1 = 2.0;
  let input2 = 10;
  println!("Input:  {} {}", input1, input2);
  println!("Output: {}", Solution::my_pow(input1, input2));
}
