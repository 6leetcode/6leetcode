pub struct Solution {}

// ------------------------------- solution begin -------------------------------
use std::collections::HashSet;
impl Solution {
  pub fn longest_consecutive(nums: Vec<i32>) -> i32 {
    let set: HashSet<i32> = nums.into_iter().collect();
    let mut best = 0;
    for &num in &set {
      if !set.contains(&(num - 1)) {
        let mut cur = num;
        let mut len = 1;
        while set.contains(&(cur + 1)) {
          cur += 1;
          len += 1;
        }
        if len > best {
          best = len;
        }
      }
    }
    best
  }
}
// ------------------------------- solution end ---------------------------------

fn main() {
  let tests: Vec<Vec<i32>> = vec![
    vec![100, 4, 200, 1, 3, 2],
    vec![0, 3, 7, 2, 5, 8, 4, 6, 0, 1],
    vec![1, 0, 1, 2],
  ];
  for nums in tests {
    println!("Input:  {:?}", nums);
    println!("Output: {}", Solution::longest_consecutive(nums));
  }
}
