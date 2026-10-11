pub struct Solution {}

// ------------------------------- solution begin -------------------------------
impl Solution {
  pub fn pond_sizes(mut land: Vec<Vec<i32>>) -> Vec<i32> {
    let rows = land.len();
    let cols = land[0].len();
    fn dfs(land: &mut Vec<Vec<i32>>, r: i32, c: i32, rows: i32, cols: i32) -> i32 {
      if r < 0 || r >= rows || c < 0 || c >= cols || land[r as usize][c as usize] != 0 {
        return 0;
      }
      land[r as usize][c as usize] = -1;
      let mut size = 1;
      for dr in -1..=1 {
        for dc in -1..=1 {
          if dr != 0 || dc != 0 {
            size += dfs(land, r + dr, c + dc, rows, cols);
          }
        }
      }
      size
    }
    let mut res = vec![];
    for i in 0..rows {
      for j in 0..cols {
        if land[i][j] == 0 {
          res.push(dfs(&mut land, i as i32, j as i32, rows as i32, cols as i32));
        }
      }
    }
    res.sort();
    res
  }
}
// ------------------------------- solution end ---------------------------------

fn main() {
  let land = vec![
    vec![0, 2, 1, 0],
    vec![0, 1, 0, 1],
    vec![1, 1, 0, 1],
    vec![0, 1, 0, 1],
  ];
  println!("Input:  [[0,2,1,0],[0,1,0,1],[1,1,0,1],[0,1,0,1]]");
  println!("Output: {:?}", Solution::pond_sizes(land));
}
