pub struct Solution {}

// ------------------------------- solution begin -------------------------------
impl Solution {
  pub fn generate_possible_next_moves(s: String) -> Vec<String> {
    let b = s.as_bytes();
    let mut res = vec![];
    for i in 0..b.len().saturating_sub(1) {
      if b[i] == b'+' && b[i + 1] == b'+' {
        let mut t = b.to_vec();
        t[i] = b'-';
        t[i + 1] = b'-';
        res.push(String::from_utf8(t).unwrap());
      }
    }
    res
  }
}
// ------------------------------- solution end ---------------------------------

fn main() {
  let input = String::from("++++");
  println!("Input:  {}", input);
  println!("Output: {:?}", Solution::generate_possible_next_moves(input));
}
