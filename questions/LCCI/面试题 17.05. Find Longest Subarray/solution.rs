use std::collections::HashMap;

pub struct Solution {}

// ------------------------------- solution begin -------------------------------
impl Solution {
  pub fn find_longest_subarray(array: Vec<String>) -> Vec<String> {
    let mut first: HashMap<i32, i32> = HashMap::new();
    first.insert(0, -1);
    let (mut sum, mut best_len, mut best_start) = (0, 0, 0);
    for (i, s) in array.iter().enumerate() {
      let c = s.as_bytes()[0];
      if c.is_ascii_digit() {
        sum -= 1;
      } else {
        sum += 1;
      }
      if let Some(&idx) = first.get(&sum) {
        if i as i32 - idx > best_len {
          best_len = i as i32 - idx;
          best_start = idx + 1;
        }
      } else {
        first.insert(sum, i as i32);
      }
    }
    array[best_start as usize..(best_start + best_len) as usize].to_vec()
  }
}
// ------------------------------- solution end ---------------------------------

fn main() {
  let array: Vec<String> = ["A", "1", "B", "C", "D", "2", "3", "4", "E", "5", "F", "G", "6", "7", "H", "I", "J", "K", "L", "M"]
    .iter()
    .map(|s| s.to_string())
    .collect();
  println!("Input:  [\"A\",\"1\",\"B\",\"C\",\"D\",\"2\",\"3\",\"4\",\"E\",\"5\",\"F\",\"G\",\"6\",\"7\",\"H\",\"I\",\"J\",\"K\",\"L\",\"M\"]");
  println!("Output: {:?}", Solution::find_longest_subarray(array));
}
