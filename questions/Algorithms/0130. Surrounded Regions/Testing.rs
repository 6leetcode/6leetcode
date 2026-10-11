pub struct Solution {}

// ------------------------------- solution begin -------------------------------
impl Solution {
  pub fn solve(board: &mut Vec<Vec<char>>) {
    if board.is_empty() {
      return;
    }
    let rows = board.len() as i32;
    let cols = board[0].len() as i32;

    fn dfs(board: &mut Vec<Vec<char>>, i: i32, j: i32, rows: i32, cols: i32) {
      if i < 0 || i >= rows || j < 0 || j >= cols || board[i as usize][j as usize] != 'O' {
        return;
      }
      board[i as usize][j as usize] = '#';
      dfs(board, i + 1, j, rows, cols);
      dfs(board, i - 1, j, rows, cols);
      dfs(board, i, j + 1, rows, cols);
      dfs(board, i, j - 1, rows, cols);
    }

    for i in 0..rows {
      dfs(board, i, 0, rows, cols);
      dfs(board, i, cols - 1, rows, cols);
    }
    for j in 0..cols {
      dfs(board, 0, j, rows, cols);
      dfs(board, rows - 1, j, rows, cols);
    }

    for i in 0..rows as usize {
      for j in 0..cols as usize {
        if board[i][j] == 'O' {
          board[i][j] = 'X';
        } else if board[i][j] == '#' {
          board[i][j] = 'O';
        }
      }
    }
  }
}
// ------------------------------- solution end ---------------------------------

fn main() {
  let mut t1 = vec![
    vec!['X', 'X', 'X', 'X'],
    vec!['X', 'O', 'O', 'X'],
    vec!['X', 'X', 'O', 'X'],
    vec!['X', 'O', 'X', 'X'],
  ];
  println!("Input:  {:?}", t1);
  Solution::solve(&mut t1);
  println!("Output: {:?}", t1);

  let mut t2 = vec![vec!['X']];
  println!("Input:  {:?}", t2);
  Solution::solve(&mut t2);
  println!("Output: {:?}", t2);
}
