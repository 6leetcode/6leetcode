pub struct Solution {}

// ------------------------------- solution begin -------------------------------
impl Solution {
  pub fn multi_search(big: String, smalls: Vec<String>) -> Vec<Vec<i32>> {
    let mut res = vec![];
    let b = big.as_bytes();
    for s in smalls {
      let mut pos = vec![];
      let sb = s.as_bytes();
      if !sb.is_empty() {
        for j in 0..=b.len().saturating_sub(sb.len()) {
          if &b[j..j + sb.len()] == sb {
            pos.push(j as i32);
          }
        }
      }
      res.push(pos);
    }
    res
  }
}
// ------------------------------- solution end ---------------------------------

fn main() {
  let big = String::from("mississippi");
  let smalls: Vec<String> = ["is", "ppi", "hi", "sis", "i", "ssippi"]
    .iter()
    .map(|s| s.to_string())
    .collect();
  println!("Input:  big = \"mississippi\", smalls = [\"is\",\"ppi\",\"hi\",\"sis\",\"i\",\"ssippi\"]");
  println!("Output: {:?}", Solution::multi_search(big, smalls));
}
