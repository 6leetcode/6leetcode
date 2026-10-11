pub struct Solution {}

// ------------------------------- solution begin -------------------------------
impl Solution {
  pub fn min_path_sum(grid: Vec<Vec<i32>>) -> i32 {
    let m = grid.len();
    let n = grid[0].len();
    let mut dp = vec![0i32; n];
    dp[0] = grid[0][0];
    for j in 1..n {
      dp[j] = dp[j - 1] + grid[0][j];
    }
    for i in 1..m {
      dp[0] += grid[i][0];
      for j in 1..n {
        dp[j] = dp[j].min(dp[j - 1]) + grid[i][j];
      }
    }
    dp[n - 1]
  }
}
// ------------------------------- solution end ---------------------------------

fn main() {
  let input = vec![vec![1, 3, 1], vec![1, 5, 1], vec![4, 2, 1]];
  println!("Input:  {:?}", input);
  println!("Output: {}", Solution::min_path_sum(input));
}
