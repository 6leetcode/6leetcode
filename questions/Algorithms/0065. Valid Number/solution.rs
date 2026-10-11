pub struct Solution {}

// ------------------------------- solution begin -------------------------------
impl Solution {
  pub fn is_number(s: String) -> bool {
    let b = s.trim().as_bytes();
    let n = b.len();
    let (mut i, mut seen_digit, mut seen_dot, mut seen_exp) = (0usize, false, false, false);
    if i < n && (b[i] == b'+' || b[i] == b'-') {
      i += 1;
    }
    while i < n {
      let c = b[i];
      if c.is_ascii_digit() {
        seen_digit = true;
      } else if c == b'.' {
        if seen_dot || seen_exp {
          return false;
        }
        seen_dot = true;
      } else if c == b'e' || c == b'E' {
        if seen_exp || !seen_digit {
          return false;
        }
        seen_exp = true;
        seen_digit = false;
        if i + 1 < n && (b[i + 1] == b'+' || b[i + 1] == b'-') {
          i += 1;
        }
      } else {
        return false;
      }
      i += 1;
    }
    seen_digit
  }
}
// ------------------------------- solution end ---------------------------------

fn main() {
  let input = String::from("2e10");
  println!("Input:  {}", input);
  println!("Output: {}", Solution::is_number(input));
}
