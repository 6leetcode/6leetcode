use std::collections::HashSet;

pub struct Solution {}

// ------------------------------- solution begin -------------------------------
impl Solution {
  pub fn find_swap_values(array1: Vec<i32>, array2: Vec<i32>) -> Vec<i32> {
    let sum1: i64 = array1.iter().map(|&x| x as i64).sum();
    let sum2: i64 = array2.iter().map(|&x| x as i64).sum();
    let diff = sum2 - sum1;
    if diff % 2 != 0 {
      return vec![];
    }
    let target = diff / 2;
    let set2: HashSet<i64> = array2.iter().map(|&x| x as i64).collect();
    for &x in &array1 {
      let need = x as i64 + target;
      if set2.contains(&need) {
        return vec![x, need as i32];
      }
    }
    vec![]
  }
}
// ------------------------------- solution end ---------------------------------

fn main() {
  let array1 = vec![4, 1, 2, 1, 1, 2];
  let array2 = vec![3, 6, 3, 3];
  println!("Input:  array1 = {:?}, array2 = {:?}", array1, array2);
  println!("Output: {:?}", Solution::find_swap_values(array1, array2));
}
