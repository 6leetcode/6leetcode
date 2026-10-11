pub struct Solution {}

// ------------------------------- solution begin -------------------------------
impl Solution {
  pub fn find_rotate_steps(ring: String, key: String) -> i32 {
    let ring = ring.as_bytes();
    let key = key.as_bytes();
    let n = ring.len();
    let m = key.len();
    let mut pos: Vec<Vec<usize>> = vec![vec![]; 26];
    for (i, &c) in ring.iter().enumerate() {
      pos[(c - b'a') as usize].push(i);
    }
    let inf = i32::MAX / 2;
    let mut dp = vec![vec![inf; n]; m];
    for &i in &pos[(key[0] - b'a') as usize] {
      dp[0][i] = i.min(n - i) as i32 + 1;
    }
    for i in 1..m {
      for &j in &pos[(key[i] - b'a') as usize] {
        for &k in &pos[(key[i - 1] - b'a') as usize] {
          let d = (j as i32 - k as i32).abs();
          let step = d.min(n as i32 - d);
          dp[i][j] = dp[i][j].min(dp[i - 1][k] + step + 1);
        }
      }
    }
    *dp[m - 1].iter().min().unwrap()
  }
}
// ------------------------------- solution end ---------------------------------

fn main() {
  let input1 = String::from("godding");
  let input2 = String::from("gd");
  println!("Input:  {} {}", input1, input2);
  println!("Output: {}", Solution::find_rotate_steps(input1, input2));
}
