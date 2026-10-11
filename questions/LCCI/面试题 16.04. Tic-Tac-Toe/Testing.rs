pub struct Solution {}

// ------------------------------- solution begin -------------------------------
impl Solution {
  pub fn tictactoe(board: Vec<String>) -> String {
    let grid: Vec<Vec<char>> = board.iter().map(|s| s.chars().collect()).collect();
    let n = grid.len();
    let win = |ch: char| -> bool {
      for i in 0..n {
        if (0..n).all(|j| grid[i][j] == ch) || (0..n).all(|j| grid[j][i] == ch) {
          return true;
        }
      }
      if (0..n).all(|i| grid[i][i] == ch) || (0..n).all(|i| grid[i][n - 1 - i] == ch) {
        return true;
      }
      false
    };
    if win('X') {
      return "X".to_string();
    }
    if win('O') {
      return "O".to_string();
    }
    for row in &grid {
      for &c in row {
        if c == ' ' {
          return "Pending".to_string();
        }
      }
    }
    "Draw".to_string()
  }
}
// ------------------------------- solution end ---------------------------------

fn main() {
  let board: Vec<String> = ["O X", " XO", "X O"].iter().map(|s| s.to_string()).collect();
  println!("Input:  [\"O X\", \" XO\", \"X O\"]");
  println!("Output: {}", Solution::tictactoe(board));
}
