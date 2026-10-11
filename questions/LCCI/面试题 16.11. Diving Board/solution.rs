pub struct Solution {}

// ------------------------------- solution begin -------------------------------
impl Solution {
  pub fn diving_board(shorter: i32, longer: i32, k: i32) -> Vec<i32> {
    if k == 0 {
      return vec![];
    }
    if shorter == longer {
      return vec![shorter * k];
    }
    (0..=k).map(|i| shorter * (k - i) + longer * i).collect()
  }
}
// ------------------------------- solution end ---------------------------------

fn main() {
  let (shorter, longer, k) = (1, 2, 3);
  println!("Input:  shorter = {}, longer = {}, k = {}", shorter, longer, k);
  println!("Output: {:?}", Solution::diving_board(shorter, longer, k));
}
