pub struct Solution {}

// ------------------------------- solution begin -------------------------------
impl Solution {
  pub fn add(mut a: i32, mut b: i32) -> i32 {
    while b != 0 {
      let sum = a ^ b;
      let carry = (a & b) << 1;
      a = sum;
      b = carry;
    }
    a
  }
}
// ------------------------------- solution end ---------------------------------

fn main() {
  let (input1, input2) = (-1, 2);
  println!("Input:  {} {}", input1, input2);
  println!("Output: {}", Solution::add(input1, input2));
}
