pub struct Solution {}

// ------------------------------- solution begin -------------------------------
impl Solution {
  pub fn my_sqrt(x: i32) -> i32 {
    let mut r = (x as f64).sqrt() as i64;
    while (r + 1) * (r + 1) <= x as i64 {
      r += 1;
    }
    while r * r > x as i64 {
      r -= 1;
    }
    r as i32
  }
}
// ------------------------------- solution end ---------------------------------

fn main() {
  let input = 8;
  println!("Input:  {}", input);
  println!("Output: {}", Solution::my_sqrt(input));
}
