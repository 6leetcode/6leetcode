pub struct Solution {}

// ------------------------------- solution begin -------------------------------
impl Solution {
  pub fn insert_bits(n: i32, m: i32, i: i32, j: i32) -> i32 {
    let mask: u32 = ((1u32 << (j - i + 1)) - 1) << i;
    let n = (n as u32 & !mask) | ((m as u32) << i);
    n as i32
  }
}
// ------------------------------- solution end ---------------------------------

fn main() {
  let (n, m, i, j) = (1024, 19, 2, 6);
  println!("Input:  N = 10000000000, M = 10011, i = 2, j = 6");
  println!("Output: {}", Solution::insert_bits(n, m, i, j));
}
