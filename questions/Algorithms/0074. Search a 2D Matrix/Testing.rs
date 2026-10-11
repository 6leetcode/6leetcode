pub struct Solution {}

// ------------------------------- solution begin -------------------------------
impl Solution {
  pub fn search_matrix(matrix: Vec<Vec<i32>>, target: i32) -> bool {
    if matrix.is_empty() {
      return false;
    }
    let mut i = 0i32;
    let mut j = matrix[0].len() as i32 - 1;
    while i < matrix.len() as i32 && j >= 0 {
      let v = matrix[i as usize][j as usize];
      if v == target {
        return true;
      } else if v > target {
        j -= 1;
      } else {
        i += 1;
      }
    }
    false
  }
}
// ------------------------------- solution end ---------------------------------

fn main() {
  let input1 = vec![
    vec![1, 3, 5, 7],
    vec![10, 11, 16, 20],
    vec![23, 30, 34, 50],
  ];
  let input2 = 11;
  println!("Input:  {:?} {}", input1, input2);
  println!("Output: {}", Solution::search_matrix(input1, input2));
}
