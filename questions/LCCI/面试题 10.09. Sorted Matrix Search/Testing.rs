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
      }
      if v > target {
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
  let matrix = vec![
    vec![1, 4, 7, 11, 15],
    vec![2, 5, 8, 12, 19],
    vec![3, 6, 9, 16, 22],
    vec![10, 13, 14, 17, 24],
    vec![18, 21, 23, 26, 30],
  ];
  let target = 5;
  println!("Input:  matrix (sorted rows/cols), target = {}", target);
  println!("Output: {}", Solution::search_matrix(matrix, target));
}
