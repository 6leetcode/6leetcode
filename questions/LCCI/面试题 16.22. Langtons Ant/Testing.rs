use std::collections::HashSet;

pub struct Solution {}

// ------------------------------- solution begin -------------------------------
impl Solution {
  pub fn print_k_moves(k: i32) -> Vec<String> {
    let dr = [0i32, 1, 0, -1];
    let dc = [1i32, 0, -1, 0];
    let (mut dir, mut r, mut c) = (0usize, 0i32, 0i32);
    let mut black: HashSet<(i32, i32)> = HashSet::new();
    let mut visited: HashSet<(i32, i32)> = HashSet::new();
    visited.insert((0, 0));
    for _ in 0..k {
      if !black.contains(&(r, c)) {
        black.insert((r, c));
        dir = (dir + 1) % 4;
      } else {
        black.remove(&(r, c));
        dir = (dir + 3) % 4;
      }
      r += dr[dir];
      c += dc[dir];
      visited.insert((r, c));
    }
    let (mut min_r, mut max_r, mut min_c, mut max_c) = (0, 0, 0, 0);
    for &(pr, pc) in &visited {
      min_r = min_r.min(pr);
      max_r = max_r.max(pr);
      min_c = min_c.min(pc);
      max_c = max_c.max(pc);
    }
    let letters = ['R', 'D', 'L', 'U'];
    let mut res = vec![];
    for i in min_r..=max_r {
      let mut row = String::new();
      for j in min_c..=max_c {
        if i == r && j == c {
          row.push(letters[dir]);
        } else if black.contains(&(i, j)) {
          row.push('X');
        } else {
          row.push('_');
        }
      }
      res.push(row);
    }
    res
  }
}
// ------------------------------- solution end ---------------------------------

fn main() {
  let k = 0;
  println!("Input:  {}", k);
  println!("Output: {:?}", Solution::print_k_moves(k));
}
