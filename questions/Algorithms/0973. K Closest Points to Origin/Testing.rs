pub struct Solution {}

// ------------------------------- solution begin -------------------------------
impl Solution {
  pub fn k_closest(points: Vec<Vec<i32>>, k: i32) -> Vec<Vec<i32>> {
    let mut points = points;
    points.sort_by_key(|p| p[0] * p[0] + p[1] * p[1]);
    points[..k as usize].to_vec()
  }
}
// ------------------------------- solution end ---------------------------------

fn main() {
  let input1 = vec![vec![3, 3], vec![5, -1], vec![-2, 4]];
  let input2 = 2;
  println!("Input:  {:?} {}", input1, input2);
  println!("Output: {:?}", Solution::k_closest(input1, input2));
}
