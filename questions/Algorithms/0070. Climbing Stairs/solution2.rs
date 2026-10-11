pub struct Solution {}

// ------------------------------- solution begin -------------------------------
impl Solution {
  pub fn climb_stairs(n: i32) -> i32 {
    // with this formal `$\frac{\frac{1+\sqrt{5}^{n}}{2}-\frac{1-\sqrt{5}^{n}}{2}}{\sqrt{5}}$`
    let s: f64 = 5f64.sqrt();
    let m: f64 = (n + 1) as f64;
    ((((1.0 + s) / 2.0).powf(m) + ((1.0 - s) / 2.0).powf(m)) / s + 0.5).floor() as i32
  }
}

// ------------------------------- solution end ---------------------------------

fn main() {
  let input: i32 = 3;
  println!("Input:  {}", input);
  let output = Solution::climb_stairs(input);
  println!("Output: {}", output);
}
