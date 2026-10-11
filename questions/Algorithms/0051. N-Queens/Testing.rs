pub struct Solution {}

// ------------------------------- solution begin -------------------------------
impl Solution {
  pub fn solve_n_queens(n: i32) -> Vec<Vec<String>> {
    fn is_safe(cols: &[i32], row: i32, col: i32) -> bool {
      for r in 0..row {
        if cols[r as usize] == col || (cols[r as usize] - col).abs() == (r - row).abs() {
          return false;
        }
      }
      true
    }
    fn backtrack(n: i32, row: i32, cols: &mut Vec<i32>, res: &mut Vec<Vec<String>>) {
      if row == n {
        let mut board = vec![];
        for i in 0..n {
          let mut line = vec![b'.'; n as usize];
          line[cols[i as usize] as usize] = b'Q';
          board.push(String::from_utf8(line).unwrap());
        }
        res.push(board);
        return;
      }
      for col in 0..n {
        if is_safe(cols, row, col) {
          cols[row as usize] = col;
          backtrack(n, row + 1, cols, res);
        }
      }
    }
    let mut res = vec![];
    let mut cols = vec![-1; n as usize];
    backtrack(n, 0, &mut cols, &mut res);
    res
  }
}
// ------------------------------- solution end ---------------------------------

fn main() {
  let input = 4;
  println!("Input:  {}", input);
  println!("Output: {:?}", Solution::solve_n_queens(input));
}
