pub struct Solution {}

// ------------------------------- solution begin -------------------------------
impl Solution {
  pub fn flood_fill(image: &mut Vec<Vec<i32>>, sr: i32, sc: i32, new_color: i32) {
    let old_color = image[sr as usize][sc as usize];
    if old_color == new_color {
      return;
    }
    let rows = image.len() as i32;
    let cols = image[0].len() as i32;
    fn dfs(image: &mut Vec<Vec<i32>>, r: i32, c: i32, old_color: i32, new_color: i32, rows: i32, cols: i32) {
      if r < 0 || r >= rows || c < 0 || c >= cols || image[r as usize][c as usize] != old_color {
        return;
      }
      image[r as usize][c as usize] = new_color;
      dfs(image, r + 1, c, old_color, new_color, rows, cols);
      dfs(image, r - 1, c, old_color, new_color, rows, cols);
      dfs(image, r, c + 1, old_color, new_color, rows, cols);
      dfs(image, r, c - 1, old_color, new_color, rows, cols);
    }
    dfs(image, sr, sc, old_color, new_color, rows, cols);
  }
}
// ------------------------------- solution end ---------------------------------

fn main() {
  let mut image = vec![vec![1, 1, 1], vec![1, 1, 0], vec![1, 0, 1]];
  println!("Input:  [[1,1,1],[1,1,0],[1,0,1]], sr = 1, sc = 1, newColor = 2");
  Solution::flood_fill(&mut image, 1, 1, 2);
  println!("Output: {:?}", image);
}
