pub struct Solution {}

// ------------------------------- solution begin -------------------------------
impl Solution {
  pub fn is_power_of_two(n: i32) -> bool {
    let mut cnt = 0; // num of bits 1
    let mut m = n;
    while m > 0 {
      if m & 1 == 1 {
        cnt += 1;
        if cnt > 1 {
          return false;
        }
      }
      m >>= 1;
    }
    cnt == 1
  }
}
// ------------------------------- solution end ---------------------------------

fn main() {
  let input = 16;
  println!("Input:  {}", input);
  println!("Output: {}", Solution::is_power_of_two(input));
}
