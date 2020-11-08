pub struct Solution {}

// ------------------------------- solution begin -------------------------------

use std::collections::HashMap;
impl Solution {
  pub fn two_sum(nums: Vec<i32>, target: i32) -> Vec<i32> {
    let mut map = HashMap::with_capacity(nums.len());
    for (index, num) in nums.iter().enumerate() {
      match map.get(&(target - num)) {
        None => {
          map.insert(num, index);
        }
        Some(sub_index) => return vec![*sub_index as i32, index as i32],
      }
    }
    vec![]
  }
}

// ------------------------------- solution end ---------------------------------

fn main() {
  let input1 = vec![1, 2, 3];
  let input2: i32 = 3;
  println!("Input:  {:?} {}", input1, input2);
  println!("Output: {:?}", Solution::two_sum(input1, input2));
}
