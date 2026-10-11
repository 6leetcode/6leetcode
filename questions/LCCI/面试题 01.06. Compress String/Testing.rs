pub struct Solution {}

// ------------------------------- solution begin -------------------------------
impl Solution {
  pub fn compress_string(s: String) -> String {
    let b = s.as_bytes();
    let n = b.len();
    let mut res = String::new();
    let mut i = 0;
    while i < n {
      let mut j = i;
      while j < n && b[j] == b[i] {
        j += 1;
      }
      res.push(b[i] as char);
      res.push_str(&(j - i).to_string());
      i = j;
    }
    if res.len() < s.len() {
      res
    } else {
      s
    }
  }
}
// ------------------------------- solution end ---------------------------------

fn main() {
  let input = String::from("aabcccccaaa");
  println!("Input:  {}", input);
  println!("Output: {}", Solution::compress_string(input));
}
