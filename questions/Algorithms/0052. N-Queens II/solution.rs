pub struct Solution {}

// ------------------------------- solution begin -------------------------------
impl Solution {
  pub fn total_n_queens(n: i32) -> i32 {
    fn is_safe(cols: &[i32], row: i32, col: i32) -> bool {
      for r in 0..row {
        if cols[r as usize] == col || (cols[r as usize] - col).abs() == (r - row).abs() {
          return false;
        }
      }
      true
    }
    fn backtrack(n: i32, row: i32, cols: &mut Vec<i32>, count: &mut i32) {
      if row == n {
        *count += 1;
        return;
      }
      for col in 0..n {
        if is_safe(cols, row, col) {
          cols[row as usize] = col;
          backtrack(n, row + 1, cols, count);
        }
      }
    }
    let mut count = 0;
    let mut cols = vec![-1; n as usize];
    backtrack(n, 0, &mut cols, &mut count);
    count
  }
}
// ------------------------------- solution end ---------------------------------

fn main() {
  let input = 4;
  println!("Input:  {}", input);
  println!("Output: {}", Solution::total_n_queens(input));
}
