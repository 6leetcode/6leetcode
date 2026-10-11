pub struct Solution {}

// ------------------------------- solution begin -------------------------------
impl Solution {
  pub fn str_str(haystack: String, needle: String) -> i32 {
    let n = haystack.len();
    let m = needle.len();
    if m == 0 {
      return 0;
    }
    let h = haystack.as_bytes();
    let nd = needle.as_bytes();
    for i in 0..=n - m {
      if &h[i..i + m] == nd {
        return i as i32;
      }
    }
    -1
  }
}
// ------------------------------- solution end ---------------------------------

fn main() {
  let input1 = String::from("sadbutsad");
  let input2 = String::from("sad");
  println!("Input:  {} {}", input1, input2);
  println!("Output: {}", Solution::str_str(input1, input2));
}
