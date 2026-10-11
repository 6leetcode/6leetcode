pub struct Solution {}

// ------------------------------- solution begin -------------------------------
impl Solution {
  pub fn unique_paths_with_obstacles(obstacle_grid: Vec<Vec<i32>>) -> i32 {
    let m = obstacle_grid.len();
    let n = obstacle_grid[0].len();
    let mut dp = vec![0i64; n];
    dp[0] = if obstacle_grid[0][0] == 0 { 1 } else { 0 };
    for j in 1..n {
      dp[j] = if obstacle_grid[0][j] == 0 { dp[j - 1] } else { 0 };
    }
    for i in 1..m {
      if obstacle_grid[i][0] == 1 {
        dp[0] = 0;
      }
      for j in 1..n {
        dp[j] = if obstacle_grid[i][j] == 1 { 0 } else { dp[j] + dp[j - 1] };
      }
    }
    dp[n - 1] as i32
  }
}
// ------------------------------- solution end ---------------------------------

fn main() {
  let input = vec![vec![0, 0, 0], vec![0, 1, 0], vec![0, 0, 0]];
  println!("Input:  {:?}", input);
  println!("Output: {}", Solution::unique_paths_with_obstacles(input));
}
