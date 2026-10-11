pub struct Solution {}

// ------------------------------- solution begin -------------------------------
impl Solution {
  pub fn number_of2s_in_range(n: i32) -> i32 {
    let mut count: i64 = 0;
    let mut factor: i64 = 1;
    while factor <= n as i64 {
      let cur = (n as i64 / factor) % 10;
      let higher = n as i64 / (factor * 10);
      let lower = n as i64 % factor;
      if cur < 2 {
        count += higher * factor;
      } else if cur == 2 {
        count += higher * factor + lower + 1;
      } else {
        count += (higher + 1) * factor;
      }
      factor *= 10;
    }
    count as i32
  }
}
// ------------------------------- solution end ---------------------------------

fn main() {
  let input = 25;
  println!("Input:  {}", input);
  println!("Output: {}", Solution::number_of2s_in_range(input));
}
