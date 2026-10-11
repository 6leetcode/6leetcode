pub struct Solution {}

// ------------------------------- solution begin -------------------------------
impl Solution {
  pub fn find_string(words: Vec<String>, s: String) -> i32 {
    let mut lo = 0i32;
    let mut hi = words.len() as i32 - 1;
    while lo <= hi {
      let mid = lo + (hi - lo) / 2;
      let mut m = mid;
      while m < hi && words[m as usize].is_empty() {
        m += 1;
      }
      if words[m as usize].is_empty() {
        hi = mid - 1;
        continue;
      }
      if words[m as usize] == s {
        return m;
      }
      if words[m as usize] < s {
        lo = m + 1;
      } else {
        hi = mid - 1;
      }
    }
    -1
  }
}
// ------------------------------- solution end ---------------------------------

fn main() {
  let words: Vec<String> = ["at", "", "", "", "ball", "", "", "car", "", "", "dad", "", ""]
    .iter()
    .map(|s| s.to_string())
    .collect();
  let s = String::from("ball");
  println!("Input:  [\"at\", \"\", \"\", \"\", \"ball\", \"\", \"\", \"car\", \"\", \"\", \"dad\", \"\", \"\"], s = \"ball\"");
  println!("Output: {}", Solution::find_string(words, s));
}
