pub struct Solution {}

// ------------------------------- solution begin -------------------------------
impl Solution {
  pub fn one_edit_away(first: String, second: String) -> bool {
    let (a, b) = (first.as_bytes(), second.as_bytes());
    let (m, n) = (a.len(), b.len());
    if m.abs_diff(n) > 1 {
      return false;
    }
    if m > n {
      return Solution::one_edit_away(second, first);
    }
    for i in 0..m {
      if a[i] != b[i] {
        if m == n {
          return a[i + 1..] == b[i + 1..];
        }
        return a[i..] == b[i + 1..];
      }
    }
    true
  }
}
// ------------------------------- solution end ---------------------------------

fn main() {
  let (first, second) = (String::from("pale"), String::from("ple"));
  println!("Input:  {} {}", first, second);
  println!("Output: {}", Solution::one_edit_away(first, second));
}
