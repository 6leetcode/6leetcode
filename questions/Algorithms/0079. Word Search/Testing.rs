pub struct Solution {}

// ------------------------------- solution begin -------------------------------
impl Solution {
  pub fn exist(mut board: Vec<Vec<char>>, word: String) -> bool {
    let w = word.as_bytes();
    let rows = board.len();
    let cols = board[0].len();
    fn dfs(board: &mut Vec<Vec<char>>, i: i32, j: i32, w: &[u8], idx: usize) -> bool {
      if idx == w.len() {
        return true;
      }
      if i < 0 || i >= board.len() as i32 || j < 0 || j >= board[0].len() as i32 {
        return false;
      }
      let (ui, uj) = (i as usize, j as usize);
      if board[ui][uj] as u8 != w[idx] {
        return false;
      }
      let tmp = board[ui][uj];
      board[ui][uj] = '#';
      let found = dfs(board, i + 1, j, w, idx + 1)
        || dfs(board, i - 1, j, w, idx + 1)
        || dfs(board, i, j + 1, w, idx + 1)
        || dfs(board, i, j - 1, w, idx + 1);
      board[ui][uj] = tmp;
      found
    }
    for i in 0..rows {
      for j in 0..cols {
        if dfs(&mut board, i as i32, j as i32, w, 0) {
          return true;
        }
      }
    }
    false
  }
}
// ------------------------------- solution end ---------------------------------

fn main() {
  let board = vec![
    vec!['A', 'B', 'C', 'E'],
    vec!['S', 'F', 'C', 'S'],
    vec!['A', 'D', 'E', 'E'],
  ];
  let word = String::from("ABCCED");
  println!("Input:  {:?} {}", board, word);
  println!("Output: {}", Solution::exist(board, word));
}
