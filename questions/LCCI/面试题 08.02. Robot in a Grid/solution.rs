pub struct Solution {}

// ------------------------------- solution begin -------------------------------
impl Solution {
  pub fn path_with_obstacles(obstacle_grid: Vec<Vec<i32>>) -> Vec<Vec<i32>> {
    let rows = obstacle_grid.len();
    let cols = obstacle_grid[0].len();
    let mut visited = vec![vec![false; cols]; rows];
    let mut path: Vec<Vec<i32>> = vec![];
    fn dfs(
      g: &Vec<Vec<i32>>,
      r: usize,
      c: usize,
      visited: &mut Vec<Vec<bool>>,
      path: &mut Vec<Vec<i32>>,
    ) -> bool {
      if r >= g.len() || c >= g[0].len() || g[r][c] == 1 || visited[r][c] {
        return false;
      }
      visited[r][c] = true;
      if (r == g.len() - 1 && c == g[0].len() - 1)
        || dfs(g, r + 1, c, visited, path)
        || dfs(g, r, c + 1, visited, path)
      {
        path.push(vec![r as i32, c as i32]);
        return true;
      }
      false
    }
    if !dfs(&obstacle_grid, 0, 0, &mut visited, &mut path) {
      return vec![];
    }
    path.reverse();
    path
  }
}
// ------------------------------- solution end ---------------------------------

fn main() {
  let input = vec![vec![0, 0, 0], vec![0, 1, 0], vec![0, 0, 0]];
  println!("Input:  [[0,0,0],[0,1,0],[0,0,0]]");
  println!("Output: {:?}", Solution::path_with_obstacles(input));
}
