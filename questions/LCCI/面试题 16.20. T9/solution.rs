pub struct Solution {}

// ------------------------------- solution begin -------------------------------
impl Solution {
  pub fn t9(num: String, words: Vec<String>) -> Vec<String> {
    let mapping = ["", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"];
    let n = num.as_bytes();
    let mut res = vec![];
    for w in words {
      if w.len() != n.len() {
        continue;
      }
      let wb = w.as_bytes();
      let mut ok = true;
      for j in 0..wb.len() {
        let letters = mapping[(n[j] - b'0') as usize];
        if !letters.contains(wb[j] as char) {
          ok = false;
          break;
        }
      }
      if ok {
        res.push(w);
      }
    }
    res
  }
}
// ------------------------------- solution end ---------------------------------

fn main() {
  let words: Vec<String> = ["tree", "used"].iter().map(|s| s.to_string()).collect();
  println!("Input:  num = \"8733\", words = [\"tree\", \"used\"]");
  println!("Output: {:?}", Solution::t9("8733".to_string(), words));
}
