pub struct Solution {}

// ------------------------------- solution begin -------------------------------
impl Solution {
  pub fn trailing_zeroes(mut n: i32) -> i32 {
    let mut count = 0;
    while n >= 5 {
      n /= 5;
      count += n;
    }
    count
  }
}
// ------------------------------- solution end ---------------------------------

fn main() {
  let input = 5;
  println!("Input:  {}", input);
  println!("Output: {}", Solution::trailing_zeroes(input));
}
