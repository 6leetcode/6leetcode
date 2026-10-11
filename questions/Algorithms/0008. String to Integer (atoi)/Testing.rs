pub struct Solution {}

// ------------------------------- solution begin -------------------------------
impl Solution {
  pub fn my_atoi(s: String) -> i32 {
    let bytes = s.as_bytes();
    let n = bytes.len();
    let mut i = 0;
    while i < n && bytes[i] == b' ' {
      i += 1;
    }

    let mut sign = 1i64;
    if i < n && (bytes[i] == b'+' || bytes[i] == b'-') {
      if bytes[i] == b'-' {
        sign = -1;
      }
      i += 1;
    }

    let mut num = 0i64;
    while i < n && bytes[i].is_ascii_digit() {
      num = num * 10 + (bytes[i] - b'0') as i64;
      if sign == 1 && num > i32::MAX as i64 {
        return i32::MAX;
      }
      if sign == -1 && -num < i32::MIN as i64 {
        return i32::MIN;
      }
      i += 1;
    }

    (sign * num) as i32
  }
}
// ------------------------------- solution end ---------------------------------

fn main() {
  let input = String::from(" -42");
  println!("Input:  {}", input);
  println!("Output: {}", Solution::my_atoi(input));
}
