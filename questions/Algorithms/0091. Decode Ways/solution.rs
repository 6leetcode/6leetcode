pub struct Solution {}

// ------------------------------- solution begin -------------------------------
impl Solution {
  pub fn num_decodings(s: String) -> i32 {
    let b = s.as_bytes();
    if b.is_empty() || b[0] == b'0' {
      return 0;
    }
    let mut pre = 1;
    let mut cur = 1;
    for i in 1..b.len() {
      let tmp = cur;
      if b[i] == b'0' {
        if b[i - 1] == b'1' || b[i - 1] == b'2' {
          cur = pre;
        } else {
          return 0;
        }
      } else if b[i - 1] == b'1' || (b[i - 1] == b'2' && b[i] >= b'1' && b[i] <= b'6') {
        cur = cur + pre;
      }
      pre = tmp;
    }
    cur
  }
}
// ------------------------------- solution end ---------------------------------

fn main() {
  let input = String::from("226");
  println!("Input:  {}", input);
  println!("Output: {}", Solution::num_decodings(input));
}
