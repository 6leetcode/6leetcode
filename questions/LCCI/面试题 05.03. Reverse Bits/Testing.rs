pub struct Solution {}

// ------------------------------- solution begin -------------------------------
impl Solution {
  pub fn reverse_bits(num: i32) -> i32 {
    let (mut best, mut prev, mut cur) = (0, 0, 0);
    for i in 0..32 {
      if (num >> i) & 1 == 1 {
        cur += 1;
      } else {
        best = best.max(prev + cur + 1);
        prev = cur;
        cur = 0;
      }
    }
    best = best.max(prev + cur + 1);
    best.min(32)
  }
}
// ------------------------------- solution end ---------------------------------

fn main() {
  let input = 1775;
  println!("Input:  {}", input);
  println!("Output: {}", Solution::reverse_bits(input));
}
