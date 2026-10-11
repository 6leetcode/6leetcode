pub struct Solution {}

// ------------------------------- solution begin -------------------------------
impl Solution {
  pub fn is_match(s: String, p: String) -> bool {
    let s = s.as_bytes();
    let p = p.as_bytes();
    let (mut s_idx, mut p_idx) = (0usize, 0usize);
    let mut star: i32 = -1;
    let mut m = 0usize;
    while s_idx < s.len() {
      if p_idx < p.len() && (p[p_idx] == b'?' || p[p_idx] == s[s_idx]) {
        s_idx += 1;
        p_idx += 1;
      } else if p_idx < p.len() && p[p_idx] == b'*' {
        star = p_idx as i32;
        m = s_idx;
        p_idx += 1;
      } else if star != -1 {
        p_idx = star as usize + 1;
        m += 1;
        s_idx = m;
      } else {
        return false;
      }
    }
    while p_idx < p.len() && p[p_idx] == b'*' {
      p_idx += 1;
    }
    p_idx == p.len()
  }
}
// ------------------------------- solution end ---------------------------------

fn main() {
  let input1 = String::from("aa");
  let input2 = String::from("*");
  println!("Input:  {} {}", input1, input2);
  println!("Output: {}", Solution::is_match(input1, input2));
}
