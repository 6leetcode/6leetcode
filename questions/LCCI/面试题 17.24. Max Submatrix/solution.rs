pub struct Solution {}

// ------------------------------- solution begin -------------------------------
impl Solution {
  pub fn get_max_matrix(matrix: Vec<Vec<i32>>) -> Vec<i32> {
    let rows = matrix.len();
    let cols = matrix[0].len();
    let mut best = i64::MIN;
    let mut res = vec![0i32; 4];
    for top in 0..rows {
      let mut col_sum = vec![0i64; cols];
      for bottom in top..rows {
        for j in 0..cols {
          col_sum[j] += matrix[bottom][j] as i64;
        }
        let mut cur = 0i64;
        let mut start = 0usize;
        for j in 0..cols {
          if cur <= 0 {
            cur = col_sum[j];
            start = j;
          } else {
            cur += col_sum[j];
          }
          if cur > best {
            best = cur;
            res = vec![top as i32, start as i32, bottom as i32, j as i32];
          }
        }
      }
    }
    res
  }
}
// ------------------------------- solution end ---------------------------------

fn main() {
  let matrix = vec![vec![-1, 0, 0], vec![0, -1, 0]];
  println!("Input:  [[-1,0,0],[0,-1,0]]");
  println!("Output: {:?}", Solution::get_max_matrix(matrix));
}
