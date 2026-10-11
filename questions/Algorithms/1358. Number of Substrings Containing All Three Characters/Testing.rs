pub struct Solution {}

// ------------------------------- solution begin -------------------------------
impl Solution {
  pub fn number_of_substrings(s: String) -> i32 {
    let b = s.as_bytes();
    let (mut a, mut bb, mut c, mut l, mut ans) = (0, 0, 0, 0usize, 0);
    for r in 0..b.len() {
      if b[r] == b'a' {
        a += 1;
      }
      if b[r] == b'b' {
        bb += 1;
      }
      if b[r] == b'c' {
        c += 1;
      }
      while a > 1 || bb > 1 || c > 1 {
        if b[l] == b'a' && a > 1 {
          a -= 1;
          l += 1;
        } else if b[l] == b'b' && bb > 1 {
          bb -= 1;
          l += 1;
        } else if b[l] == b'c' && c > 1 {
          c -= 1;
          l += 1;
        } else {
          break;
        }
      }
      if a > 0 && bb > 0 && c > 0 {
        ans += l as i32 + 1;
      }
    }
    ans
  }
}
// ------------------------------- solution end ---------------------------------

fn main() {
  let input = String::from("abcabc");
  println!("Input:  {}", input);
  println!("Output: {}", Solution::number_of_substrings(input));
}
