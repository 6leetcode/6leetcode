pub struct Solution {}

// ------------------------------- solution begin -------------------------------
impl Solution {
  pub fn check_permutation(s1: String, s2: String) -> bool {
    let (a, b) = (s1.as_bytes(), s2.as_bytes());
    if a.len() != b.len() {
      return false;
    }
    let mut count = [0i32; 128];
    for i in 0..a.len() {
      count[a[i] as usize] += 1;
      count[b[i] as usize] -= 1;
    }
    count.iter().all(|&c| c == 0)
  }
}
// ------------------------------- solution end ---------------------------------

fn main() {
  let (s1, s2) = (String::from("abc"), String::from("bca"));
  println!("Input:  {} {}", s1, s2);
  println!("Output: {}", Solution::check_permutation(s1, s2));
}
