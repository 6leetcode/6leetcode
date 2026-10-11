pub struct Solution {}

// ------------------------------- solution begin -------------------------------
impl Solution {
  pub fn gray_code(n: i32) -> Vec<i32> {
    (0..(1 << n)).map(|i| (i >> 1) ^ i).collect()
  }
}
// ------------------------------- solution end ---------------------------------

fn main() {
  let input = 2;
  println!("Input:  {}", input);
  println!("Output: {:?}", Solution::gray_code(input));
}
