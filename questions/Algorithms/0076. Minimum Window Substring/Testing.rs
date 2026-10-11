pub struct Solution {}

// ------------------------------- solution begin -------------------------------
impl Solution {
  pub fn min_window(s: String, t: String) -> String {
    let s = s.as_bytes();
    let mut need = [0i32; 128];
    let mut have = [0i32; 128];
    let mut required = 0;
    for &c in t.as_bytes() {
      if need[c as usize] == 0 {
        required += 1;
      }
      need[c as usize] += 1;
    }
    let (mut matched, mut left, mut start, mut min_len) = (0, 0usize, 0usize, usize::MAX);
    for right in 0..s.len() {
      let c = s[right] as usize;
      have[c] += 1;
      if need[c] > 0 && have[c] == need[c] {
        matched += 1;
      }
      while matched == required {
        if right - left + 1 < min_len {
          min_len = right - left + 1;
          start = left;
        }
        let lc = s[left] as usize;
        if need[lc] > 0 && have[lc] == need[lc] {
          matched -= 1;
        }
        have[lc] -= 1;
        left += 1;
      }
    }
    if min_len == usize::MAX {
      String::new()
    } else {
      String::from_utf8(s[start..start + min_len].to_vec()).unwrap()
    }
  }
}
// ------------------------------- solution end ---------------------------------

fn main() {
  let (s, t) = (String::from("ADOBECODEBANC"), String::from("ABC"));
  println!("Input:  {} {}", s, t);
  println!("Output: {}", Solution::min_window(s, t));
}
