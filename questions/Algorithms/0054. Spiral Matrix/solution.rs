pub struct Solution {}

// ------------------------------- solution begin -------------------------------
impl Solution {
  pub fn spiral_order(matrix: Vec<Vec<i32>>) -> Vec<i32> {
    let mut order = vec![];
    if matrix.is_empty() || matrix[0].is_empty() {
      return order;
    }
    let rows = matrix.len();
    let cols = matrix[0].len();
    let (mut left, mut right, mut top, mut bottom) = (0i32, cols as i32 - 1, 0i32, rows as i32 - 1);
    while left <= right && top <= bottom {
      for c in left..=right {
        order.push(matrix[top as usize][c as usize]);
      }
      for r in top + 1..=bottom {
        order.push(matrix[r as usize][right as usize]);
      }
      if left < right && top < bottom {
        for c in (left + 1..right).rev() {
          order.push(matrix[bottom as usize][c as usize]);
        }
        for r in (top + 1..=bottom).rev() {
          order.push(matrix[r as usize][left as usize]);
        }
      }
      left += 1;
      right -= 1;
      top += 1;
      bottom -= 1;
    }
    order
  }
}
// ------------------------------- solution end ---------------------------------

fn main() {
  let input = vec![vec![1, 2, 3], vec![4, 5, 6], vec![7, 8, 9]];
  println!("Input:  {:?}", input);
  println!("Output: {:?}", Solution::spiral_order(input));
}
