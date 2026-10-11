pub struct Solution {}

// ------------------------------- solution begin -------------------------------
impl Solution {
  pub fn generate_matrix(n: i32) -> Vec<Vec<i32>> {
    let n = n as usize;
    let mut m = vec![vec![0; n]; n];
    let (mut top, mut bottom, mut left, mut right, mut num) = (0i32, n as i32 - 1, 0i32, n as i32 - 1, 1);
    while top <= bottom && left <= right {
      for c in left..=right {
        m[top as usize][c as usize] = num;
        num += 1;
      }
      top += 1;
      for r in top..=bottom {
        m[r as usize][right as usize] = num;
        num += 1;
      }
      right -= 1;
      if top <= bottom {
        for c in (left..=right).rev() {
          m[bottom as usize][c as usize] = num;
          num += 1;
        }
        bottom -= 1;
      }
      if left <= right {
        for r in (top..=bottom).rev() {
          m[r as usize][left as usize] = num;
          num += 1;
        }
        left += 1;
      }
    }
    m
  }
}
// ------------------------------- solution end ---------------------------------

fn main() {
  let input = 3;
  println!("Input:  {}", input);
  println!("Output: {:?}", Solution::generate_matrix(input));
}
