pub struct Solution {}

// ------------------------------- solution begin -------------------------------
impl Solution {
  pub fn exchange_bits(num: i32) -> i32 {
    let n = num as u32;
    (((n & 0xaaaaaaaau32) >> 1) | ((n & 0x55555555u32) << 1)) as i32
  }
}
// ------------------------------- solution end ---------------------------------

fn main() {
  let input = 2;
  println!("Input:  {}", input);
  println!("Output: {}", Solution::exchange_bits(input));
}
