pub struct Solution {}

// ------------------------------- solution begin -------------------------------
impl Solution {
  pub fn max_area(height: Vec<i32>) -> i32 {
    let (mut left, mut right, mut best) = (0usize, height.len() - 1, 0i32);
    while left < right {
      let h = height[left].min(height[right]);
      best = best.max((right - left) as i32 * h);
      if height[left] < height[right] {
        left += 1;
      } else {
        right -= 1;
      }
    }
    best
  }
}
// ------------------------------- solution end ---------------------------------

fn main() {
  let input = vec![1, 8, 6, 2, 5, 4, 8, 3, 7];
  println!("Input:  {:?}", input);
  println!("Output: {}", Solution::max_area(input));
}
