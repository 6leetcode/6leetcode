pub struct Solution {}

// ------------------------------- solution begin -------------------------------
impl Solution {
  pub fn plus_one(digits: Vec<i32>) -> Vec<i32> {
    let mut digits = digits;
    let mut carry = 1;
    for i in (0..digits.len()).rev() {
      let new_digit: i32 = (digits[i] + carry) % 10;
      carry = (digits[i] + carry) / 10;
      digits[i] = new_digit;
    }
    if carry > 0 {
      digits.insert(0, 1);
    }
    digits
  }
}
// ------------------------------- solution end ---------------------------------

fn main() {
  let input = vec![9, 9];
  println!("Input:  {:?}", input);
  println!("Output: {:?}", Solution::plus_one(input));
}
