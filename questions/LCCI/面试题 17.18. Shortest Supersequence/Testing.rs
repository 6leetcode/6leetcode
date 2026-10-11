use std::collections::HashSet;

pub struct Solution {}

// ------------------------------- solution begin -------------------------------
impl Solution {
  pub fn shortest_seq(big: Vec<i32>, small: Vec<i32>) -> Vec<i32> {
    let need: HashSet<i32> = small.iter().cloned().collect();
    let mut best_len = big.len() + 1;
    let mut best = vec![-1i32, -1i32];
    for l in 0..big.len() {
      if !need.contains(&big[l]) {
        continue;
      }
      let mut seen: HashSet<i32> = HashSet::new();
      let mut r = l;
      while r < big.len() {
        if need.contains(&big[r]) {
          seen.insert(big[r]);
          if seen.len() == need.len() {
            break;
          }
        }
        r += 1;
      }
      if seen.len() == need.len() && r - l + 1 < best_len {
        best_len = r - l + 1;
        best = vec![l as i32, r as i32];
      }
    }
    if best[0] == -1 {
      vec![]
    } else {
      best
    }
  }
}
// ------------------------------- solution end ---------------------------------

fn main() {
  let big = vec![7, 5, 9, 0, 2, 1, 3, 5, 7, 9, 1, 1, 5, 8, 8, 9, 7];
  let small = vec![1, 5, 9];
  println!("Input:  big = {:?}, small = {:?}", big, small);
  println!("Output: {:?}", Solution::shortest_seq(big, small));
}
