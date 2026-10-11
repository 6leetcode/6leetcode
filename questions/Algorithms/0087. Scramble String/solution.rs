pub struct Solution {}

// ------------------------------- solution begin -------------------------------
impl Solution {
  pub fn is_scramble(s1: String, s2: String) -> bool {
    fn check(a: &[u8], b: &[u8]) -> bool {
      if a == b {
        return true;
      }
      if a.len() == 1 {
        return false;
      }
      let mut cnt = [0i32; 26];
      for i in 0..a.len() {
        cnt[(a[i] - b'a') as usize] += 1;
        cnt[(b[i] - b'a') as usize] -= 1;
      }
      if cnt.iter().any(|&c| c != 0) {
        return false;
      }
      let n = a.len();
      for i in 1..n {
        if (check(&a[..i], &b[..i]) && check(&a[i..], &b[i..]))
          || (check(&a[..i], &b[n - i..]) && check(&a[i..], &b[..n - i]))
        {
          return true;
        }
      }
      false
    }
    check(s1.as_bytes(), s2.as_bytes())
  }
}
// ------------------------------- solution end ---------------------------------

fn main() {
  let (s1, s2) = (String::from("great"), String::from("rgeat"));
  println!("Input:  {} {}", s1, s2);
  println!("Output: {}", Solution::is_scramble(s1, s2));
}
