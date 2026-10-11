pub struct Solution {}

// ------------------------------- solution begin -------------------------------
impl Solution {
  pub fn rotate(matrix: &mut Vec<Vec<i32>>) {
    let n = matrix.len();
    for i in 0..n {
      for j in i + 1..n {
        let tmp = matrix[i][j];
        matrix[i][j] = matrix[j][i];
        matrix[j][i] = tmp;
      }
    }
    for row in matrix.iter_mut() {
      row.reverse();
    }
  }
}
// ------------------------------- solution end ---------------------------------

fn main() {
  let mut input = vec![vec![1, 2, 3], vec![4, 5, 6], vec![7, 8, 9]];
  println!("Input:  {:?}", input);
  Solution::rotate(&mut input);
  println!("Output: {:?}", input);
}
