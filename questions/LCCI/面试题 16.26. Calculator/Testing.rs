pub struct Solution {}

// ------------------------------- solution begin -------------------------------
impl Solution {
  pub fn calculate(s: String) -> i32 {
    let b = s.as_bytes();
    let n = b.len();
    let (mut result, mut prev, mut cur) = (0i64, 0i64, 0i64);
    let mut op = b'+';
    for i in 0..=n {
      if i < n && b[i].is_ascii_digit() {
        cur = cur * 10 + (b[i] - b'0') as i64;
      } else if i == n || b[i] != b' ' {
        match op {
          b'+' => {
            result += prev;
            prev = cur;
          }
          b'-' => {
            result += prev;
            prev = -cur;
          }
          b'*' => prev *= cur,
          b'/' => prev /= cur,
          _ => {}
        }
        if i < n {
          op = b[i];
        }
        cur = 0;
      }
    }
    (result + prev) as i32
  }
}
// ------------------------------- solution end ---------------------------------

fn main() {
  let input = String::from("3+2*2");
  println!("Input:  {:?}", input);
  println!("Output: {}", Solution::calculate(input));
}
