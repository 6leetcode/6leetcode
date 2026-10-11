pub struct Solution {}

// ------------------------------- solution begin -------------------------------
impl Solution {
  pub fn is_palindrome(x: i32) -> bool {
    if x < 0 {
      return false;
    }
    let (mut n, mut k) = (x, 0i64);
    while n > 0 {
      k = k * 10 + (n % 10) as i64;
      n /= 10;
    }
    k == x as i64
  }
}
// ------------------------------- solution end ---------------------------------

fn main() {
  let input = 121;
  println!("Input:  {}", input);
  println!("Output: {}", Solution::is_palindrome(input));
}
