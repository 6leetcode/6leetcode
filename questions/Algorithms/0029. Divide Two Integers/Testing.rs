pub struct Solution {}

// ------------------------------- solution begin -------------------------------
impl Solution {
  pub fn divide(dividend: i32, divisor: i32) -> i32 {
    if dividend == i32::MIN && divisor == -1 {
      return i32::MAX;
    }
    let mut a = (dividend as i64).abs();
    let mut b = (divisor as i64).abs();
    let sign = if (dividend > 0) ^ (divisor > 0) { -1 } else { 1 };
    let mut res: i64 = 0;
    while a >= b {
      let (mut temp, mut multiple) = (b, 1i64);
      while a >= temp * 2 {
        temp *= 2;
        multiple *= 2;
      }
      a -= temp;
      res += multiple;
    }
    (sign * res) as i32
  }
}
// ------------------------------- solution end ---------------------------------

fn main() {
  let input1 = 10;
  let input2 = 3;
  println!("Input:  {} {}", input1, input2);
  println!("Output: {}", Solution::divide(input1, input2));
}
