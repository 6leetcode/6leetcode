pub struct Solution {}

// ------------------------------- solution begin -------------------------------
impl Solution {
  pub fn minimum_total(triangle: Vec<Vec<i32>>) -> i32 {
    let n = triangle.len();
    let mut dp = triangle[n - 1].clone();
    for i in (0..n - 1).rev() {
      for j in 0..=i {
        dp[j] = triangle[i][j] + dp[j].min(dp[j + 1]);
      }
    }
    dp[0]
  }
}
// ------------------------------- solution end ---------------------------------

fn main() {
  let cases: Vec<Vec<Vec<i32>>> = vec![
    vec![vec![2], vec![3, 4], vec![6, 5, 7], vec![4, 1, 8, 3]],
    vec![vec![-10]],
  ];
  for triangle in cases.iter() {
    println!("Input:  {:?}", triangle);
    println!("Output: {}", Solution::minimum_total(triangle.clone()));
  }
}
