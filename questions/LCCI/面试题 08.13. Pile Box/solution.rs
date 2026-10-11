pub struct Solution {}

// ------------------------------- solution begin -------------------------------
impl Solution {
  pub fn pile_box(mut box_: Vec<Vec<i32>>) -> i32 {
    box_.sort();
    let n = box_.len();
    let mut dp = vec![0i32; n];
    let mut best = 0;
    for i in 0..n {
      dp[i] = box_[i][2];
      for j in 0..i {
        if box_[j][0] < box_[i][0] && box_[j][1] < box_[i][1] && box_[j][2] < box_[i][2] {
          dp[i] = dp[i].max(dp[j] + box_[i][2]);
        }
      }
      best = best.max(dp[i]);
    }
    best
  }
}
// ------------------------------- solution end ---------------------------------

fn main() {
  let box_ = vec![vec![1, 1, 1], vec![2, 2, 2], vec![3, 3, 3]];
  println!("Input:  [[1,1,1],[2,2,2],[3,3,3]]");
  println!("Output: {}", Solution::pile_box(box_));
}
