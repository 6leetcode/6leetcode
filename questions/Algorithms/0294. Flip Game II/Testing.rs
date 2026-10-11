pub struct Solution {}

// ------------------------------- solution begin -------------------------------
impl Solution {
  pub fn can_win(s: String) -> bool {
    let mut b: Vec<u8> = s.into_bytes();
    Solution::win(&mut b)
  }

  fn win(b: &mut Vec<u8>) -> bool {
    for i in 1..b.len() {
      if b[i] == b'+' && b[i - 1] == b'+' {
        b[i] = b'-';
        b[i - 1] = b'-';
        let ok = !Solution::win(b);
        b[i] = b'+';
        b[i - 1] = b'+';
        if ok {
          return true;
        }
      }
    }
    false
  }
}
// ------------------------------- solution end ---------------------------------

fn main() {
  let input = String::from("++++");
  println!("Input:  {}", input);
  println!("Output: {}", Solution::can_win(input));
}
