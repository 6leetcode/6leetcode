pub struct Solution {}

// ------------------------------- solution begin -------------------------------
impl Solution {
  pub fn find_substring(s: String, words: Vec<String>) -> Vec<i32> {
    let mut res = vec![];
    if words.is_empty() || s.is_empty() {
      return res;
    }
    let w = words[0].len();
    let total = w * words.len();
    let n = s.len();
    if n < total {
      return res;
    }
    let bytes = s.as_bytes();
    for i in 0..=n - total {
      let mut used = vec![false; words.len()];
      let mut ok = true;
      for j in 0..words.len() {
        let part = &bytes[i + j * w..i + (j + 1) * w];
        let mut found = false;
        for t in 0..words.len() {
          if !used[t] && part == words[t].as_bytes() {
            used[t] = true;
            found = true;
            break;
          }
        }
        if !found {
          ok = false;
          break;
        }
      }
      if ok {
        res.push(i as i32);
      }
    }
    res
  }
}
// ------------------------------- solution end ---------------------------------

fn main() {
  let input1 = String::from("barfoothefoobarman");
  let input2 = vec!["foo".to_string(), "bar".to_string()];
  println!("Input:  {} {:?}", input1, input2);
  println!("Output: {:?}", Solution::find_substring(input1, input2));
}
