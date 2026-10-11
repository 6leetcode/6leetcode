pub struct Solution {}

// ------------------------------- solution begin -------------------------------
impl Solution {
  pub fn is_valid_sudoku(board: Vec<Vec<char>>) -> bool {
    let mut rows = [[false; 9]; 9];
    let mut cols = [[false; 9]; 9];
    let mut boxes = [[false; 9]; 9];
    for i in 0..9 {
      for j in 0..9 {
        let c = board[i][j];
        if c == '.' {
          continue;
        }
        let d = c as usize - '1' as usize;
        let b = (i / 3) * 3 + j / 3;
        if rows[i][d] || cols[j][d] || boxes[b][d] {
          return false;
        }
        rows[i][d] = true;
        cols[j][d] = true;
        boxes[b][d] = true;
      }
    }
    true
  }
}
// ------------------------------- solution end ---------------------------------

fn main() {
  let raw = [
    "..9748...",
    "7........",
    ".2.1.9...",
    "..7...24.",
    ".64.1.59.",
    ".98...3..",
    "...8.3.2.",
    "........6",
    "...2759..",
  ];
  let mut input = String::new();
  let mut board: Vec<Vec<char>> = vec![];
  for s in raw {
    input.push_str(s);
    board.push(s.chars().collect());
  }
  println!("Input:  {}", input);
  println!("Output: {}", Solution::is_valid_sudoku(board));
}
