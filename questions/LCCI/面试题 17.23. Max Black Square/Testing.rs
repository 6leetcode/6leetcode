pub struct Solution {}

// ------------------------------- solution begin -------------------------------
impl Solution {
  pub fn max_black_square(matrix: Vec<Vec<i32>>) -> i32 {
    let n = matrix.len();
    let mut dp = vec![vec![0i32; n]; n];
    let mut best = 0;
    for i in 0..n {
      for j in 0..matrix[i].len() {
        if matrix[i][j] == 1 {
          if i == 0 || j == 0 {
            dp[i][j] = 1;
          } else {
            dp[i][j] = dp[i - 1][j - 1].min(dp[i - 1][j]).min(dp[i][j - 1]) + 1;
          }
          best = best.max(dp[i][j]);
        }
      }
    }
    best
  }
}
// ------------------------------- solution end ---------------------------------

fn main() {
  let matrix = vec![
    vec![0, 1, 1, 1],
    vec![1, 1, 1, 1],
    vec![0, 1, 1, 1],
    vec![0, 1, 1, 1],
  ];
  println!("Input:  [[0,1,1,1],[1,1,1,1],[0,1,1,1],[0,1,1,1]]");
  println!("Output: {}", Solution::max_black_square(matrix));
}
