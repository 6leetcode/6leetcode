pub struct Solution {}

// ------------------------------- solution begin -------------------------------
impl Solution {
  pub fn min_cut(s: String) -> i32 {
    let bytes = s.as_bytes();
    let n = bytes.len();
    if n <= 1 {
      return 0;
    }

    let mut pal = vec![vec![false; n]; n];
    for i in (0..n).rev() {
      for j in i..n {
        if bytes[i] == bytes[j] && (j - i < 2 || pal[i + 1][j - 1]) {
          pal[i][j] = true;
        }
      }
    }

    let mut dp = vec![0i32; n];
    for i in 0..n {
      if pal[0][i] {
        dp[i] = 0;
        continue;
      }
      dp[i] = i as i32;
      for j in 1..=i {
        if pal[j][i] {
          dp[i] = dp[i].min(dp[j - 1] + 1);
        }
      }
    }
    dp[n - 1]
  }
}
// ------------------------------- solution end ---------------------------------

fn main() {
  for s in vec!["aab", "a", "ab"] {
    println!("Input:  {}", s);
    println!("Output: {}", Solution::min_cut(s.to_string()));
  }
}
